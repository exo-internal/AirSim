// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__PRIMITIVES__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TEST_MSGS__MSG__PRIMITIVES__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "test_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "test_msgs/msg/primitives__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "test_msgs/msg/dds_connext/Primitives_Support.h"
#include "test_msgs/msg/dds_connext/Primitives_Plugin.h"

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

namespace test_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Primitives();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
convert_ros_message_to_dds(
  const test_msgs::msg::Primitives & ros_message,
  test_msgs::msg::dds_::Primitives_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
convert_dds_message_to_ros(
  const test_msgs::msg::dds_::Primitives_ & dds_message,
  test_msgs::msg::Primitives & ros_message);

bool
to_cdr_stream__Primitives(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Primitives(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, test_msgs, msg, Primitives)();

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__PRIMITIVES__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
