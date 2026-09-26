// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from me130_interfaces:msg/PendulumAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/pendulum_angle.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__STRUCT_HPP_
#define ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__me130_interfaces__msg__PendulumAngle __attribute__((deprecated))
#else
# define DEPRECATED__me130_interfaces__msg__PendulumAngle __declspec(deprecated)
#endif

namespace me130_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PendulumAngle_
{
  using Type = PendulumAngle_<ContainerAllocator>;

  explicit PendulumAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta_rad = 0.0;
      this->theta_dot_rad_s = 0.0;
    }
  }

  explicit PendulumAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta_rad = 0.0;
      this->theta_dot_rad_s = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _theta_rad_type =
    double;
  _theta_rad_type theta_rad;
  using _theta_dot_rad_s_type =
    double;
  _theta_dot_rad_s_type theta_dot_rad_s;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__theta_rad(
    const double & _arg)
  {
    this->theta_rad = _arg;
    return *this;
  }
  Type & set__theta_dot_rad_s(
    const double & _arg)
  {
    this->theta_dot_rad_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    me130_interfaces::msg::PendulumAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const me130_interfaces::msg::PendulumAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      me130_interfaces::msg::PendulumAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      me130_interfaces::msg::PendulumAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__me130_interfaces__msg__PendulumAngle
    std::shared_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__me130_interfaces__msg__PendulumAngle
    std::shared_ptr<me130_interfaces::msg::PendulumAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PendulumAngle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->theta_rad != other.theta_rad) {
      return false;
    }
    if (this->theta_dot_rad_s != other.theta_dot_rad_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const PendulumAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PendulumAngle_

// alias to use template instance with default allocator
using PendulumAngle =
  me130_interfaces::msg::PendulumAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace me130_interfaces

#endif  // ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__STRUCT_HPP_
