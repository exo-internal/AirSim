// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MENU_ENTRY__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__MENU_ENTRY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// title
// command
#include "rosidl_generator_c/string.h"

// constants defined in the message
// FEEDBACK
enum
{
  visualization_msgs__msg__MenuEntry__FEEDBACK = 0u
};
// ROSRUN
enum
{
  visualization_msgs__msg__MenuEntry__ROSRUN = 1u
};
// ROSLAUNCH
enum
{
  visualization_msgs__msg__MenuEntry__ROSLAUNCH = 2u
};

/// Struct of message visualization_msgs/MenuEntry
typedef struct visualization_msgs__msg__MenuEntry
{
  uint32_t id;
  uint32_t parent_id;
  rosidl_generator_c__String title;
  rosidl_generator_c__String command;
  uint8_t command_type;
} visualization_msgs__msg__MenuEntry;

/// Struct for an array of messages
typedef struct visualization_msgs__msg__MenuEntry__Array
{
  visualization_msgs__msg__MenuEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__MenuEntry__Array;

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__MENU_ENTRY__STRUCT_H_
