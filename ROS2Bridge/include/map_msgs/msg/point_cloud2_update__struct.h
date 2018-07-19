// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__POINT_CLOUD2_UPDATE__STRUCT_H_
#define MAP_MSGS__MSG__POINT_CLOUD2_UPDATE__STRUCT_H_

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
// points
#include "sensor_msgs/msg/point_cloud2__struct.h"

// constants defined in the message
// ADD
enum
{
  map_msgs__msg__PointCloud2Update__ADD = 0u
};
// DELETE
enum
{
  map_msgs__msg__PointCloud2Update__DELETE = 1u
};

/// Struct of message map_msgs/PointCloud2Update
typedef struct map_msgs__msg__PointCloud2Update
{
  std_msgs__msg__Header header;
  uint32_t type;
  sensor_msgs__msg__PointCloud2 points;
} map_msgs__msg__PointCloud2Update;

/// Struct for an array of messages
typedef struct map_msgs__msg__PointCloud2Update__Array
{
  map_msgs__msg__PointCloud2Update * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__msg__PointCloud2Update__Array;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__MSG__POINT_CLOUD2_UPDATE__STRUCT_H_
