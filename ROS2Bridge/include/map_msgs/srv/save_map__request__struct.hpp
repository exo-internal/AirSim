// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__SAVE_MAP__REQUEST__STRUCT_HPP_
#define MAP_MSGS__SRV__SAVE_MAP__REQUEST__STRUCT_HPP_

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
#include "std_msgs/msg/string.hpp"  // filename

#ifndef _WIN32
# define DEPRECATED_map_msgs_srv_SaveMap_Request __attribute__((deprecated))
#else
# define DEPRECATED_map_msgs_srv_SaveMap_Request __declspec(deprecated)
#endif

namespace map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveMap_Request_
{
  using Type = SaveMap_Request_<ContainerAllocator>;

  explicit SaveMap_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : filename(_init)
  {
    (void)_init;
  }

  explicit SaveMap_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : filename(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _filename_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _filename_type filename;

  // setters for named parameter idiom
  Type * set__filename(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->filename = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_msgs::srv::SaveMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_msgs::srv::SaveMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::SaveMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::SaveMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_map_msgs_srv_SaveMap_Request
    std::shared_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_map_msgs_srv_SaveMap_Request
    std::shared_ptr<map_msgs::srv::SaveMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMap_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMap_Request_

// alias to use template instance with default allocator
using SaveMap_Request =
  map_msgs::srv::SaveMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_msgs

#endif  // MAP_MSGS__SRV__SAVE_MAP__REQUEST__STRUCT_HPP_
