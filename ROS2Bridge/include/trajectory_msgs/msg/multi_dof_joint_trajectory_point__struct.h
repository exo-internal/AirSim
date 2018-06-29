// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// transforms
#include "geometry_msgs/msg/transform__struct.h"
// velocities
// accelerations
#include "geometry_msgs/msg/twist__struct.h"
// time_from_start
#include "builtin_interfaces/msg/duration__struct.h"

/// Struct of message trajectory_msgs/MultiDOFJointTrajectoryPoint
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectoryPoint
{
  geometry_msgs__msg__Transform__Array transforms;
  geometry_msgs__msg__Twist__Array velocities;
  geometry_msgs__msg__Twist__Array accelerations;
  builtin_interfaces__msg__Duration time_from_start;
} trajectory_msgs__msg__MultiDOFJointTrajectoryPoint;

/// Struct for an array of messages
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Array
{
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Array;

#if __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_
