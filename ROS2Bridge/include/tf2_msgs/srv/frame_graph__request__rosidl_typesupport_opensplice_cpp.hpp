// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "tf2_msgs/srv/frame_graph__request__struct.hpp"
#include "tf2_msgs/srv/dds_opensplice/ccpp_FrameGraph_Request_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tf2_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__FrameGraph_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::srv::FrameGraph_Request & ros_message,
  tf2_msgs::srv::dds_::FrameGraph_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__FrameGraph_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::srv::dds_::FrameGraph_Request_ & dds_message,
  tf2_msgs::srv::FrameGraph_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__FrameGraph_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, tf2_msgs, srv, FrameGraph_Request)();

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
