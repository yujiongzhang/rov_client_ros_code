// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
#define ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rov_interfaces__msg__MotorControl __attribute__((deprecated))
#else
# define DEPRECATED__rov_interfaces__msg__MotorControl __declspec(deprecated)
#endif

namespace rov_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorControl_
{
  using Type = MotorControl_<ContainerAllocator>;

  explicit MotorControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 6>::iterator, int16_t>(this->thruster_speed.begin(), this->thruster_speed.end(), 0);
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->track_speed.begin(), this->track_speed.end(), 0);
    }
  }

  explicit MotorControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thruster_speed(_alloc),
    track_speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 6>::iterator, int16_t>(this->thruster_speed.begin(), this->thruster_speed.end(), 0);
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->track_speed.begin(), this->track_speed.end(), 0);
    }
  }

  // field types and members
  using _thruster_speed_type =
    std::array<int16_t, 6>;
  _thruster_speed_type thruster_speed;
  using _track_speed_type =
    std::array<int16_t, 2>;
  _track_speed_type track_speed;

  // setters for named parameter idiom
  Type & set__thruster_speed(
    const std::array<int16_t, 6> & _arg)
  {
    this->thruster_speed = _arg;
    return *this;
  }
  Type & set__track_speed(
    const std::array<int16_t, 2> & _arg)
  {
    this->track_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rov_interfaces::msg::MotorControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const rov_interfaces::msg::MotorControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::MotorControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::MotorControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rov_interfaces__msg__MotorControl
    std::shared_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rov_interfaces__msg__MotorControl
    std::shared_ptr<rov_interfaces::msg::MotorControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorControl_ & other) const
  {
    if (this->thruster_speed != other.thruster_speed) {
      return false;
    }
    if (this->track_speed != other.track_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorControl_

// alias to use template instance with default allocator
using MotorControl =
  rov_interfaces::msg::MotorControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
