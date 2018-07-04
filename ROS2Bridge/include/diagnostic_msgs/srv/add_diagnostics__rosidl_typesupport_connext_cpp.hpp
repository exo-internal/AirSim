// generated from
// rosidl_typesupport_connext_cpp/resource/srv__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include <rmw/types.h>

#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace diagnostic_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
void *
create_requester__AddDiagnostics(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
const char *
destroy_requester__AddDiagnostics(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
int64_t
send_request__AddDiagnostics(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
void *
create_replier__AddDiagnostics(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
const char *
destroy_replier__AddDiagnostics(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
bool
take_request__AddDiagnostics(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
bool
take_response__AddDiagnostics(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
bool
send_response__AddDiagnostics(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
void *
get_request_datawriter__AddDiagnostics(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
void *
get_reply_datareader__AddDiagnostics(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
void *
get_request_datareader__AddDiagnostics(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
void *
get_reply_datawriter__AddDiagnostics(void * untyped_replier);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace diagnostic_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_diagnostic_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, diagnostic_msgs, AddDiagnostics)();

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
