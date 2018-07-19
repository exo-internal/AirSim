// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__GET_POINT_MAP_ROI__REQUEST__STRUCT_H_
#define MAP_MSGS__SRV__GET_POINT_MAP_ROI__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message map_msgs/GetPointMapROI_Request
typedef struct map_msgs__srv__GetPointMapROI_Request
{
  double x;
  double y;
  double z;
  double r;
  double l_x;
  double l_y;
  double l_z;
} map_msgs__srv__GetPointMapROI_Request;

/// Struct for an array of messages
typedef struct map_msgs__srv__GetPointMapROI_Request__Array
{
  map_msgs__srv__GetPointMapROI_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetPointMapROI_Request__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__GET_POINT_MAP_ROI__REQUEST__STRUCT_H_
