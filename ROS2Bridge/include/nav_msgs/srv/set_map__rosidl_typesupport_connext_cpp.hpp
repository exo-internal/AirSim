// generated from
// rosidl_typesupport_connext_cpp/resource/srv__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__SET_MAP__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define NAV_MSGS__SRV__SET_MAP__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include <rmw/types.h>

#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "nav_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace nav_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
void *
create_requester__SetMap(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
const char *
destroy_requester__SetMap(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
int64_t
send_request__SetMap(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
void *
create_replier__SetMap(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
const char *
destroy_replier__SetMap(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
bool
take_request__SetMap(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
bool
take_response__SetMap(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
bool
send_response__SetMap(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
void *
get_request_datawriter__SetMap(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
void *
get_reply_datareader__SetMap(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
void *
get_request_datareader__SetMap(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
void *
get_reply_datawriter__SetMap(void * untyped_replier);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_nav_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nav_msgs, SetMap)();

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__SET_MAP__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
