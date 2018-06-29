// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// name
// description
#include "rosidl_generator_c/string.h"
// orientation
#include "geometry_msgs/msg/quaternion__struct.h"
// markers
#include "visualization_msgs/msg/marker__struct.h"

// constants defined in the message
// INHERIT
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__INHERIT = 0u
};
// FIXED
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__FIXED = 1u
};
// VIEW_FACING
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__VIEW_FACING = 2u
};
// NONE
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__NONE = 0u
};
// MENU
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MENU = 1u
};
// BUTTON
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__BUTTON = 2u
};
// MOVE_AXIS
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_AXIS = 3u
};
// MOVE_PLANE
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_PLANE = 4u
};
// ROTATE_AXIS
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__ROTATE_AXIS = 5u
};
// MOVE_ROTATE
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_ROTATE = 6u
};
// MOVE_3D
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_3D = 7u
};
// ROTATE_3D
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__ROTATE_3D = 8u
};
// MOVE_ROTATE_3D
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_ROTATE_3D = 9u
};

/// Struct of message visualization_msgs/InteractiveMarkerControl
typedef struct visualization_msgs__msg__InteractiveMarkerControl
{
  rosidl_generator_c__String name;
  geometry_msgs__msg__Quaternion orientation;
  uint8_t orientation_mode;
  uint8_t interaction_mode;
  bool always_visible;
  visualization_msgs__msg__Marker__Array markers;
  bool independent_marker_orientation;
  rosidl_generator_c__String description;
} visualization_msgs__msg__InteractiveMarkerControl;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__InteractiveMarkerControl__Array
{
  visualization_msgs__msg__InteractiveMarkerControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerControl__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__STRUCT_H_
