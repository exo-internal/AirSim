// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
#define TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point__struct.hpp"


template<>
struct has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::integral_constant<bool, false>{};

template<>
struct has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
