// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER_ARRAY__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__MARKER_ARRAY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// markers
#include "visualization_msgs/msg/marker__struct.h"

/// Struct of message visualization_msgs/MarkerArray
typedef struct visualization_msgs__msg__MarkerArray
{
  visualization_msgs__msg__Marker__Array markers;
} visualization_msgs__msg__MarkerArray;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__MarkerArray__Array
{
  visualization_msgs__msg__MarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__MarkerArray__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__MARKER_ARRAY__STRUCT_H_
