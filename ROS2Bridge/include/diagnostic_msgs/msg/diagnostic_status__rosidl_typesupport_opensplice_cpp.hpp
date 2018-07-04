// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "diagnostic_msgs/msg/diagnostic_status__struct.hpp"
#include "diagnostic_msgs/msg/dds_opensplice/ccpp_DiagnosticStatus_.h"

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
extern void register_type__DiagnosticStatus(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_ros_message_to_dds(
  const diagnostic_msgs::msg::DiagnosticStatus & ros_message,
  diagnostic_msgs::msg::dds_::DiagnosticStatus_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void publish__DiagnosticStatus(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_dds_message_to_ros(
  const diagnostic_msgs::msg::dds_::DiagnosticStatus_ & dds_message,
  diagnostic_msgs::msg::DiagnosticStatus & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern bool take__DiagnosticStatus(
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
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, diagnostic_msgs, msg, DiagnosticStatus)();

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
