// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "lifecycle_msgs/srv/get_available_transitions__request__struct.hpp"
#include "lifecycle_msgs/srv/dds_opensplice/ccpp_GetAvailableTransitions_Request_.h"

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

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void register_type__GetAvailableTransitions_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void convert_ros_message_to_dds(
  const lifecycle_msgs::srv::GetAvailableTransitions_Request & ros_message,
  lifecycle_msgs::srv::dds_::GetAvailableTransitions_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void publish__GetAvailableTransitions_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern void convert_dds_message_to_ros(
  const lifecycle_msgs::srv::dds_::GetAvailableTransitions_Request_ & dds_message,
  lifecycle_msgs::srv::GetAvailableTransitions_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
extern bool take__GetAvailableTransitions_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, lifecycle_msgs, srv, GetAvailableTransitions_Request)();

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__REQUEST__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
