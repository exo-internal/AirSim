// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_INIT__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_INIT__STRUCT_HPP_

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
#include "visualization_msgs/msg/interactive_marker.hpp"  // markers

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_InteractiveMarkerInit __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_InteractiveMarkerInit __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveMarkerInit_
{
  using Type = InteractiveMarkerInit_<ContainerAllocator>;

  explicit InteractiveMarkerInit_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_id = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq_num = 0ull;
    }
  }

  explicit InteractiveMarkerInit_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : server_id(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_id = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq_num = 0ull;
    }
  }

  // field types and members
  using _server_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _server_id_type server_id;
  using _seq_num_type =
    uint64_t;
  _seq_num_type seq_num;
  using _markers_type =
    std::vector<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>::other>;
  _markers_type markers;

  // setters for named parameter idiom
  Type * set__server_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->server_id = _arg;
    return this;
  }
  Type * set__seq_num(
    const uint64_t & _arg)
  {
    this->seq_num = _arg;
    return this;
  }
  Type * set__markers(
    const std::vector<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>::other> & _arg)
  {
    this->markers = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarkerInit
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarkerInit
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerInit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveMarkerInit_ & other) const
  {
    if (this->server_id != other.server_id) {
      return false;
    }
    if (this->seq_num != other.seq_num) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveMarkerInit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveMarkerInit_

// alias to use template instance with default allocator
using InteractiveMarkerInit =
  visualization_msgs::msg::InteractiveMarkerInit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_INIT__STRUCT_HPP_
