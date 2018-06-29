// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_UPDATE__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_UPDATE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// server_id
// erases
#include "rosidl_generator_c/string.h"
// markers
#include "visualization_msgs/msg/interactive_marker__struct.h"
// poses
#include "visualization_msgs/msg/interactive_marker_pose__struct.h"

// constants defined in the message
// KEEP_ALIVE
enum
{
  visualization_msgs__msg__InteractiveMarkerUpdate__KEEP_ALIVE = 0u
};
// UPDATE
enum
{
  visualization_msgs__msg__InteractiveMarkerUpdate__UPDATE = 1u
};

/// Struct of message visualization_msgs/InteractiveMarkerUpdate
typedef struct visualization_msgs__msg__InteractiveMarkerUpdate
{
  rosidl_generator_c__String server_id;
  uint64_t seq_num;
  uint8_t type;
  visualization_msgs__msg__InteractiveMarker__Array markers;
  visualization_msgs__msg__InteractiveMarkerPose__Array poses;
  rosidl_generator_c__String__Array erases;
} visualization_msgs__msg__InteractiveMarkerUpdate;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__InteractiveMarkerUpdate__Array
{
  visualization_msgs__msg__InteractiveMarkerUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerUpdate__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_UPDATE__STRUCT_H_
