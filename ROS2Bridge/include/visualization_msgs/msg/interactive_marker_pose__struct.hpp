// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_POSE__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_POSE__STRUCT_HPP_

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
#include "geometry_msgs/msg/pose.hpp"  // pose
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_InteractiveMarkerPose __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_InteractiveMarkerPose __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveMarkerPose_
{
  using Type = InteractiveMarkerPose_<ContainerAllocator>;

  explicit InteractiveMarkerPose_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit InteractiveMarkerPose_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return this;
  }
  Type * set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarkerPose
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarkerPose
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveMarkerPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveMarkerPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveMarkerPose_

// alias to use template instance with default allocator
using InteractiveMarkerPose =
  visualization_msgs::msg::InteractiveMarkerPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_POSE__STRUCT_HPP_
