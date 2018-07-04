// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__DURATION__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define BUILTIN_INTERFACES__MSG__DURATION__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "builtin_interfaces/msg/duration__struct.hpp"
#include "builtin_interfaces/msg/dds_opensplice/ccpp_Duration_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "builtin_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace builtin_interfaces
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
extern void register_type__Duration(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
extern void convert_ros_message_to_dds(
  const builtin_interfaces::msg::Duration & ros_message,
  builtin_interfaces::msg::dds_::Duration_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
extern void publish__Duration(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
extern void convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Duration_ & dds_message,
  builtin_interfaces::msg::Duration & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
extern bool take__Duration(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace builtin_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, builtin_interfaces, msg, Duration)();

#ifdef __cplusplus
}
#endif

#endif  // BUILTIN_INTERFACES__MSG__DURATION__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
