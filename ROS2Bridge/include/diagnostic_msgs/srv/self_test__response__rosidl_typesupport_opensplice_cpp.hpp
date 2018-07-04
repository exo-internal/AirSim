// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "diagnostic_msgs/srv/self_test__response__struct.hpp"
#include "diagnostic_msgs/srv/dds_opensplice/ccpp_SelfTest_Response_.h"

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
extern void register_type__SelfTest_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_ros_message_to_dds(
  const diagnostic_msgs::srv::SelfTest_Response & ros_message,
  diagnostic_msgs::srv::dds_::SelfTest_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void publish__SelfTest_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern void convert_dds_message_to_ros(
  const diagnostic_msgs::srv::dds_::SelfTest_Response_ & dds_message,
  diagnostic_msgs::srv::SelfTest_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs
extern bool take__SelfTest_Response(
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
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, diagnostic_msgs, srv, SelfTest_Response)();

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
