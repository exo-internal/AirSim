// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DESCRIBE_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define RCL_INTERFACES__SRV__DESCRIBE_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "rcl_interfaces/srv/describe_parameters__response__struct.hpp"
#include "rcl_interfaces/srv/dds_opensplice/ccpp_DescribeParameters_Response_.h"

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

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void register_type__DescribeParameters_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void convert_ros_message_to_dds(
  const rcl_interfaces::srv::DescribeParameters_Response & ros_message,
  rcl_interfaces::srv::dds_::DescribeParameters_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void publish__DescribeParameters_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void convert_dds_message_to_ros(
  const rcl_interfaces::srv::dds_::DescribeParameters_Response_ & dds_message,
  rcl_interfaces::srv::DescribeParameters_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern bool take__DescribeParameters_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, rcl_interfaces, srv, DescribeParameters_Response)();

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DESCRIBE_PARAMETERS__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
