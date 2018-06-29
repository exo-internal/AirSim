// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__EMPTY__RESPONSE__TRAITS_HPP_
#define TEST_MSGS__SRV__EMPTY__RESPONSE__TRAITS_HPP_

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

#include "test_msgs/srv/empty__response__struct.hpp"


template<>
struct has_fixed_size<test_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true>{};

template<>
struct has_bounded_size<test_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__SRV__EMPTY__RESPONSE__TRAITS_HPP_
