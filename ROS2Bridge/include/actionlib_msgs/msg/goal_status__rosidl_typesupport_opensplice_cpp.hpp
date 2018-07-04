// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "actionlib_msgs/msg/goal_status__struct.hpp"
#include "actionlib_msgs/msg/dds_opensplice/ccpp_GoalStatus_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace actionlib_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void register_type__GoalStatus(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void convert_ros_message_to_dds(
  const actionlib_msgs::msg::GoalStatus & ros_message,
  actionlib_msgs::msg::dds_::GoalStatus_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void publish__GoalStatus(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern void convert_dds_message_to_ros(
  const actionlib_msgs::msg::dds_::GoalStatus_ & dds_message,
  actionlib_msgs::msg::GoalStatus & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
extern bool take__GoalStatus(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace actionlib_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, actionlib_msgs, msg, GoalStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
