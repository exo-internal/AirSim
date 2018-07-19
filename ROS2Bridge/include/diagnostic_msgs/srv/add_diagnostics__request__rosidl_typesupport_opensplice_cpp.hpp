// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "diagnostic_msgs/srv/add_diagnostics__request__struct.hpp"
#include "diagnostic_msgs/srv/dds_opensplice/ccpp_AddDiagnostics_Request_.h"

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

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void register_type__AddDiagnostics_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_ros_message_to_dds(
  const diagnostic_msgs::srv::AddDiagnostics_Request & ros_message,
  diagnostic_msgs::srv::dds_::AddDiagnostics_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void publish__AddDiagnostics_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_dds_message_to_ros(
  const diagnostic_msgs::srv::dds_::AddDiagnostics_Request_ & dds_message,
  diagnostic_msgs::srv::AddDiagnostics_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern bool take__AddDiagnostics_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace diagnostic_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, diagnostic_msgs, srv, AddDiagnostics_Request)();

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
