// A bridge between ROS2 and AirSim

#include "stdafx.h"

#include <chrono>
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include "opencv2/opencv.hpp"

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/accel.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/quaternion.hpp"
#include "geometry_msgs/msg/quaternion_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "geometry_msgs/msg/vector3_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/path.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/header.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float32.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"

#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using std::placeholders::_1;

using namespace std::chrono;
using namespace std::chrono_literals;

typedef ImageCaptureBase::ImageRequest ImageRequest;
typedef ImageCaptureBase::ImageResponse ImageResponse;
typedef ImageCaptureBase::ImageType ImageType;

msr::airlib::MultirotorRpcLibClient client;
int initialization_count;

class ROS2AirSim : public rclcpp::Node
{
public:
	bool initialize;

	ROS2AirSim() : Node("AirSim"), bridgeCount_(0), stateCount_(0), cameraCount_(0)
	{
		// Set the start time
		startTime_ = high_resolution_clock::now();
		initialize = false;

		// Create the bridge state publishers
		bridgeTimer_ = this->create_wall_timer(1000ms, std::bind(&ROS2AirSim::bridge_callback, this));
		bridgeConnectedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/exo/airsim/drone/bridge/connected");
		bridgePingPublisher_ = this->create_publisher<std_msgs::msg::String>("/exo/airsim/drone/bridge/ping");

		// Create the drone state publishers
		stateTimer_ = this->create_wall_timer(100ms, std::bind(&ROS2AirSim::state_callback, this));
		connectedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/exo/airsim/drone/simulator/connected");
		pingPublisher_ = this->create_publisher<std_msgs::msg::String>("/exo/airsim/drone/simulator/ping");
		accelPublisher_ = this->create_publisher<geometry_msgs::msg::Accel>("/exo/airsim/drone/state/accel");
		fixPublisher_ = this->create_publisher<sensor_msgs::msg::NavSatFix>("/exo/airsim/drone/state/gps");
		odomPublisher_ = this->create_publisher<nav_msgs::msg::Odometry>("/exo/airsim/drone/state/odometry");
		imuPublisher_ = this->create_publisher<sensor_msgs::msg::Imu>("/exo/airsim/drone/state/imu");
		landedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/exo/airsim/drone/state/landed");
		collidedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/exo/airsim/drone/state/collided");
		batteryPublisher_ = this->create_publisher<sensor_msgs::msg::BatteryState>("/exo/airsim/drone/state/battery");

		// Create the camera publishers
		cameraTimer_ = this->create_wall_timer(250ms, std::bind(&ROS2AirSim::camera_callback, this));
		frontCameraPosePublisher_ = this->create_publisher<geometry_msgs::msg::Pose>("/exo/airsim/drone/camera/front/pose");
		frontColorPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/exo/airsim/drone/camera/front/color/image_raw/compressed");
		frontRawDepthPublisher_ = this->create_publisher<sensor_msgs::msg::Image>("/exo/airsim/drone/camera/front/depth/image_raw");
		frontDepthPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/exo/airsim/drone/camera/front/depth/image_raw/compressed");
		downColorPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/exo/airsim/drone/camera/down/color/image_raw/compressed");
		rearColorPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/exo/airsim/drone/camera/rear/color/image_raw/compressed");

		//These options are currently unused, but this is the default
		rmw_qos_profile_t subscriptionOptions;
		subscriptionOptions.depth = 1;
		subscriptionOptions.durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
		subscriptionOptions.reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
		subscriptionOptions.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;

		// Create the action subscriptions
		takeoffSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/actions/takeoff", std::bind(&ROS2AirSim::takeoff_callback, this, _1));
		landSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/actions/land", std::bind(&ROS2AirSim::land_callback, this, _1));
		goHomeSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/actions/go_home", std::bind(&ROS2AirSim::go_home_callback, this, _1));
		hoverSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/actions/hover", std::bind(&ROS2AirSim::hover_callback, this, _1));
		flyAroundSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/actions/fly_around", std::bind(&ROS2AirSim::fly_around_callback, this, _1));

		// Create the control subscriptions
		cmdVelSubscription_ = this->create_subscription<geometry_msgs::msg::Twist>("/exo/airsim/drone/controls/cmd_vel", std::bind(&ROS2AirSim::cmd_vel_callback, this, _1));
		moveSubscription_ = this->create_subscription<geometry_msgs::msg::Twist>("/exo/airsim/drone/controls/move_by_velocity", std::bind(&ROS2AirSim::move_callback, this, _1));
		angleSubscription_ = this->create_subscription<geometry_msgs::msg::Twist>("/exo/airsim/drone/controls/move_by_angle", std::bind(&ROS2AirSim::angle_callback, this, _1));
		rotateSubscription_ = this->create_subscription<std_msgs::msg::Float32>("/exo/airsim/drone/controls/rotate_by_velocity", std::bind(&ROS2AirSim::rotate_callback, this, _1));
		pathSubscription_ = this->create_subscription<nav_msgs::msg::Path>("/exo/airsim/drone/controls/move_by_path", std::bind(&ROS2AirSim::path_callback, this, _1));

		// Create the simulator subscriptions
		initializeSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/simulator/initialize", std::bind(&ROS2AirSim::initialize_callback, this, _1));
		resetSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/exo/airsim/drone/simulator/reset", std::bind(&ROS2AirSim::reset_callback, this, _1));
		pingSubscription_ = this->create_subscription<std_msgs::msg::String>("/exo/airsim/drone/bridge/ping", std::bind(&ROS2AirSim::ping_callback, this, _1));

		RCLCPP_INFO(this->get_logger(), "Bridge initialized: %s", std::to_string(initialization_count));
	}

private:
	time_point<steady_clock> startTime_;

	// Bridge
	size_t bridgeCount_;
	rclcpp::TimerBase::SharedPtr bridgeTimer_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr bridgeConnectedPublisher_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr bridgePingPublisher_;
	void bridge_callback()
	{
		bridgeCount_++;

		// Publish whether the bridge is connected or not
		auto bridgeConnectedMessage = std_msgs::msg::Bool();
		bridgeConnectedMessage.data = true;
		bridgeConnectedPublisher_->publish(bridgeConnectedMessage);

		// Publish a ping from the bridge
		auto bridgePingMessage = std_msgs::msg::String();
		bridgePingMessage.data = "Ping from bridge: " + std::to_string(bridgeCount_);
		bridgePingPublisher_->publish(bridgePingMessage);
	}

	// State
	size_t stateCount_;
	rclcpp::TimerBase::SharedPtr stateTimer_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr connectedPublisher_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pingPublisher_;
	rclcpp::Publisher<geometry_msgs::msg::Accel>::SharedPtr accelPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr fixPublisher_;
	rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odomPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imuPublisher_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr landedPublisher_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr collidedPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::BatteryState>::SharedPtr batteryPublisher_;
	void state_callback()
	{
		stateCount_++;
		//time_point<steady_clock> tickStart = high_resolution_clock::now();

		// Publish whether the drone is connected or not
		auto connectedMessage = std_msgs::msg::Bool();
		connectedMessage.data = client.ping();
		connectedPublisher_->publish(connectedMessage);

		// Publish a ping from AirSim
		auto pingMessage = std_msgs::msg::String();
		if (client.ping()) {
			pingMessage.data = "Ping from drone: " + std::to_string(stateCount_);
		}
		else {
			pingMessage.data = "Failed to ping drone: " + std::to_string(stateCount_);
		}
		pingPublisher_->publish(pingMessage);

		// Publish the multirotor state
		auto state = client.getMultirotorState();
		
		auto accelMessage = geometry_msgs::msg::Accel();
		accelMessage.linear.x = state.kinematics_estimated.accelerations.linear.x();
		accelMessage.linear.y = state.kinematics_estimated.accelerations.linear.y();
		accelMessage.linear.z = state.kinematics_estimated.accelerations.linear.z();
		accelMessage.angular.x = state.kinematics_estimated.accelerations.angular.x();
		accelMessage.angular.y = state.kinematics_estimated.accelerations.angular.y();
		accelMessage.angular.z = state.kinematics_estimated.accelerations.angular.z();
		accelPublisher_->publish(accelMessage);
		
		auto fixMessage = sensor_msgs::msg::NavSatFix();
		fixMessage.latitude = state.gps_location.latitude;
		fixMessage.longitude = state.gps_location.longitude;
		fixMessage.altitude = state.gps_location.altitude;
		fixPublisher_->publish(fixMessage);
		
		auto odomMessage = nav_msgs::msg::Odometry();
		odomMessage.pose.pose.position.x = state.kinematics_estimated.pose.position.x();
		odomMessage.pose.pose.position.y = state.kinematics_estimated.pose.position.y();
		odomMessage.pose.pose.position.z = state.kinematics_estimated.pose.position.z();
		odomMessage.pose.pose.orientation.x = state.kinematics_estimated.pose.orientation.x();
		odomMessage.pose.pose.orientation.y = state.kinematics_estimated.pose.orientation.y();
		odomMessage.pose.pose.orientation.z = state.kinematics_estimated.pose.orientation.z();
		odomMessage.pose.pose.orientation.w = state.kinematics_estimated.pose.orientation.w();
		odomMessage.twist.twist.linear.x = state.kinematics_estimated.twist.linear.x();
		odomMessage.twist.twist.linear.y = state.kinematics_estimated.twist.linear.y();
		odomMessage.twist.twist.linear.z = state.kinematics_estimated.twist.linear.z();
		odomMessage.twist.twist.angular.x = state.kinematics_estimated.twist.angular.x();
		odomMessage.twist.twist.angular.y = state.kinematics_estimated.twist.angular.y();
		odomMessage.twist.twist.angular.z = state.kinematics_estimated.twist.angular.z();
		odomPublisher_->publish(odomMessage);

		auto imuMessage = sensor_msgs::msg::Imu();
		imuMessage.linear_acceleration.x = state.kinematics_estimated.accelerations.linear.x();
		imuMessage.linear_acceleration.y = state.kinematics_estimated.accelerations.linear.y();
		imuMessage.linear_acceleration.z = state.kinematics_estimated.accelerations.linear.z();
		imuMessage.angular_velocity.x = state.kinematics_estimated.twist.angular.x();
		imuMessage.angular_velocity.y = state.kinematics_estimated.twist.angular.y();
		imuMessage.angular_velocity.z = state.kinematics_estimated.twist.angular.z();
		imuMessage.orientation.x = state.getOrientation().x();
		imuMessage.orientation.y = state.getOrientation().y();
		imuMessage.orientation.z = state.getOrientation().z();
		imuMessage.orientation.w = state.getOrientation().w();
		imuPublisher_->publish(imuMessage);

		auto landedMessage = std_msgs::msg::Bool();
		if (state.landed_state == LandedState::Landed) {
			landedMessage.data = true;
		}
		else {
			landedMessage.data = false;
		}
		landedPublisher_->publish(landedMessage);

		auto batteryMessage = sensor_msgs::msg::BatteryState();
		batteryMessage.percentage = 100.0;
		batteryMessage.present = true;
		batteryPublisher_->publish(batteryMessage);

		// Publish collision info - TODO: this breaks on .simGetCollisionInfo()
		/*
		auto collision_info = client.simGetCollisionInfo("multirotor");
		auto collidedMessage = std_msgs::msg::Bool();
		collidedMessage.data = collision_info.has_collided;
		collidedPublisher_->publish(collidedMessage);
		*/

		/*
		duration<double> tickEnd = duration_cast<duration<double>>(high_resolution_clock::now() - tickStart);
		RCLCPP_INFO(
			this->get_logger(),
			"#%s: Publishing state at time %s took %s",
			std::to_string(stateCount_++),
			std::to_string(system_clock::to_time_t(system_clock::now())),
			std::to_string(tickEnd.count())
		);
		*/
	}

	// Camera
	float precision_coefficient_ = 10000.0;
	size_t cameraCount_;
	rclcpp::TimerBase::SharedPtr cameraTimer_;
	rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr frontCameraPosePublisher_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr frontColorPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr frontRawDepthPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr frontDepthPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr downColorPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr rearColorPublisher_;
	void camera_callback()
	{
		//time_point<steady_clock> tickStart = high_resolution_clock::now();

		//time_point<steady_clock> t_start = high_resolution_clock::now();
		vector<ImageRequest> imageRequests = {
			ImageRequest("front_center", ImageType::Scene, false, true), // front color
			ImageRequest("front_center", ImageType::DepthPerspective, true, false), // front depth
			ImageRequest("bottom_center", ImageType::Scene, false, true), // down color 3
			ImageRequest("back_center", ImageType::Scene, false, true) // back color 4
		};

		const vector<ImageResponse>& imageResponses = client.simGetImages(imageRequests);
		auto front_color_image = imageResponses[0];
		auto front_depth_image = imageResponses[1];
		auto down_color_image = imageResponses[2];
		auto rear_color_image = imageResponses[3];

		//duration<double> t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- got images in %s seconds", std::to_string(t_end.count()));

		// Publish the pose of the front camera
		auto frontCameraPoseMessage = geometry_msgs::msg::Pose();
		frontCameraPoseMessage.position.x = front_color_image.camera_position.x();
		frontCameraPoseMessage.position.y = front_color_image.camera_position.y();
		frontCameraPoseMessage.position.z = front_color_image.camera_position.z();
		frontCameraPoseMessage.orientation.x = front_color_image.camera_orientation.x();
		frontCameraPoseMessage.orientation.y = front_color_image.camera_orientation.y();
		frontCameraPoseMessage.orientation.z = front_color_image.camera_orientation.z();
		frontCameraPoseMessage.orientation.w = front_color_image.camera_orientation.w();
		frontCameraPosePublisher_->publish(frontCameraPoseMessage);

		//t_start = high_resolution_clock::now();
		auto frontColorMessage = sensor_msgs::msg::CompressedImage();
		frontColorMessage.header.frame_id = "front_color";
		frontColorMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		frontColorMessage.format = "png";
		frontColorMessage.data = front_color_image.image_data_uint8;
		frontColorPublisher_->publish(frontColorMessage);

		//t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- published front color image in %s seconds", std::to_string(t_end.count()));

		//t_start = high_resolution_clock::now();
		auto frontDepthMessage = sensor_msgs::msg::CompressedImage();
		frontDepthMessage.header.frame_id = "front_depth";
		frontDepthMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		frontDepthMessage.format = "png";

		// Convert float values to uint32_t and add to a vector
		vector<uint32_t> uncompressedDepth(front_depth_image.image_data_float.size());
		for (int i = 0; i < front_depth_image.image_data_float.size(); i++) {
			uncompressedDepth[i] = static_cast<uint32_t>(front_depth_image.image_data_float[i] * precision_coefficient_);
		}

		// Convert to an OpenCV mat
		cv::Mat depthMat = cv::Mat(cv::Size(front_depth_image.width, front_depth_image.height), CV_8UC4, uncompressedDepth.data());

		// Compress the image
		vector<uchar> compressedDepth;
		compressedDepth.resize(front_depth_image.height * front_depth_image.width * 4);
		cv::imencode(".png", depthMat, compressedDepth);
		compressedDepth.shrink_to_fit();

		// Publish the image
		frontDepthMessage.data = compressedDepth;
		frontDepthPublisher_->publish(frontDepthMessage);

		//t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- published front depth image in %s seconds", std::to_string(t_end.count()));

		//t_start = high_resolution_clock::now();
		auto downColorMessage = sensor_msgs::msg::CompressedImage();
		downColorMessage.header.frame_id = "down_color";
		downColorMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		downColorMessage.format = "png";
		downColorMessage.data = down_color_image.image_data_uint8;
		downColorPublisher_->publish(downColorMessage);

		//t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- published down color image in %s seconds", std::to_string(t_end.count()));

		//t_start = high_resolution_clock::now();
		auto rearColorMessage = sensor_msgs::msg::CompressedImage();
		rearColorMessage.header.frame_id = "rear_color";
		rearColorMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		rearColorMessage.format = "png";
		rearColorMessage.data = rear_color_image.image_data_uint8;
		rearColorPublisher_->publish(rearColorMessage);

		//t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- published rear color image in %s seconds", std::to_string(t_end.count()));

		/*
		duration<double> tickEnd = duration_cast<duration<double>>(high_resolution_clock::now() - tickStart);
		RCLCPP_INFO(
			this->get_logger(),
			"#%s: Publishing %s images at time %s took %s",
			std::to_string(cameraCount_++),
			std::to_string(imageResponses.size()),
			std::to_string(system_clock::to_time_t(system_clock::now())),
			std::to_string(tickEnd.count())
		);
		*/
	}

	// Actions
	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr takeoffSubscription_;
	void takeoff_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> takeoff called");

		client.takeoffAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr landSubscription_;
	void land_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> land called");

		client.landAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr goHomeSubscription_;
	void go_home_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> go_home called");

		client.goHomeAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr hoverSubscription_;
	void hover_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> hover called");

		client.hoverAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr flyAroundSubscription_;
	void fly_around_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> fly around called");

		// moveByVelocityZ is an offboard operation, so we need to set offboard mode.
		auto position = client.getMultirotorState().getPosition();
		float z = position.z(); // current position (NED coordinate system).  
		const float speed = 3.0f;
		const float size = 10.0f;
		const float duration = size / speed;
		DrivetrainType driveTrain = DrivetrainType::ForwardOnly;
		YawMode yaw_mode(true, 0);

		// Fly the box
		client.moveByVelocityAsync(0, 0, -speed, duration / 2);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration / 2));

		client.moveByVelocityZAsync(0, -speed, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));
		
		client.moveByVelocityZAsync(-speed, 0, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));
		
		client.moveByVelocityZAsync(0, speed, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));
		
		client.moveByVelocityZAsync(speed, 0, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));
	}

	// Controls
	rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmdVelSubscription_;
	void cmd_vel_callback(const geometry_msgs::msg::Twist::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> cmd_vel called (not implemented)");
	}

	rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr moveSubscription_;
	void move_callback(const geometry_msgs::msg::Twist::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> move_by_velocity called");

		client.moveByVelocityAsync((float)msg->linear.x, (float)msg->linear.y, (float)msg->linear.z, 0.5);
	}

	rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr angleSubscription_;
	void angle_callback(const geometry_msgs::msg::Twist::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> move_by_angle throttle called");

		client.moveByAngleThrottleAsync((float)msg->angular.y, (float)msg->angular.x, (float)msg->linear.z, (float)msg->angular.z, 0.4f);
	}

	rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr rotateSubscription_;
	void rotate_callback(const std_msgs::msg::Float32::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> rotate_by_velocity called");

		client.rotateByYawRateAsync(msg->data, 0.5);
	}

	rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr pathSubscription_;
	void path_callback(const nav_msgs::msg::Path::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> move_by_path called");

		// take the given ros path, convert it to an airlib path
		vector<Vector3r> path;
		for (int i = 0; i < msg->poses.size(); i++) {
			float x = msg->poses[i].pose.position.x;
			float y = msg->poses[i].pose.position.y;
			float z = msg->poses[i].pose.position.z;
			path.push_back(Vector3r(x, y, z));
		}
		client.moveOnPathAsync(path, 2.0f);
	}
	
	// Simulator
	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr initializeSubscription_;
	void initialize_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> initialize called");

		this->initialize = true;
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr resetSubscription_;
	void reset_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> reset called");

		client.reset();
		client.confirmConnection();
		client.enableApiControl(true);
		client.armDisarm(true);

		this->initialize = true;
	}

	rclcpp::Subscription<std_msgs::msg::String>::SharedPtr pingSubscription_;
	void ping_callback(const std_msgs::msg::String::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> got ping");
	}
};


void shutdown_handler(sig_atomic_t s) {
	rclcpp::shutdown();

	client.armDisarm(false);
	client.enableApiControl(false);

	exit(1);
}

int main(int argc, char * argv[])
{
	signal(SIGINT, shutdown_handler);

	// Set up the AirSim API
	client.confirmConnection();
	client.enableApiControl(true);
	client.armDisarm(true);

	// Set up the ROS2 API
	rclcpp::init(argc, argv);
	initialization_count = 0;

	// Reinitialize every five minutes
	while (true) {

		rclcpp::executors::MultiThreadedExecutor executor(rclcpp::executor::create_default_executor_arguments(), 6, false);
		std::cout << "threads: " << executor.get_number_of_threads() << "\n";
		
		auto node = std::make_shared<ROS2AirSim>();
		executor.add_node(node);

		auto start_time = system_clock::now();

		//int count = 0;
		while (
			rclcpp::ok() && 
			!node->initialize &&
			(duration_cast<duration<double>>(system_clock::now() - start_time).count() < 300)
		) {
			executor.spin_once();

			//std::cout << "tick " << count << "\n";
			//count++;
		}

		initialization_count++;
	}

	shutdown_handler(NULL);

	return 0;
}
