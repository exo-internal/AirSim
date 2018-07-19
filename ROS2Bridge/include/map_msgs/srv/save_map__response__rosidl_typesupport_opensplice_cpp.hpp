// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SAVE_MAP__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MAP_MSGS__SRV__SAVE_MAP__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "map_msgs/srv/save_map__response__struct.hpp"
#include "map_msgs/srv/dds_opensplice/ccpp_SaveMap_Response_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace map_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void register_type__SaveMap_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_ros_message_to_dds(
  const map_msgs::srv::SaveMap_Response & ros_message,
  map_msgs::srv::dds_::SaveMap_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void publish__SaveMap_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_dds_message_to_ros(
  const map_msgs::srv::dds_::SaveMap_Response_ & dds_message,
  map_msgs::srv::SaveMap_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern bool take__SaveMap_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace map_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, map_msgs, srv, SaveMap_Response)();

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__SAVE_MAP__RESPONSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
