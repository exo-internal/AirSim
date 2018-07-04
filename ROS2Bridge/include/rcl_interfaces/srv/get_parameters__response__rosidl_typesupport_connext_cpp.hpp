// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__GET_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define RCL_INTERFACES__SRV__GET_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "rcl_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "rcl_interfaces/srv/get_parameters__response__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "rcl_interfaces/srv/dds_connext/GetParameters_Response_Support.h"
#include "rcl_interfaces/srv/dds_connext/GetParameters_Response_Plugin.h"

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

namespace rcl_interfaces
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__GetParameters_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rcl_interfaces
convert_ros_message_to_dds(
  const rcl_interfaces::srv::GetParameters_Response & ros_message,
  rcl_interfaces::srv::dds_::GetParameters_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rcl_interfaces
convert_dds_message_to_ros(
  const rcl_interfaces::srv::dds_::GetParameters_Response_ & dds_message,
  rcl_interfaces::srv::GetParameters_Response & ros_message);

bool
to_cdr_stream__GetParameters_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__GetParameters_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, rcl_interfaces, srv, GetParameters_Response)();

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__GET_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
