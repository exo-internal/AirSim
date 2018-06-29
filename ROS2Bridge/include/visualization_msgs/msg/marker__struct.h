// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__MARKER__STRUCT_H_

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
// ns
// text
// mesh_resource
#include "rosidl_generator_c/string.h"
// pose
#include "geometry_msgs/msg/pose__struct.h"
// scale
#include "geometry_msgs/msg/vector3__struct.h"
// color
// colors
#include "std_msgs/msg/color_rgba__struct.h"
// lifetime
#include "builtin_interfaces/msg/duration__struct.h"
// points
#include "geometry_msgs/msg/point__struct.h"

// constants defined in the message
// ARROW
enum
{
  visualization_msgs__msg__Marker__ARROW = 0u
};
// CUBE
enum
{
  visualization_msgs__msg__Marker__CUBE = 1u
};
// SPHERE
enum
{
  visualization_msgs__msg__Marker__SPHERE = 2u
};
// CYLINDER
enum
{
  visualization_msgs__msg__Marker__CYLINDER = 3u
};
// LINE_STRIP
enum
{
  visualization_msgs__msg__Marker__LINE_STRIP = 4u
};
// LINE_LIST
enum
{
  visualization_msgs__msg__Marker__LINE_LIST = 5u
};
// CUBE_LIST
enum
{
  visualization_msgs__msg__Marker__CUBE_LIST = 6u
};
// SPHERE_LIST
enum
{
  visualization_msgs__msg__Marker__SPHERE_LIST = 7u
};
// POINTS
enum
{
  visualization_msgs__msg__Marker__POINTS = 8u
};
// TEXT_VIEW_FACING
enum
{
  visualization_msgs__msg__Marker__TEXT_VIEW_FACING = 9u
};
// MESH_RESOURCE
enum
{
  visualization_msgs__msg__Marker__MESH_RESOURCE = 10u
};
// TRIANGLE_LIST
enum
{
  visualization_msgs__msg__Marker__TRIANGLE_LIST = 11u
};
// ADD
enum
{
  visualization_msgs__msg__Marker__ADD = 0u
};
// MODIFY
enum
{
  visualization_msgs__msg__Marker__MODIFY = 0u
};
// DELETE
enum
{
  visualization_msgs__msg__Marker__DELETE = 2u
};
// DELETEALL
enum
{
  visualization_msgs__msg__Marker__DELETEALL = 3u
};

/// Struct of message visualization_msgs/Marker
typedef struct visualization_msgs__msg__Marker
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String ns;
  int32_t id;
  int32_t type;
  int32_t action;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Vector3 scale;
  std_msgs__msg__ColorRGBA color;
  builtin_interfaces__msg__Duration lifetime;
  bool frame_locked;
  geometry_msgs__msg__Point__Array points;
  std_msgs__msg__ColorRGBA__Array colors;
  rosidl_generator_c__String text;
  rosidl_generator_c__String mesh_resource;
  bool mesh_use_embedded_materials;
} visualization_msgs__msg__Marker;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__Marker__Array
{
  visualization_msgs__msg__Marker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__Marker__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__MARKER__STRUCT_H_
