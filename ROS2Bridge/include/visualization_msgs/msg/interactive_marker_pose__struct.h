// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_POSE__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_POSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// pose
#include "geometry_msgs/msg/pose__struct.h"
// name
#include "rosidl_generator_c/string.h"

/// Struct of message visualization_msgs/InteractiveMarkerPose
typedef struct visualization_msgs__msg__InteractiveMarkerPose
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  rosidl_generator_c__String name;
} visualization_msgs__msg__InteractiveMarkerPose;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__InteractiveMarkerPose__Array
{
  visualization_msgs__msg__InteractiveMarkerPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerPose__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_POSE__STRUCT_H_
