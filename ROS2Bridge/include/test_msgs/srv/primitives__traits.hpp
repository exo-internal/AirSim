// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "test_msgs/srv/primitives__struct.hpp"

#ifndef TEST_MSGS__SRV__PRIMITIVES__TRAITS_HPP_
#define TEST_MSGS__SRV__PRIMITIVES__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<test_msgs::srv::Primitives>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::srv::Primitives_Request>::value &&
    has_fixed_size<test_msgs::srv::Primitives_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::srv::Primitives>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::srv::Primitives_Request>::value &&
    has_bounded_size<test_msgs::srv::Primitives_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__SRV__PRIMITIVES__TRAITS_HPP_
