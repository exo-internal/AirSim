// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "logging_demo/srv/config_logger__response__struct.hpp"
#include "logging_demo/srv/dds_opensplice/ccpp_ConfigLogger_Response_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "logging_demo/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace logging_demo
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo
extern void register_type__ConfigLogger_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo
extern void convert_ros_message_to_dds(
  const logging_demo::srv::ConfigLogger_Response & ros_message,
  logging_demo::srv::dds_::ConfigLogger_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo
extern void publish__ConfigLogger_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo
extern void convert_dds_message_to_ros(
  const logging_demo::srv::dds_::ConfigLogger_Response_ & dds_message,
  logging_demo::srv::ConfigLogger_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo
extern bool take__ConfigLogger_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace logging_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, logging_demo, srv, ConfigLogger_Response)();

#ifdef __cplusplus
}
#endif

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
