// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_INIT__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_INIT__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// server_id
#include "rosidl_generator_c/string.h"
// markers
#include "visualization_msgs/msg/interactive_marker__struct.h"

/// Struct of message visualization_msgs/InteractiveMarkerInit
typedef struct visualization_msgs__msg__InteractiveMarkerInit
{
  rosidl_generator_c__String server_id;
  uint64_t seq_num;
  visualization_msgs__msg__InteractiveMarker__Array markers;
} visualization_msgs__msg__InteractiveMarkerInit;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__InteractiveMarkerInit__Array
{
  visualization_msgs__msg__InteractiveMarkerInit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerInit__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_INIT__STRUCT_H_
