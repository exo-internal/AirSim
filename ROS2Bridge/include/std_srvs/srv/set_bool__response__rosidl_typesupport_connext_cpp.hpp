// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STD_SRVS__SRV__SET_BOOL__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "std_srvs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "std_srvs/srv/set_bool__response__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "std_srvs/srv/dds_connext/SetBool_Response_Support.h"
#include "std_srvs/srv/dds_connext/SetBool_Response_Plugin.h"

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

namespace std_srvs
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SetBool_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
convert_ros_message_to_dds(
  const std_srvs::srv::SetBool_Response & ros_message,
  std_srvs::srv::dds_::SetBool_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
convert_dds_message_to_ros(
  const std_srvs::srv::dds_::SetBool_Response_ & dds_message,
  std_srvs::srv::SetBool_Response & ros_message);

bool
to_cdr_stream__SetBool_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SetBool_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, std_srvs, srv, SetBool_Response)();

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__SET_BOOL__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
