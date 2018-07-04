// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define COMPOSITION__SRV__LOAD_NODE__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "composition/srv/load_node__response__struct.hpp"
#include "composition/srv/dds_opensplice/ccpp_LoadNode_Response_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "composition/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace composition
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition
extern void register_type__LoadNode_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition
extern void convert_ros_message_to_dds(
  const composition::srv::LoadNode_Response & ros_message,
  composition::srv::dds_::LoadNode_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition
extern void publish__LoadNode_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition
extern void convert_dds_message_to_ros(
  const composition::srv::dds_::LoadNode_Response_ & dds_message,
  composition::srv::LoadNode_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition
extern bool take__LoadNode_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace composition

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, composition, srv, LoadNode_Response)();

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION__SRV__LOAD_NODE__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
