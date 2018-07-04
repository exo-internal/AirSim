// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SAVE_MAP__REQUEST__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MAP_MSGS__SRV__SAVE_MAP__REQUEST__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "map_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "map_msgs/srv/save_map__request__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "map_msgs/srv/dds_connext/SaveMap_Request_Support.h"
#include "map_msgs/srv/dds_connext/SaveMap_Request_Plugin.h"

#include "ndds/ndds_cpp.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;

namespace map_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SaveMap_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
convert_ros_message_to_dds(
  const map_msgs::srv::SaveMap_Request & ros_message,
  map_msgs::srv::dds_::SaveMap_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
convert_dds_message_to_ros(
  const map_msgs::srv::dds_::SaveMap_Request_ & dds_message,
  map_msgs::srv::SaveMap_Request & ros_message);

bool
to_cdr_stream__SaveMap_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SaveMap_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace map_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, map_msgs, srv, SaveMap_Request)();

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__SAVE_MAP__REQUEST__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
