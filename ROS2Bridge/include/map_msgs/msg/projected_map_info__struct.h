// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__PROJECTED_MAP_INFO__STRUCT_H_
#define MAP_MSGS__MSG__PROJECTED_MAP_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// frame_id
#include "rosidl_generator_c/string.h"

/// Struct of message map_msgs/ProjectedMapInfo
typedef struct map_msgs__msg__ProjectedMapInfo
{
  rosidl_generator_c__String frame_id;
  double x;
  double y;
  double width;
  double height;
  double min_z;
  double max_z;
} map_msgs__msg__ProjectedMapInfo;

/// Struct for an array of messages
typedef struct map_msgs__msg__ProjectedMapInfo__Array
{
  map_msgs__msg__ProjectedMapInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__msg__ProjectedMapInfo__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__MSG__PROJECTED_MAP_INFO__STRUCT_H_
