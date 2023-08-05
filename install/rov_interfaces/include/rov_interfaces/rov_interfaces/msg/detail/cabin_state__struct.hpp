// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rov_interfaces:msg/CabinState.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__STRUCT_HPP_
#define ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rov_interfaces__msg__CabinState __attribute__((deprecated))
#else
# define DEPRECATED__rov_interfaces__msg__CabinState __declspec(deprecated)
#endif

namespace rov_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CabinState_
{
  using Type = CabinState_<ContainerAllocator>;

  explicit CabinState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cabin_temperature = 0.0f;
      this->cabin_humidity = 0.0f;
      this->cabin_water_level = 0.0f;
      this->cpu_temperature = 0.0f;
    }
  }

  explicit CabinState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cabin_temperature = 0.0f;
      this->cabin_humidity = 0.0f;
      this->cabin_water_level = 0.0f;
      this->cpu_temperature = 0.0f;
    }
  }

  // field types and members
  using _cabin_temperature_type =
    float;
  _cabin_temperature_type cabin_temperature;
  using _cabin_humidity_type =
    float;
  _cabin_humidity_type cabin_humidity;
  using _cabin_water_level_type =
    float;
  _cabin_water_level_type cabin_water_level;
  using _cpu_temperature_type =
    float;
  _cpu_temperature_type cpu_temperature;

  // setters for named parameter idiom
  Type & set__cabin_temperature(
    const float & _arg)
  {
    this->cabin_temperature = _arg;
    return *this;
  }
  Type & set__cabin_humidity(
    const float & _arg)
  {
    this->cabin_humidity = _arg;
    return *this;
  }
  Type & set__cabin_water_level(
    const float & _arg)
  {
    this->cabin_water_level = _arg;
    return *this;
  }
  Type & set__cpu_temperature(
    const float & _arg)
  {
    this->cpu_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rov_interfaces::msg::CabinState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rov_interfaces::msg::CabinState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::CabinState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::CabinState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rov_interfaces__msg__CabinState
    std::shared_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rov_interfaces__msg__CabinState
    std::shared_ptr<rov_interfaces::msg::CabinState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CabinState_ & other) const
  {
    if (this->cabin_temperature != other.cabin_temperature) {
      return false;
    }
    if (this->cabin_humidity != other.cabin_humidity) {
      return false;
    }
    if (this->cabin_water_level != other.cabin_water_level) {
      return false;
    }
    if (this->cpu_temperature != other.cpu_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const CabinState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CabinState_

// alias to use template instance with default allocator
using CabinState =
  rov_interfaces::msg::CabinState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__STRUCT_HPP_
