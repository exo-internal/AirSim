// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "example_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "example_interfaces/srv/add_two_ints__response__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "example_interfaces/srv/dds_connext/AddTwoInts_Response_Support.h"
#include "example_interfaces/srv/dds_connext/AddTwoInts_Response_Plugin.h"

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

namespace example_interfaces
{

namespace srv
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__AddTwoInts_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_example_interfaces
convert_ros_message_to_dds(
  const example_interfaces::srv::AddTwoInts_Response & ros_message,
  example_interfaces::srv::dds_::AddTwoInts_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_example_interfaces
convert_dds_message_to_ros(
  const example_interfaces::srv::dds_::AddTwoInts_Response_ & dds_message,
  example_interfaces::srv::AddTwoInts_Response & ros_message);

bool
to_cdr_stream__AddTwoInts_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__AddTwoInts_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_example_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, example_interfaces, srv, AddTwoInts_Response)();

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__RESPONSE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
