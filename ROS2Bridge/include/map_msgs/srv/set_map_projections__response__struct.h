// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SET_MAP_PROJECTIONS__RESPONSE__STRUCT_H_
#define MAP_MSGS__SRV__SET_MAP_PROJECTIONS__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// projected_maps_info
#include "map_msgs/msg/projected_map_info__struct.h"

/// Struct of message map_msgs/SetMapProjections_Response
typedef struct map_msgs__srv__SetMapProjections_Response
{
  map_msgs__msg__ProjectedMapInfo__Array projected_maps_info;
} map_msgs__srv__SetMapProjections_Response;

/// Struct for an array of messages
typedef struct map_msgs__srv__SetMapProjections_Response__Array
{
  map_msgs__srv__SetMapProjections_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__SetMapProjections_Response__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__SET_MAP_PROJECTIONS__RESPONSE__STRUCT_H_
