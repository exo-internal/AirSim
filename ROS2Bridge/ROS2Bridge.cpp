// A bridge between ROS2 and AirSim

#include "stdafx.h"

#include <chrono>
#include <iostream>

#include "opencv2/opencv.hpp"

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/accel.hpp"
#include "geometry_msgs/msg/quaternion.hpp"
#include "geometry_msgs/msg/quaternion_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "geometry_msgs/msg/vector3_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/header.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"

#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using namespace std::chrono;
using namespace std::chrono_literals;

typedef ImageCaptureBase::ImageRequest ImageRequest;
typedef ImageCaptureBase::ImageResponse ImageResponse;
typedef ImageCaptureBase::ImageType ImageType;

class ROS2AirSim : public rclcpp::Node
{
public:
	ROS2AirSim() : Node("AirSim"), helloCount_(0), stateCount_(0), cameraCount_(0)
	{
		// Set the start time
		startTime_ = high_resolution_clock::now();

		// Create a ping from the bridge
		helloTimer_ = this->create_wall_timer(1000ms, std::bind(&ROS2AirSim::hello_callback, this));
		helloPublisher_ = this->create_publisher<std_msgs::msg::String>("exo/airsim/bridge/ping");

		// Set up the AirSim API
		client.confirmConnection();
		client.enableApiControl(true);
		client.armDisarm(true);

		// Create the state publishers
		stateTimer_ = this->create_wall_timer(100ms, std::bind(&ROS2AirSim::state_callback, this));
		pingPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/exo/airsim/drone/ping");
		accelPublisher_ = this->create_publisher<geometry_msgs::msg::Accel>("/exo/airsim/drone/accel");
		fixPublisher_ = this->create_publisher<sensor_msgs::msg::NavSatFix>("/exo/airsim/drone/gps");
		odomPublisher_ = this->create_publisher<nav_msgs::msg::Odometry>("/exo/airsim/drone/odometry");
		imuPublisher_ = this->create_publisher<sensor_msgs::msg::Imu>("/exo/airsim/drone/imu");

		// Create the camera publishers
		cameraTimer_ = this->create_wall_timer(50ms, std::bind(&ROS2AirSim::camera_callback, this));
		frontColorPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/exo/airsim/drone/camera/front/color/image_raw/compressed");
		frontRawDepthPublisher_ = this->create_publisher<sensor_msgs::msg::Image>("/exo/airsim/drone/camera/front/depth/image_raw");
		frontDepthPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/exo/airsim/drone/camera/front/depth/image_raw/compressed");
	}

private:
	msr::airlib::MultirotorRpcLibClient client;

	void hello_callback()
	{
		auto message = std_msgs::msg::String();
		message.data = "ping " + std::to_string(helloCount_++);
		helloPublisher_->publish(message);
	}

	void state_callback()
	{
		// Publish a ping from AirSim
		auto pingMessage = std_msgs::msg::Bool();
		pingMessage.data = client.ping();
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

		/*
		RCLCPP_INFO(
			this->get_logger(),
			"#%s: Publishing state at time %s",
			std::to_string(stateCount_++),
			std::to_string(system_clock::to_time_t(system_clock::now()))
		);
		*/
	}

	void camera_callback()
	{
		vector<ImageRequest> imageRequests = {
			ImageRequest("0", ImageType::Scene, false, true),
			ImageRequest("0", ImageType::DepthPerspective, true, false)
		};

		const vector<ImageResponse>& imageResponses = client.simGetImages(imageRequests);

		auto frontColorMessage = sensor_msgs::msg::CompressedImage();
		frontColorMessage.header.frame_id = "front_color";
		frontColorMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		frontColorMessage.format = "png";
		frontColorMessage.data = imageResponses[0].image_data_uint8;
		frontColorPublisher_->publish(frontColorMessage);

		// Publish the raw depth image as a CV_32FC1
		/* DISABLED
		auto frontRawDepthMessage = sensor_msgs::msg::Image();
		frontRawDepthMessage.header.frame_id = "front_depth";
		frontRawDepthMessage.header.stamp.sec = system_clock::to_time_t(system_clock::now());
		frontRawDepthMessage.encoding = "CV_32FC1";
		frontRawDepthMessage.height = imageResponses[1].height;
		frontRawDepthMessage.width = imageResponses[1].width;
		frontRawDepthMessage.is_bigendian = 0;
		frontRawDepthMessage.step = imageResponses[1].width * 4;
		std::vector<uchar> depthRawBytes(imageResponses[1].image_data_float.size() * sizeof(float));
		std::memcpy(depthRawBytes.data(), imageResponses[1].image_data_float.data(), imageResponses[1].image_data_float.size());
		frontRawDepthMessage.data = depthRawBytes;
		frontRawDepthPublisher_->publish(frontRawDepthMessage);
		*/

		//cv::Mat depthFloatMat = cv::Mat(imageResponses[1].height, imageResponses[1].width, CV_32FC1);
		//std::memcpy(depthFloatMat.data, imageResponses[1].image_data_float.data(), imageResponses[1].image_data_float.size());

		auto frontDepthMessage = sensor_msgs::msg::CompressedImage();
		frontDepthMessage.header.frame_id = "front_depth";
		frontDepthMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		frontDepthMessage.format = "png";

		int height = imageResponses[1].height;
		int width = imageResponses[1].width;
		
		// Convert float values to uint32_t and add to a vector
		vector<uint32_t> uncompressedDepth(imageResponses[1].image_data_float.size());
		for (int i = 0; i < imageResponses[1].image_data_float.size(); i++) {
			uncompressedDepth[i] = static_cast<uint32_t>(imageResponses[1].image_data_float[i] * precision_coefficient_);
		}

		// Convert to an OpenCV mat
		cv::Mat depthMat = cv::Mat(cv::Size(width, height), CV_8UC4, uncompressedDepth.data());
		/*
		RCLCPP_INFO(this->get_logger(), "creating mat: --");
		RCLCPP_INFO(this->get_logger(), "-- width:  %s", std::to_string(depthMat.cols));
		RCLCPP_INFO(this->get_logger(), "-- height: %s", std::to_string(depthMat.rows));
		RCLCPP_INFO(this->get_logger(), "-- chan:   %s", std::to_string(depthMat.channels()));
		RCLCPP_INFO(this->get_logger(), "-- depth:  %s", std::to_string(depthMat.depth()));
		RCLCPP_INFO(this->get_logger(), "-- dims:   %s", std::to_string(depthMat.dims));
		RCLCPP_INFO(this->get_logger(), "-- size:   %s", std::to_string(depthMat.cols * depthMat.rows * depthMat.channels()));
		RCLCPP_INFO(this->get_logger(), "-- pixels: %s", std::to_string(depthMat.total())); 
		RCLCPP_INFO(this->get_logger(), "-- step:   %s", std::to_string(depthMat.step));
		RCLCPP_INFO(this->get_logger(), "-- type:   %s", std::to_string(depthMat.type()));
		RCLCPP_INFO(this->get_logger(), "-- elm sz: %s", std::to_string(depthMat.elemSize()));
		*/

		// Compress the image
		vector<uchar> compressedDepth;
		compressedDepth.resize(imageResponses[1].height * imageResponses[1].width * 4);
		cv::imencode(".png", depthMat, compressedDepth);
		compressedDepth.shrink_to_fit();

		// Publish the image
		frontDepthMessage.data = compressedDepth;
		frontDepthPublisher_->publish(frontDepthMessage);

		/*
		RCLCPP_INFO(
			this->get_logger(),
			"#%s: Publishing %s images at time %s",
			std::to_string(cameraCount_++),
			std::to_string(imageResponses.size()),
			std::to_string(system_clock::to_time_t(system_clock::now()))
		);
		*/
	}

	time_point<steady_clock> startTime_;

	size_t helloCount_;
	rclcpp::TimerBase::SharedPtr helloTimer_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr helloPublisher_;
	
	size_t stateCount_;
	rclcpp::TimerBase::SharedPtr stateTimer_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr pingPublisher_;
	rclcpp::Publisher<geometry_msgs::msg::Accel>::SharedPtr accelPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr fixPublisher_;
	rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odomPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imuPublisher_;

	size_t cameraCount_;
	rclcpp::TimerBase::SharedPtr cameraTimer_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr frontColorPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr frontRawDepthPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr frontDepthPublisher_;

	float precision_coefficient_ = 10000.0;
	
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<ROS2AirSim>());
	rclcpp::shutdown();
	
	return 0;
}
