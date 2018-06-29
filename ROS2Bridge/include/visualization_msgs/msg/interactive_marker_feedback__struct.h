// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_FEEDBACK__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_FEEDBACK__STRUCT_H_

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
// client_id
// marker_name
// control_name
#include "rosidl_generator_c/string.h"
// pose
#include "geometry_msgs/msg/pose__struct.h"
// mouse_point
#include "geometry_msgs/msg/point__struct.h"

// constants defined in the message
// KEEP_ALIVE
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__KEEP_ALIVE = 0u
};
// POSE_UPDATE
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__POSE_UPDATE = 1u
};
// MENU_SELECT
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__MENU_SELECT = 2u
};
// BUTTON_CLICK
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__BUTTON_CLICK = 3u
};
// MOUSE_DOWN
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__MOUSE_DOWN = 4u
};
// MOUSE_UP
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__MOUSE_UP = 5u
};

/// Struct of message visualization_msgs/InteractiveMarkerFeedback
typedef struct visualization_msgs__msg__InteractiveMarkerFeedback
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String client_id;
  rosidl_generator_c__String marker_name;
  rosidl_generator_c__String control_name;
  uint8_t event_type;
  geometry_msgs__msg__Pose pose;
  uint32_t menu_entry_id;
  geometry_msgs__msg__Point mouse_point;
  bool mouse_point_valid;
} visualization_msgs__msg__InteractiveMarkerFeedback;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__InteractiveMarkerFeedback__Array
{
  visualization_msgs__msg__InteractiveMarkerFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerFeedback__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_FEEDBACK__STRUCT_H_
