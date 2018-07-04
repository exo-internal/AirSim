// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_STATUS__STRUCT_HPP_
#define SENSOR_MSGS__MSG__NAV_SAT_STATUS__STRUCT_HPP_

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
# define DEPRECATED_sensor_msgs_msg_NavSatStatus __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_NavSatStatus __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavSatStatus_
{
  using Type = NavSatStatus_<ContainerAllocator>;

  explicit NavSatStatus_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->service = 0;
    }
  }

  explicit NavSatStatus_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->service = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _service_type =
    uint16_t;
  _service_type service;

  // setters for named parameter idiom
  Type * set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return this;
  }
  Type * set__service(
    const uint16_t & _arg)
  {
    this->service = _arg;
    return this;
  }

  // constant declarations
  static constexpr int8_t STATUS_NO_FIX =
    -1;
  static constexpr int8_t STATUS_FIX =
    0;
  static constexpr int8_t STATUS_SBAS_FIX =
    1;
  static constexpr int8_t STATUS_GBAS_FIX =
    2;
  static constexpr uint16_t SERVICE_GPS =
    1u;
  static constexpr uint16_t SERVICE_GLONASS =
    2u;
  static constexpr uint16_t SERVICE_COMPASS =
    4u;
  static constexpr uint16_t SERVICE_GALILEO =
    8u;

  // pointer types
  using RawPtr =
    sensor_msgs::msg::NavSatStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::NavSatStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::NavSatStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::NavSatStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_NavSatStatus
    std::shared_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_NavSatStatus
    std::shared_ptr<sensor_msgs::msg::NavSatStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavSatStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->service != other.service) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavSatStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavSatStatus_

// alias to use template instance with default allocator
using NavSatStatus =
  sensor_msgs::msg::NavSatStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t NavSatStatus_<ContainerAllocator>::STATUS_NO_FIX;
template<typename ContainerAllocator>
constexpr int8_t NavSatStatus_<ContainerAllocator>::STATUS_FIX;
template<typename ContainerAllocator>
constexpr int8_t NavSatStatus_<ContainerAllocator>::STATUS_SBAS_FIX;
template<typename ContainerAllocator>
constexpr int8_t NavSatStatus_<ContainerAllocator>::STATUS_GBAS_FIX;
template<typename ContainerAllocator>
constexpr uint16_t NavSatStatus_<ContainerAllocator>::SERVICE_GPS;
template<typename ContainerAllocator>
constexpr uint16_t NavSatStatus_<ContainerAllocator>::SERVICE_GLONASS;
template<typename ContainerAllocator>
constexpr uint16_t NavSatStatus_<ContainerAllocator>::SERVICE_COMPASS;
template<typename ContainerAllocator>
constexpr uint16_t NavSatStatus_<ContainerAllocator>::SERVICE_GALILEO;

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__NAV_SAT_STATUS__STRUCT_HPP_
