// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ROSGRAPH_MSGS__MSG__CLOCK__STRUCT_H_
#define ROSGRAPH_MSGS__MSG__CLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// clock
#include "builtin_interfaces/msg/time__struct.h"

/// Struct of message rosgraph_msgs/Clock
typedef struct rosgraph_msgs__msg__Clock
{
  builtin_interfaces__msg__Time clock;
} rosgraph_msgs__msg__Clock;

/// Struct for an array of messages
typedef struct rosgraph_msgs__msg__Clock__Array
{
  rosgraph_msgs__msg__Clock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosgraph_msgs__msg__Clock__Array;

#ifdef __cplusplus
}
#endif

#endif  // ROSGRAPH_MSGS__MSG__CLOCK__STRUCT_H_
