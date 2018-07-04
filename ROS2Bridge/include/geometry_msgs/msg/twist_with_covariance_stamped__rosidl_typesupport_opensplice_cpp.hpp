// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE_STAMPED__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE_STAMPED__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "geometry_msgs/msg/twist_with_covariance_stamped__struct.hpp"
#include "geometry_msgs/msg/dds_opensplice/ccpp_TwistWithCovarianceStamped_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace geometry_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void register_type__TwistWithCovarianceStamped(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void convert_ros_message_to_dds(
  const geometry_msgs::msg::TwistWithCovarianceStamped & ros_message,
  geometry_msgs::msg::dds_::TwistWithCovarianceStamped_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void publish__TwistWithCovarianceStamped(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::TwistWithCovarianceStamped_ & dds_message,
  geometry_msgs::msg::TwistWithCovarianceStamped & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern bool take__TwistWithCovarianceStamped(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace geometry_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, geometry_msgs, msg, TwistWithCovarianceStamped)();

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE_STAMPED__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
