// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__STRUCT_H_
#define MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// data
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message map_msgs/OccupancyGridUpdate
typedef struct map_msgs__msg__OccupancyGridUpdate
{
  std_msgs__msg__Header header;
  int32_t x;
  int32_t y;
  uint32_t width;
  uint32_t height;
  rosidl_generator_c__int8__Array data;
} map_msgs__msg__OccupancyGridUpdate;

/// Struct for an array of messages
typedef struct map_msgs__msg__OccupancyGridUpdate__Array
{
  map_msgs__msg__OccupancyGridUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__msg__OccupancyGridUpdate__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__STRUCT_H_
