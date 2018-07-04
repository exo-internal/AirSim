// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "stereo_msgs/msg/disparity_image__struct.hpp"
#include "stereo_msgs/msg/dds_opensplice/ccpp_DisparityImage_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "stereo_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace stereo_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs
extern void register_type__DisparityImage(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs
extern void convert_ros_message_to_dds(
  const stereo_msgs::msg::DisparityImage & ros_message,
  stereo_msgs::msg::dds_::DisparityImage_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs
extern void publish__DisparityImage(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs
extern void convert_dds_message_to_ros(
  const stereo_msgs::msg::dds_::DisparityImage_ & dds_message,
  stereo_msgs::msg::DisparityImage & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs
extern bool take__DisparityImage(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace stereo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, stereo_msgs, msg, DisparityImage)();

#ifdef __cplusplus
}
#endif

#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
