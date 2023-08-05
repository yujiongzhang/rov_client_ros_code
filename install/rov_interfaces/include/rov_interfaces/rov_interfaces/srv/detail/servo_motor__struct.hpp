// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rov_interfaces:srv/ServoMotor.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__STRUCT_HPP_
#define ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rov_interfaces__srv__ServoMotor_Request __attribute__((deprecated))
#else
# define DEPRECATED__rov_interfaces__srv__ServoMotor_Request __declspec(deprecated)
#endif

namespace rov_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoMotor_Request_
{
  using Type = ServoMotor_Request_<ContainerAllocator>;

  explicit ServoMotor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0;
    }
  }

  explicit ServoMotor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0;
    }
  }

  // field types and members
  using _angle_type =
    int8_t;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const int8_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rov_interfaces__srv__ServoMotor_Request
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rov_interfaces__srv__ServoMotor_Request
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoMotor_Request_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoMotor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoMotor_Request_

// alias to use template instance with default allocator
using ServoMotor_Request =
  rov_interfaces::srv::ServoMotor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rov_interfaces


#ifndef _WIN32
# define DEPRECATED__rov_interfaces__srv__ServoMotor_Response __attribute__((deprecated))
#else
# define DEPRECATED__rov_interfaces__srv__ServoMotor_Response __declspec(deprecated)
#endif

namespace rov_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoMotor_Response_
{
  using Type = ServoMotor_Response_<ContainerAllocator>;

  explicit ServoMotor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit ServoMotor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rov_interfaces__srv__ServoMotor_Response
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rov_interfaces__srv__ServoMotor_Response
    std::shared_ptr<rov_interfaces::srv::ServoMotor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoMotor_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoMotor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoMotor_Response_

// alias to use template instance with default allocator
using ServoMotor_Response =
  rov_interfaces::srv::ServoMotor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rov_interfaces

namespace rov_interfaces
{

namespace srv
{

struct ServoMotor
{
  using Request = rov_interfaces::srv::ServoMotor_Request;
  using Response = rov_interfaces::srv::ServoMotor_Response;
};

}  // namespace srv

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__STRUCT_HPP_
