// generated from
// rosidl_typesupport_connext_cpp/resource/srv__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include <rmw/types.h>

#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "tf2_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace tf2_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
void *
create_requester__FrameGraph(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
const char *
destroy_requester__FrameGraph(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
int64_t
send_request__FrameGraph(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
void *
create_replier__FrameGraph(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
const char *
destroy_replier__FrameGraph(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
bool
take_request__FrameGraph(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
bool
take_response__FrameGraph(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
bool
send_response__FrameGraph(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
void *
get_request_datawriter__FrameGraph(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
void *
get_reply_datareader__FrameGraph(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
void *
get_request_datareader__FrameGraph(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
void *
get_reply_datawriter__FrameGraph(void * untyped_replier);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, tf2_msgs, FrameGraph)();

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
