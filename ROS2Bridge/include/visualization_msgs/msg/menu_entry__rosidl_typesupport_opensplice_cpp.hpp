// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MENU_ENTRY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define VISUALIZATION_MSGS__MSG__MENU_ENTRY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "visualization_msgs/msg/menu_entry__struct.hpp"
#include "visualization_msgs/msg/dds_opensplice/ccpp_MenuEntry_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace visualization_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void register_type__MenuEntry(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_ros_message_to_dds(
  const visualization_msgs::msg::MenuEntry & ros_message,
  visualization_msgs::msg::dds_::MenuEntry_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void publish__MenuEntry(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern void convert_dds_message_to_ros(
  const visualization_msgs::msg::dds_::MenuEntry_ & dds_message,
  visualization_msgs::msg::MenuEntry & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
extern bool take__MenuEntry(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, visualization_msgs, msg, MenuEntry)();

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__MENU_ENTRY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
