// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "logging_demo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "logging_demo/srv/config_logger__response__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "logging_demo/srv/dds_connext/ConfigLogger_Response_Support.h"
#include "logging_demo/srv/dds_connext/ConfigLogger_Response_Plugin.h"

#include "ndds/ndds_cpp.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;

namespace logging_demo
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__ConfigLogger_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_logging_demo
convert_ros_message_to_dds(
  const logging_demo::srv::ConfigLogger_Response & ros_message,
  logging_demo::srv::dds_::ConfigLogger_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_logging_demo
convert_dds_message_to_ros(
  const logging_demo::srv::dds_::ConfigLogger_Response_ & dds_message,
  logging_demo::srv::ConfigLogger_Response & ros_message);

bool
to_cdr_stream__ConfigLogger_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ConfigLogger_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace logging_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_logging_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, logging_demo, srv, ConfigLogger_Response)();

#ifdef __cplusplus
}
#endif

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
