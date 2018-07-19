// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "map_msgs/msg/occupancy_grid_update__struct.hpp"
#include "map_msgs/msg/dds_opensplice/ccpp_OccupancyGridUpdate_.h"

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

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void register_type__OccupancyGridUpdate(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_ros_message_to_dds(
  const map_msgs::msg::OccupancyGridUpdate & ros_message,
  map_msgs::msg::dds_::OccupancyGridUpdate_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void publish__OccupancyGridUpdate(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern void convert_dds_message_to_ros(
  const map_msgs::msg::dds_::OccupancyGridUpdate_ & dds_message,
  map_msgs::msg::OccupancyGridUpdate & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
extern bool take__OccupancyGridUpdate(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace map_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, map_msgs, msg, OccupancyGridUpdate)();

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
