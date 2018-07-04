// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef ROSGRAPH_MSGS__MSG__CLOCK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define ROSGRAPH_MSGS__MSG__CLOCK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "rosgraph_msgs/msg/clock__struct.hpp"
#include "rosgraph_msgs/msg/dds_opensplice/ccpp_Clock_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "rosgraph_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace rosgraph_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs
extern void register_type__Clock(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs
extern void convert_ros_message_to_dds(
  const rosgraph_msgs::msg::Clock & ros_message,
  rosgraph_msgs::msg::dds_::Clock_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs
extern void publish__Clock(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs
extern void convert_dds_message_to_ros(
  const rosgraph_msgs::msg::dds_::Clock_ & dds_message,
  rosgraph_msgs::msg::Clock & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs
extern bool take__Clock(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace rosgraph_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, rosgraph_msgs, msg, Clock)();

#ifdef __cplusplus
}
#endif

#endif  // ROSGRAPH_MSGS__MSG__CLOCK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
