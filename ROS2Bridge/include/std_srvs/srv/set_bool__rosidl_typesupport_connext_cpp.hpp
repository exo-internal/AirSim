// generated from
// rosidl_typesupport_connext_cpp/resource/srv__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STD_SRVS__SRV__SET_BOOL__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include <rmw/types.h>

#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "std_srvs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace std_srvs
{

namespace srv
{

namespace typesupport_connext_cpp
{
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
create_requester__SetBool(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const char *
destroy_requester__SetBool(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
int64_t
send_request__SetBool(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
create_replier__SetBool(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const char *
destroy_replier__SetBool(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
bool
take_request__SetBool(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
bool
take_response__SetBool(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
bool
send_response__SetBool(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_request_datawriter__SetBool(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_reply_datareader__SetBool(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_request_datareader__SetBool(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_reply_datawriter__SetBool(void * untyped_replier);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, std_srvs, SetBool)();

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__SET_BOOL__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
