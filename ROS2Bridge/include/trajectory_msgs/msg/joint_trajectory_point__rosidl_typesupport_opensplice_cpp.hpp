// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "trajectory_msgs/msg/joint_trajectory_point__struct.hpp"
#include "trajectory_msgs/msg/dds_opensplice/ccpp_JointTrajectoryPoint_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace trajectory_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void register_type__JointTrajectoryPoint(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void convert_ros_message_to_dds(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros_message,
  trajectory_msgs::msg::dds_::JointTrajectoryPoint_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void publish__JointTrajectoryPoint(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern void convert_dds_message_to_ros(
  const trajectory_msgs::msg::dds_::JointTrajectoryPoint_ & dds_message,
  trajectory_msgs::msg::JointTrajectoryPoint & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
extern bool take__JointTrajectoryPoint(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace trajectory_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, trajectory_msgs, msg, JointTrajectoryPoint)();

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
