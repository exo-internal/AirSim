// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// positions
// velocities
// accelerations
// effort
#include "rosidl_generator_c/primitives_array.h"
// time_from_start
#include "builtin_interfaces/msg/duration__struct.h"

/// Struct of message trajectory_msgs/JointTrajectoryPoint
typedef struct trajectory_msgs__msg__JointTrajectoryPoint
{
  rosidl_generator_c__float64__Array positions;
  rosidl_generator_c__float64__Array velocities;
  rosidl_generator_c__float64__Array accelerations;
  rosidl_generator_c__float64__Array effort;
  builtin_interfaces__msg__Duration time_from_start;
} trajectory_msgs__msg__JointTrajectoryPoint;

/// Struct for an array of messages
typedef struct trajectory_msgs__msg__JointTrajectoryPoint__Array
{
  trajectory_msgs__msg__JointTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__JointTrajectoryPoint__Array;

#if __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__STRUCT_H_
