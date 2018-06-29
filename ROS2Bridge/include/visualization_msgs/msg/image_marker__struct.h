// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__IMAGE_MARKER__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__IMAGE_MARKER__STRUCT_H_

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
#include "rosidl_generator_c/string.h"
// position
// points
#include "geometry_msgs/msg/point__struct.h"
// outline_color
// fill_color
// outline_colors
#include "std_msgs/msg/color_rgba__struct.h"
// lifetime
#include "builtin_interfaces/msg/duration__struct.h"

// constants defined in the message
// CIRCLE
enum
{
  visualization_msgs__msg__ImageMarker__CIRCLE = 0u
};
// LINE_STRIP
enum
{
  visualization_msgs__msg__ImageMarker__LINE_STRIP = 1u
};
// LINE_LIST
enum
{
  visualization_msgs__msg__ImageMarker__LINE_LIST = 2u
};
// POLYGON
enum
{
  visualization_msgs__msg__ImageMarker__POLYGON = 3u
};
// POINTS
enum
{
  visualization_msgs__msg__ImageMarker__POINTS = 4u
};
// ADD
enum
{
  visualization_msgs__msg__ImageMarker__ADD = 0u
};
// REMOVE
enum
{
  visualization_msgs__msg__ImageMarker__REMOVE = 1u
};

/// Struct of message visualization_msgs/ImageMarker
typedef struct visualization_msgs__msg__ImageMarker
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String ns;
  int32_t id;
  int32_t type;
  int32_t action;
  geometry_msgs__msg__Point position;
  float scale;
  std_msgs__msg__ColorRGBA outline_color;
  uint8_t filled;
  std_msgs__msg__ColorRGBA fill_color;
  builtin_interfaces__msg__Duration lifetime;
  geometry_msgs__msg__Point__Array points;
  std_msgs__msg__ColorRGBA__Array outline_colors;
} visualization_msgs__msg__ImageMarker;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__ImageMarker__Array
{
  visualization_msgs__msg__ImageMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__ImageMarker__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__IMAGE_MARKER__STRUCT_H_
