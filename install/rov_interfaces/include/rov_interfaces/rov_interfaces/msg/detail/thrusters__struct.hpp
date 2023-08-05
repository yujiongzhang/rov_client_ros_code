// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rov_interfaces:msg/Thrusters.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTERS__STRUCT_HPP_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'upper_left'
// Member 'upper_right'
// Member 'lower_right'
// Member 'lower_left'
// Member 'left'
// Member 'right'
#include "rov_interfaces/msg/detail/thruster__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rov_interfaces__msg__Thrusters __attribute__((deprecated))
#else
# define DEPRECATED__rov_interfaces__msg__Thrusters __declspec(deprecated)
#endif

namespace rov_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Thrusters_
{
  using Type = Thrusters_<ContainerAllocator>;

  explicit Thrusters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : upper_left(_init),
    upper_right(_init),
    lower_right(_init),
    lower_left(_init),
    left(_init),
    right(_init)
  {
    (void)_init;
  }

  explicit Thrusters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : upper_left(_alloc, _init),
    upper_right(_alloc, _init),
    lower_right(_alloc, _init),
    lower_left(_alloc, _init),
    left(_alloc, _init),
    right(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _upper_left_type =
    rov_interfaces::msg::Thruster_<ContainerAllocator>;
  _upper_left_type upper_left;
  using _upper_right_type =
    rov_interfaces::msg::Thruster_<ContainerAllocator>;
  _upper_right_type upper_right;
  using _lower_right_type =
    rov_interfaces::msg::Thruster_<ContainerAllocator>;
  _lower_right_type lower_right;
  using _lower_left_type =
    rov_interfaces::msg::Thruster_<ContainerAllocator>;
  _lower_left_type lower_left;
  using _left_type =
    rov_interfaces::msg::Thruster_<ContainerAllocator>;
  _left_type left;
  using _right_type =
    rov_interfaces::msg::Thruster_<ContainerAllocator>;
  _right_type right;

  // setters for named parameter idiom
  Type & set__upper_left(
    const rov_interfaces::msg::Thruster_<ContainerAllocator> & _arg)
  {
    this->upper_left = _arg;
    return *this;
  }
  Type & set__upper_right(
    const rov_interfaces::msg::Thruster_<ContainerAllocator> & _arg)
  {
    this->upper_right = _arg;
    return *this;
  }
  Type & set__lower_right(
    const rov_interfaces::msg::Thruster_<ContainerAllocator> & _arg)
  {
    this->lower_right = _arg;
    return *this;
  }
  Type & set__lower_left(
    const rov_interfaces::msg::Thruster_<ContainerAllocator> & _arg)
  {
    this->lower_left = _arg;
    return *this;
  }
  Type & set__left(
    const rov_interfaces::msg::Thruster_<ContainerAllocator> & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const rov_interfaces::msg::Thruster_<ContainerAllocator> & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rov_interfaces::msg::Thrusters_<ContainerAllocator> *;
  using ConstRawPtr =
    const rov_interfaces::msg::Thrusters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::Thrusters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::msg::Thrusters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rov_interfaces__msg__Thrusters
    std::shared_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rov_interfaces__msg__Thrusters
    std::shared_ptr<rov_interfaces::msg::Thrusters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Thrusters_ & other) const
  {
    if (this->upper_left != other.upper_left) {
      return false;
    }
    if (this->upper_right != other.upper_right) {
      return false;
    }
    if (this->lower_right != other.lower_right) {
      return false;
    }
    if (this->lower_left != other.lower_left) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Thrusters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Thrusters_

// alias to use template instance with default allocator
using Thrusters =
  rov_interfaces::msg::Thrusters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTERS__STRUCT_HPP_
