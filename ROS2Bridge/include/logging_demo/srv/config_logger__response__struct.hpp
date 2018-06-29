// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__STRUCT_HPP_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED_logging_demo_srv_ConfigLogger_Response __attribute__((deprecated))
#else
# define DEPRECATED_logging_demo_srv_ConfigLogger_Response __declspec(deprecated)
#endif

namespace logging_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigLogger_Response_
{
  using Type = ConfigLogger_Response_<ContainerAllocator>;

  explicit ConfigLogger_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ConfigLogger_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
      bool;
  _success_type success;

  // setters for named parameter idiom
  Type * set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      logging_demo::srv::ConfigLogger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
      const logging_demo::srv::ConfigLogger_Response_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      logging_demo::srv::ConfigLogger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      logging_demo::srv::ConfigLogger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_logging_demo_srv_ConfigLogger_Response
    std::shared_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_logging_demo_srv_ConfigLogger_Response
    std::shared_ptr<logging_demo::srv::ConfigLogger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigLogger_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigLogger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigLogger_Response_

// alias to use template instance with default allocator
using ConfigLogger_Response =
    logging_demo::srv::ConfigLogger_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace logging_demo

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__STRUCT_HPP_
