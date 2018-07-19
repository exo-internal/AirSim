// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF2_ERROR__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TF2_MSGS__MSG__TF2_ERROR__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "tf2_msgs/msg/tf2_error__struct.hpp"
#include "tf2_msgs/msg/dds_opensplice/ccpp_TF2Error_.h"

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

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void register_type__TF2Error(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_ros_message_to_dds(
  const tf2_msgs::msg::TF2Error & ros_message,
  tf2_msgs::msg::dds_::TF2Error_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void publish__TF2Error(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern void convert_dds_message_to_ros(
  const tf2_msgs::msg::dds_::TF2Error_ & dds_message,
  tf2_msgs::msg::TF2Error & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
extern bool take__TF2Error(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, tf2_msgs, msg, TF2Error)();

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__TF2_ERROR__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
