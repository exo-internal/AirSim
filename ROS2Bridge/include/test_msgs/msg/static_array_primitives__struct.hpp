// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__STATIC_ARRAY_PRIMITIVES__STRUCT_HPP_
#define TEST_MSGS__MSG__STATIC_ARRAY_PRIMITIVES__STRUCT_HPP_

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
# define DEPRECATED_test_msgs_msg_StaticArrayPrimitives __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_msg_StaticArrayPrimitives __declspec(deprecated)
#endif

namespace test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaticArrayPrimitives_
{
  using Type = StaticArrayPrimitives_<ContainerAllocator>;

  explicit StaticArrayPrimitives_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->bool_values.begin(), this->bool_values.end(), false);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->byte_values.begin(), this->byte_values.end(), 0);
      std::fill(this->char_values.begin(), this->char_values.end(), 0);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->float32_values.begin(), this->float32_values.end(), 0.0f);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->float64_values.begin(), this->float64_values.end(), 0.0);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->int8_values.begin(), this->int8_values.end(), 0);
      std::fill(this->uint8_values.begin(), this->uint8_values.end(), 0);
      std::fill(this->int16_values.begin(), this->int16_values.end(), 0);
      std::fill(this->uint16_values.begin(), this->uint16_values.end(), 0);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->int32_values.begin(), this->int32_values.end(), 0l);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->uint32_values.begin(), this->uint32_values.end(), 0ul);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->int64_values.begin(), this->int64_values.end(), 0ll);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->uint64_values.begin(), this->uint64_values.end(), 0ull);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->string_values.begin(), this->string_values.end(), "");
    }
  }

  explicit StaticArrayPrimitives_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : bool_values(_alloc),
    byte_values(_alloc),
    char_values(_alloc),
    float32_values(_alloc),
    float64_values(_alloc),
    int8_values(_alloc),
    uint8_values(_alloc),
    int16_values(_alloc),
    uint16_values(_alloc),
    int32_values(_alloc),
    uint32_values(_alloc),
    int64_values(_alloc),
    uint64_values(_alloc),
    string_values(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->bool_values.begin(), this->bool_values.end(), false);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->byte_values.begin(), this->byte_values.end(), 0);
      std::fill(this->char_values.begin(), this->char_values.end(), 0);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->float32_values.begin(), this->float32_values.end(), 0.0f);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->float64_values.begin(), this->float64_values.end(), 0.0);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->int8_values.begin(), this->int8_values.end(), 0);
      std::fill(this->uint8_values.begin(), this->uint8_values.end(), 0);
      std::fill(this->int16_values.begin(), this->int16_values.end(), 0);
      std::fill(this->uint16_values.begin(), this->uint16_values.end(), 0);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->int32_values.begin(), this->int32_values.end(), 0l);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->uint32_values.begin(), this->uint32_values.end(), 0ul);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->int64_values.begin(), this->int64_values.end(), 0ll);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->uint64_values.begin(), this->uint64_values.end(), 0ull);
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->string_values.begin(), this->string_values.end(), "");
    }
  }

  // field types and members
  using _bool_values_type =
      std::array<bool, 3>;
  _bool_values_type bool_values;
  using _byte_values_type =
      std::array<uint8_t, 3>;
  _byte_values_type byte_values;
  using _char_values_type =
      std::array<char, 3>;
  _char_values_type char_values;
  using _float32_values_type =
      std::array<float, 3>;
  _float32_values_type float32_values;
  using _float64_values_type =
      std::array<double, 3>;
  _float64_values_type float64_values;
  using _int8_values_type =
      std::array<int8_t, 3>;
  _int8_values_type int8_values;
  using _uint8_values_type =
      std::array<uint8_t, 3>;
  _uint8_values_type uint8_values;
  using _int16_values_type =
      std::array<int16_t, 3>;
  _int16_values_type int16_values;
  using _uint16_values_type =
      std::array<uint16_t, 3>;
  _uint16_values_type uint16_values;
  using _int32_values_type =
      std::array<int32_t, 3>;
  _int32_values_type int32_values;
  using _uint32_values_type =
      std::array<uint32_t, 3>;
  _uint32_values_type uint32_values;
  using _int64_values_type =
      std::array<int64_t, 3>;
  _int64_values_type int64_values;
  using _uint64_values_type =
      std::array<uint64_t, 3>;
  _uint64_values_type uint64_values;
  using _string_values_type =
      std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>;
  _string_values_type string_values;

  // setters for named parameter idiom
  Type * set__bool_values(
    const std::array<bool, 3> & _arg)
  {
    this->bool_values = _arg;
    return this;
  }
  Type * set__byte_values(
    const std::array<uint8_t, 3> & _arg)
  {
    this->byte_values = _arg;
    return this;
  }
  Type * set__char_values(
    const std::array<char, 3> & _arg)
  {
    this->char_values = _arg;
    return this;
  }
  Type * set__float32_values(
    const std::array<float, 3> & _arg)
  {
    this->float32_values = _arg;
    return this;
  }
  Type * set__float64_values(
    const std::array<double, 3> & _arg)
  {
    this->float64_values = _arg;
    return this;
  }
  Type * set__int8_values(
    const std::array<int8_t, 3> & _arg)
  {
    this->int8_values = _arg;
    return this;
  }
  Type * set__uint8_values(
    const std::array<uint8_t, 3> & _arg)
  {
    this->uint8_values = _arg;
    return this;
  }
  Type * set__int16_values(
    const std::array<int16_t, 3> & _arg)
  {
    this->int16_values = _arg;
    return this;
  }
  Type * set__uint16_values(
    const std::array<uint16_t, 3> & _arg)
  {
    this->uint16_values = _arg;
    return this;
  }
  Type * set__int32_values(
    const std::array<int32_t, 3> & _arg)
  {
    this->int32_values = _arg;
    return this;
  }
  Type * set__uint32_values(
    const std::array<uint32_t, 3> & _arg)
  {
    this->uint32_values = _arg;
    return this;
  }
  Type * set__int64_values(
    const std::array<int64_t, 3> & _arg)
  {
    this->int64_values = _arg;
    return this;
  }
  Type * set__uint64_values(
    const std::array<uint64_t, 3> & _arg)
  {
    this->uint64_values = _arg;
    return this;
  }
  Type * set__string_values(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3> & _arg)
  {
    this->string_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_msg_StaticArrayPrimitives
    std::shared_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_msg_StaticArrayPrimitives
    std::shared_ptr<test_msgs::msg::StaticArrayPrimitives_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaticArrayPrimitives_ & other) const
  {
    if (this->bool_values != other.bool_values) {
      return false;
    }
    if (this->byte_values != other.byte_values) {
      return false;
    }
    if (this->char_values != other.char_values) {
      return false;
    }
    if (this->float32_values != other.float32_values) {
      return false;
    }
    if (this->float64_values != other.float64_values) {
      return false;
    }
    if (this->int8_values != other.int8_values) {
      return false;
    }
    if (this->uint8_values != other.uint8_values) {
      return false;
    }
    if (this->int16_values != other.int16_values) {
      return false;
    }
    if (this->uint16_values != other.uint16_values) {
      return false;
    }
    if (this->int32_values != other.int32_values) {
      return false;
    }
    if (this->uint32_values != other.uint32_values) {
      return false;
    }
    if (this->int64_values != other.int64_values) {
      return false;
    }
    if (this->uint64_values != other.uint64_values) {
      return false;
    }
    if (this->string_values != other.string_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaticArrayPrimitives_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaticArrayPrimitives_

// alias to use template instance with default allocator
using StaticArrayPrimitives =
    test_msgs::msg::StaticArrayPrimitives_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__STATIC_ARRAY_PRIMITIVES__STRUCT_HPP_
