// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "lifecycle_msgs/msg/transition_event__struct.hpp"
#include "lifecycle_msgs/msg/dds_opensplice/ccpp_TransitionEvent_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace lifecycle_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void register_type__TransitionEvent(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void convert_ros_message_to_dds(
  const lifecycle_msgs::msg::TransitionEvent & ros_message,
  lifecycle_msgs::msg::dds_::TransitionEvent_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void publish__TransitionEvent(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void convert_dds_message_to_ros(
  const lifecycle_msgs::msg::dds_::TransitionEvent_ & dds_message,
  lifecycle_msgs::msg::TransitionEvent & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern bool take__TransitionEvent(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, lifecycle_msgs, msg, TransitionEvent)();

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
