// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__MARKER__STRUCT_HPP_

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
#include "builtin_interfaces/msg/duration.hpp"  // lifetime
#include "geometry_msgs/msg/point.hpp"  // points
#include "geometry_msgs/msg/pose.hpp"  // pose
#include "geometry_msgs/msg/vector3.hpp"  // scale
#include "std_msgs/msg/color_rgba.hpp"  // colors, color
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_Marker __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_Marker __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Marker_
{
  using Type = Marker_<ContainerAllocator>;

  explicit Marker_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    scale(_init),
    color(_init),
    lifetime(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0l;
      this->action = 0l;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_locked = false;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->mesh_resource = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mesh_use_embedded_materials = false;
    }
  }

  explicit Marker_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ns(_alloc),
    pose(_alloc, _init),
    scale(_alloc, _init),
    color(_alloc, _init),
    lifetime(_alloc, _init),
    text(_alloc),
    mesh_resource(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0l;
      this->action = 0l;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_locked = false;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->mesh_resource = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mesh_use_embedded_materials = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _ns_type ns;
  using _id_type =
    int32_t;
  _id_type id;
  using _type_type =
    int32_t;
  _type_type type;
  using _action_type =
    int32_t;
  _action_type action;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _scale_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _scale_type scale;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _frame_locked_type =
    bool;
  _frame_locked_type frame_locked;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _points_type points;
  using _colors_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other>;
  _colors_type colors;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;
  using _mesh_resource_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mesh_resource_type mesh_resource;
  using _mesh_use_embedded_materials_type =
    bool;
  _mesh_use_embedded_materials_type mesh_use_embedded_materials;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__ns(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->ns = _arg;
    return this;
  }
  Type * set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return this;
  }
  Type * set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return this;
  }
  Type * set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return this;
  }
  Type * set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return this;
  }
  Type * set__scale(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->scale = _arg;
    return this;
  }
  Type * set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return this;
  }
  Type * set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return this;
  }
  Type * set__frame_locked(
    const bool & _arg)
  {
    this->frame_locked = _arg;
    return this;
  }
  Type * set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return this;
  }
  Type * set__colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other> & _arg)
  {
    this->colors = _arg;
    return this;
  }
  Type * set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return this;
  }
  Type * set__mesh_resource(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mesh_resource = _arg;
    return this;
  }
  Type * set__mesh_use_embedded_materials(
    const bool & _arg)
  {
    this->mesh_use_embedded_materials = _arg;
    return this;
  }

  // constant declarations
  static constexpr uint8_t ARROW =
    0u;
  static constexpr uint8_t CUBE =
    1u;
  static constexpr uint8_t SPHERE =
    2u;
  static constexpr uint8_t CYLINDER =
    3u;
  static constexpr uint8_t LINE_STRIP =
    4u;
  static constexpr uint8_t LINE_LIST =
    5u;
  static constexpr uint8_t CUBE_LIST =
    6u;
  static constexpr uint8_t SPHERE_LIST =
    7u;
  static constexpr uint8_t POINTS =
    8u;
  static constexpr uint8_t TEXT_VIEW_FACING =
    9u;
  static constexpr uint8_t MESH_RESOURCE =
    10u;
  static constexpr uint8_t TRIANGLE_LIST =
    11u;
  static constexpr uint8_t ADD =
    0u;
  static constexpr uint8_t MODIFY =
    0u;
  static constexpr uint8_t DELETE =
    2u;
  static constexpr uint8_t DELETEALL =
    3u;

  // pointer types
  using RawPtr =
    visualization_msgs::msg::Marker_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::Marker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::Marker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::Marker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_Marker
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_Marker
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Marker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->frame_locked != other.frame_locked) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->colors != other.colors) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->mesh_resource != other.mesh_resource) {
      return false;
    }
    if (this->mesh_use_embedded_materials != other.mesh_use_embedded_materials) {
      return false;
    }
    return true;
  }
  bool operator!=(const Marker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Marker_

// alias to use template instance with default allocator
using Marker =
  visualization_msgs::msg::Marker_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::ARROW;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::CUBE;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::SPHERE;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::CYLINDER;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::LINE_STRIP;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::LINE_LIST;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::CUBE_LIST;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::SPHERE_LIST;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::POINTS;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::TEXT_VIEW_FACING;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::MESH_RESOURCE;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::TRIANGLE_LIST;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::ADD;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::MODIFY;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::DELETE;
template<typename ContainerAllocator>
constexpr uint8_t Marker_<ContainerAllocator>::DELETEALL;

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__MARKER__STRUCT_HPP_
