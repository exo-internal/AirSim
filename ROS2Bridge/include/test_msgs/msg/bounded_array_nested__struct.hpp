// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BOUNDED_ARRAY_NESTED__STRUCT_HPP_
#define TEST_MSGS__MSG__BOUNDED_ARRAY_NESTED__STRUCT_HPP_

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
#include "test_msgs/msg/primitives.hpp"  // primitive_values

#ifndef _WIN32
# define DEPRECATED_test_msgs_msg_BoundedArrayNested __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_msg_BoundedArrayNested __declspec(deprecated)
#endif

namespace test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundedArrayNested_
{
  using Type = BoundedArrayNested_<ContainerAllocator>;

  explicit BoundedArrayNested_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BoundedArrayNested_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _primitive_values_type =
    rosidl_generator_cpp::BoundedVector<test_msgs::msg::Primitives_<ContainerAllocator>, 4, typename ContainerAllocator::template rebind<test_msgs::msg::Primitives_<ContainerAllocator>>::other>;
  _primitive_values_type primitive_values;

  // setters for named parameter idiom
  Type * set__primitive_values(
    const rosidl_generator_cpp::BoundedVector<test_msgs::msg::Primitives_<ContainerAllocator>, 4, typename ContainerAllocator::template rebind<test_msgs::msg::Primitives_<ContainerAllocator>>::other> & _arg)
  {
    this->primitive_values = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_msgs::msg::BoundedArrayNested_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::msg::BoundedArrayNested_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::msg::BoundedArrayNested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::msg::BoundedArrayNested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_msg_BoundedArrayNested
    std::shared_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_msg_BoundedArrayNested
    std::shared_ptr<test_msgs::msg::BoundedArrayNested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundedArrayNested_ & other) const
  {
    if (this->primitive_values != other.primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundedArrayNested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundedArrayNested_

// alias to use template instance with default allocator
using BoundedArrayNested =
  test_msgs::msg::BoundedArrayNested_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__BOUNDED_ARRAY_NESTED__STRUCT_HPP_
