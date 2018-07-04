// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define COMPOSITION__SRV__LOAD_NODE__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "composition/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "composition/srv/load_node__response__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "composition/srv/dds_connext/LoadNode_Response_Support.h"
#include "composition/srv/dds_connext/LoadNode_Response_Plugin.h"

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

namespace composition
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__LoadNode_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition
convert_ros_message_to_dds(
  const composition::srv::LoadNode_Response & ros_message,
  composition::srv::dds_::LoadNode_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition
convert_dds_message_to_ros(
  const composition::srv::dds_::LoadNode_Response_ & dds_message,
  composition::srv::LoadNode_Response & ros_message);

bool
to_cdr_stream__LoadNode_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__LoadNode_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace composition

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, composition, srv, LoadNode_Response)();

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION__SRV__LOAD_NODE__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
