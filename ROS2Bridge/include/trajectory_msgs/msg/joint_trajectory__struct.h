// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY__STRUCT_H_

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
// joint_names
#include "rosidl_generator_c/string.h"
// points
#include "trajectory_msgs/msg/joint_trajectory_point__struct.h"

/// Struct of message trajectory_msgs/JointTrajectory
typedef struct trajectory_msgs__msg__JointTrajectory
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String__Array joint_names;
  trajectory_msgs__msg__JointTrajectoryPoint__Array points;
} trajectory_msgs__msg__JointTrajectory;

/// Struct for an array of messages
typedef struct trajectory_msgs__msg__JointTrajectory__Array
{
  trajectory_msgs__msg__JointTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__JointTrajectory__Array;

#if __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY__STRUCT_H_
