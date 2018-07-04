// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_FIX__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define SENSOR_MSGS__MSG__NAV_SAT_FIX__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "sensor_msgs/msg/nav_sat_fix__struct.hpp"
#include "sensor_msgs/msg/dds_opensplice/ccpp_NavSatFix_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace sensor_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void register_type__NavSatFix(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_ros_message_to_dds(
  const sensor_msgs::msg::NavSatFix & ros_message,
  sensor_msgs::msg::dds_::NavSatFix_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void publish__NavSatFix(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::NavSatFix_ & dds_message,
  sensor_msgs::msg::NavSatFix & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern bool take__NavSatFix(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, sensor_msgs, msg, NavSatFix)();

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__NAV_SAT_FIX__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
