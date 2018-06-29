// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "logging_demo/srv/config_logger__struct.hpp"

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__TRAITS_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__TRAITS_HPP_

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
struct has_fixed_size<logging_demo::srv::ConfigLogger>
  : std::integral_constant<
    bool,
    has_fixed_size<logging_demo::srv::ConfigLogger_Request>::value &&
    has_fixed_size<logging_demo::srv::ConfigLogger_Response>::value
  >
{
};

template<>
struct has_bounded_size<logging_demo::srv::ConfigLogger>
  : std::integral_constant<
    bool,
    has_bounded_size<logging_demo::srv::ConfigLogger_Request>::value &&
    has_bounded_size<logging_demo::srv::ConfigLogger_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__TRAITS_HPP_
