// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__LIST_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define RCL_INTERFACES__SRV__LIST_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "rcl_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "rcl_interfaces/srv/list_parameters__response__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "rcl_interfaces/srv/dds_connext/ListParameters_Response_Support.h"
#include "rcl_interfaces/srv/dds_connext/ListParameters_Response_Plugin.h"

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
get_type_code__ListParameters_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rcl_interfaces
convert_ros_message_to_dds(
  const rcl_interfaces::srv::ListParameters_Response & ros_message,
  rcl_interfaces::srv::dds_::ListParameters_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_rcl_interfaces
convert_dds_message_to_ros(
  const rcl_interfaces::srv::dds_::ListParameters_Response_ & dds_message,
  rcl_interfaces::srv::ListParameters_Response & ros_message);

bool
to_cdr_stream__ListParameters_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ListParameters_Response(
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
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, rcl_interfaces, srv, ListParameters_Response)();

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__LIST_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
