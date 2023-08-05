// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTER__STRUCT_HPP_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rov_interfaces__msg__Thruster __attribute__((deprecated))
#else
# define DEPRECATED__rov_interfaces__msg__Thruster __declspec(deprecated)
#endif

namespace rov_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Thruster_
{
  using Type = Thruster_<ContainerAllocator>;

  explicit Thruster_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_rpm = 0;
      this->given_voltage = 0.0f;
      this->given_current = 0.0f;
      this->controller_temperate = 0;
      this->motor_temperate = 0;
      this->motor_status = 0;
    }
  }

  explicit Thruster_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_rpm = 0;
      this->given_voltage = 0.0f;
      this->given_current = 0.0f;
      this->controller_temperate = 0;
      this->motor_temperate = 0;
      this->motor_status = 0;
    }
  }

  // field types and members
  using _speed_rpm_type =
    uint16_t;
  _speed_rpm_type speed_rpm;
  using _given_voltage_type =
    float;
  _given_voltage_type given_voltage;
  using _given_current_type =
    float;
  _given_current_type given_current;
  using _controller_temperate_type =
    uint8_t;
  _controller_temperate_type controller_temperate;
  using _motor_temperate_type =
    uint8_t;
  _motor_temperate_type motor_temperate;
  using _motor_status_type =
    uint8_t;
  _motor_status_type motor_status;

  // setters for named parameter idiom
  Type & set__speed_rpm(
    const uint16_t & _arg)
  {
    this->speed_rpm = _arg;
    return *this;
  }
  Type & set__given_voltage(
    const float & _arg)
  {
    this->given_voltage = _arg;
    return *this;
  }
  Type & set__given_current(
    const float & _arg)
  {
    this->given_current = _arg;
    return *this;
  }
  Type & set__controller_temperate(
    const uint8_t & _arg)
  {
    this->controller_temperate = _arg;
    return *this;
  }
  Type & set__motor_temperate(
    const uint8_t & _arg)
  {
    this->motor_temperate = _arg;
    return *this;
  }
  Type & set__motor_status(
    const uint8_t & _arg)
  {
    this->motor_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rov_interfaces::msg::Thruster_<ContainerAllocator> *;
  using ConstRawPtr =
    const rov_interfaces::msg::Thruster_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::Thruster_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::Thruster_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rov_interfaces__msg__Thruster
    std::shared_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rov_interfaces__msg__Thruster
    std::shared_ptr<rov_interfaces::msg::Thruster_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Thruster_ & other) const
  {
    if (this->speed_rpm != other.speed_rpm) {
      return false;
    }
    if (this->given_voltage != other.given_voltage) {
      return false;
    }
    if (this->given_current != other.given_current) {
      return false;
    }
    if (this->controller_temperate != other.controller_temperate) {
      return false;
    }
    if (this->motor_temperate != other.motor_temperate) {
      return false;
    }
    if (this->motor_status != other.motor_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Thruster_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Thruster_

// alias to use template instance with default allocator
using Thruster =
  rov_interfaces::msg::Thruster_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTER__STRUCT_HPP_
