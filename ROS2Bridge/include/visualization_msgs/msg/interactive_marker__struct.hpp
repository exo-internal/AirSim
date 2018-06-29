// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER__STRUCT_HPP_

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
#include "visualization_msgs/msg/interactive_marker_control.hpp"  // controls
#include "visualization_msgs/msg/menu_entry.hpp"  // menu_entries

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_InteractiveMarker __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_InteractiveMarker __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveMarker_
{
  using Type = InteractiveMarker_<ContainerAllocator>;

  explicit InteractiveMarker_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale = 0.0f;
    }
  }

  explicit InteractiveMarker_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    name(_alloc),
    description(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale = 0.0f;
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
  using _description_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _description_type description;
  using _scale_type =
      float;
  _scale_type scale;
  using _menu_entries_type =
      std::vector<visualization_msgs::msg::MenuEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::MenuEntry_<ContainerAllocator>>::other>;
  _menu_entries_type menu_entries;
  using _controls_type =
      std::vector<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>::other>;
  _controls_type controls;

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
  Type * set__description(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->description = _arg;
    return this;
  }
  Type * set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return this;
  }
  Type * set__menu_entries(
    const std::vector<visualization_msgs::msg::MenuEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::MenuEntry_<ContainerAllocator>>::other> & _arg)
  {
    this->menu_entries = _arg;
    return this;
  }
  Type * set__controls(
    const std::vector<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>::other> & _arg)
  {
    this->controls = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      visualization_msgs::msg::InteractiveMarker_<ContainerAllocator> *;
  using ConstRawPtr =
      const visualization_msgs::msg::InteractiveMarker_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarker
    std::shared_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarker
    std::shared_ptr<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveMarker_ & other) const
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
    if (this->description != other.description) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->menu_entries != other.menu_entries) {
      return false;
    }
    if (this->controls != other.controls) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveMarker_

// alias to use template instance with default allocator
using InteractiveMarker =
    visualization_msgs::msg::InteractiveMarker_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER__STRUCT_HPP_
