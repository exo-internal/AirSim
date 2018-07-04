// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SAVE_MAP__REQUEST__STRUCT_H_
#define MAP_MSGS__SRV__SAVE_MAP__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// filename
#include "std_msgs/msg/string__struct.h"

/// Struct of message map_msgs/SaveMap_Request
typedef struct map_msgs__srv__SaveMap_Request
{
  std_msgs__msg__String filename;
} map_msgs__srv__SaveMap_Request;

/// Struct for an array of messages
typedef struct map_msgs__srv__SaveMap_Request__Array
{
  map_msgs__srv__SaveMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__SaveMap_Request__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__SAVE_MAP__REQUEST__STRUCT_H_
