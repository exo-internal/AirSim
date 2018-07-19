// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__PROJECTED_MAP__STRUCT_H_
#define MAP_MSGS__MSG__PROJECTED_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// map
#include "nav_msgs/msg/occupancy_grid__struct.h"

/// Struct of message map_msgs/ProjectedMap
typedef struct map_msgs__msg__ProjectedMap
{
  nav_msgs__msg__OccupancyGrid map;
  double min_z;
  double max_z;
} map_msgs__msg__ProjectedMap;

/// Struct for an array of messages
typedef struct map_msgs__msg__ProjectedMap__Array
{
  map_msgs__msg__ProjectedMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__msg__ProjectedMap__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__MSG__PROJECTED_MAP__STRUCT_H_
