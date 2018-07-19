// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef ROSGRAPH_MSGS__MSG__CLOCK__TRAITS_HPP_
#define ROSGRAPH_MSGS__MSG__CLOCK__TRAITS_HPP_

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

#include "rosgraph_msgs/msg/clock__struct.hpp"


template<>
struct has_fixed_size<rosgraph_msgs::msg::Clock>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value>{};

template<>
struct has_bounded_size<rosgraph_msgs::msg::Clock>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value>{};

}  // namespace rosidl_generator_traits

#endif  // ROSGRAPH_MSGS__MSG__CLOCK__TRAITS_HPP_
