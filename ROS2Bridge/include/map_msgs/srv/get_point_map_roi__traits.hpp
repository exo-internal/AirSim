// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "map_msgs/srv/get_point_map_roi__struct.hpp"

#ifndef MAP_MSGS__SRV__GET_POINT_MAP_ROI__TRAITS_HPP_
#define MAP_MSGS__SRV__GET_POINT_MAP_ROI__TRAITS_HPP_

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
struct has_fixed_size<map_msgs::srv::GetPointMapROI>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::GetPointMapROI_Request>::value &&
    has_fixed_size<map_msgs::srv::GetPointMapROI_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::GetPointMapROI_Request>::value &&
    has_bounded_size<map_msgs::srv::GetPointMapROI_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__GET_POINT_MAP_ROI__TRAITS_HPP_
