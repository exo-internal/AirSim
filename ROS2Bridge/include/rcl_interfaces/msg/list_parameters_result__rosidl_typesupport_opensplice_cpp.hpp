// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__LIST_PARAMETERS_RESULT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define RCL_INTERFACES__MSG__LIST_PARAMETERS_RESULT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "rcl_interfaces/msg/list_parameters_result__struct.hpp"
#include "rcl_interfaces/msg/dds_opensplice/ccpp_ListParametersResult_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void register_type__ListParametersResult(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void convert_ros_message_to_dds(
  const rcl_interfaces::msg::ListParametersResult & ros_message,
  rcl_interfaces::msg::dds_::ListParametersResult_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void publish__ListParametersResult(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void convert_dds_message_to_ros(
  const rcl_interfaces::msg::dds_::ListParametersResult_ & dds_message,
  rcl_interfaces::msg::ListParametersResult & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern bool take__ListParametersResult(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, rcl_interfaces, msg, ListParametersResult)();

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__LIST_PARAMETERS_RESULT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
