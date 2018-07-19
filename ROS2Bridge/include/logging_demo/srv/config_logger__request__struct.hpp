// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__REQUEST__STRUCT_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__REQUEST__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_logging_demo_srv_ConfigLogger_Request __attribute__((deprecated))
#else
# define DEPRECATED_logging_demo_srv_ConfigLogger_Request __declspec(deprecated)
#endif

namespace logging_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigLogger_Request_
{
  using Type = ConfigLogger_Request_<ContainerAllocator>;

  explicit ConfigLogger_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->logger_name = "";
      this->level = "";
    }
  }

  explicit ConfigLogger_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : logger_name(_alloc),
    level(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->logger_name = "";
      this->level = "";
    }
  }

  // field types and members
  using _logger_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _logger_name_type logger_name;
  using _level_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _level_type level;

  // setters for named parameter idiom
  Type * set__logger_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->logger_name = _arg;
    return this;
  }
  Type * set__level(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->level = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    logging_demo::srv::ConfigLogger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const logging_demo::srv::ConfigLogger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      logging_demo::srv::ConfigLogger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      logging_demo::srv::ConfigLogger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_logging_demo_srv_ConfigLogger_Request
    std::shared_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_logging_demo_srv_ConfigLogger_Request
    std::shared_ptr<logging_demo::srv::ConfigLogger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigLogger_Request_ & other) const
  {
    if (this->logger_name != other.logger_name) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigLogger_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigLogger_Request_

// alias to use template instance with default allocator
using ConfigLogger_Request =
  logging_demo::srv::ConfigLogger_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace logging_demo

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__REQUEST__STRUCT_HPP_
