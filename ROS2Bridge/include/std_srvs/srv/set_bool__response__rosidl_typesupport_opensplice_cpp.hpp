// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define STD_SRVS__SRV__SET_BOOL__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "std_srvs/srv/set_bool__response__struct.hpp"
#include "std_srvs/srv/dds_opensplice/ccpp_SetBool_Response_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace std_srvs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void register_type__SetBool_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void convert_ros_message_to_dds(
  const std_srvs::srv::SetBool_Response & ros_message,
  std_srvs::srv::dds_::SetBool_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void publish__SetBool_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void convert_dds_message_to_ros(
  const std_srvs::srv::dds_::SetBool_Response_ & dds_message,
  std_srvs::srv::SetBool_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern bool take__SetBool_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, std_srvs, srv, SetBool_Response)();

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__SET_BOOL__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
