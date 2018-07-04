// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__KEY_VALUE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define DIAGNOSTIC_MSGS__MSG__KEY_VALUE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "diagnostic_msgs/msg/key_value__struct.hpp"
#include "diagnostic_msgs/msg/dds_opensplice/ccpp_KeyValue_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace diagnostic_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void register_type__KeyValue(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_ros_message_to_dds(
  const diagnostic_msgs::msg::KeyValue & ros_message,
  diagnostic_msgs::msg::dds_::KeyValue_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void publish__KeyValue(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_dds_message_to_ros(
  const diagnostic_msgs::msg::dds_::KeyValue_ & dds_message,
  diagnostic_msgs::msg::KeyValue & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern bool take__KeyValue(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace diagnostic_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, diagnostic_msgs, msg, KeyValue)();

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__KEY_VALUE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
