// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__GET_MAP_ROI__RESPONSE__STRUCT_H_
#define MAP_MSGS__SRV__GET_MAP_ROI__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// sub_map
#include "nav_msgs/msg/occupancy_grid__struct.h"

/// Struct of message map_msgs/GetMapROI_Response
typedef struct map_msgs__srv__GetMapROI_Response
{
  nav_msgs__msg__OccupancyGrid sub_map;
} map_msgs__srv__GetMapROI_Response;

/// Struct for an array of messages
typedef struct map_msgs__srv__GetMapROI_Response__Array
{
  map_msgs__srv__GetMapROI_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetMapROI_Response__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__GET_MAP_ROI__RESPONSE__STRUCT_H_
