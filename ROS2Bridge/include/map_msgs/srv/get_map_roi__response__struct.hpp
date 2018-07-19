// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__GET_MAP_ROI__RESPONSE__STRUCT_HPP_
#define MAP_MSGS__SRV__GET_MAP_ROI__RESPONSE__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "nav_msgs/msg/occupancy_grid.hpp"  // sub_map

#ifndef _WIN32
# define DEPRECATED_map_msgs_srv_GetMapROI_Response __attribute__((deprecated))
#else
# define DEPRECATED_map_msgs_srv_GetMapROI_Response __declspec(deprecated)
#endif

namespace map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMapROI_Response_
{
  using Type = GetMapROI_Response_<ContainerAllocator>;

  explicit GetMapROI_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sub_map(_init)
  {
    (void)_init;
  }

  explicit GetMapROI_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sub_map(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _sub_map_type =
    nav_msgs::msg::OccupancyGrid_<ContainerAllocator>;
  _sub_map_type sub_map;

  // setters for named parameter idiom
  Type * set__sub_map(
    const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->sub_map = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_msgs::srv::GetMapROI_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_msgs::srv::GetMapROI_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::GetMapROI_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::GetMapROI_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_map_msgs_srv_GetMapROI_Response
    std::shared_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_map_msgs_srv_GetMapROI_Response
    std::shared_ptr<map_msgs::srv::GetMapROI_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMapROI_Response_ & other) const
  {
    if (this->sub_map != other.sub_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMapROI_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMapROI_Response_

// alias to use template instance with default allocator
using GetMapROI_Response =
  map_msgs::srv::GetMapROI_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_msgs

#endif  // MAP_MSGS__SRV__GET_MAP_ROI__RESPONSE__STRUCT_HPP_
