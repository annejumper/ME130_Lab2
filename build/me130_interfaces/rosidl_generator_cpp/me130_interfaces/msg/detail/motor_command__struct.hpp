// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from me130_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/motor_command.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__me130_interfaces__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__me130_interfaces__msg__MotorCommand __declspec(deprecated)
#endif

namespace me130_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
      this->mode = "";
      this->freq_hz = 0.0;
      this->amplitude = 0.0;
      this->step_duty = 0.0;
      this->segment = 0l;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
      this->mode = "";
      this->freq_hz = 0.0;
      this->amplitude = 0.0;
      this->step_duty = 0.0;
      this->segment = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _u_type =
    double;
  _u_type u;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _freq_hz_type =
    double;
  _freq_hz_type freq_hz;
  using _amplitude_type =
    double;
  _amplitude_type amplitude;
  using _step_duty_type =
    double;
  _step_duty_type step_duty;
  using _segment_type =
    int32_t;
  _segment_type segment;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__u(
    const double & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__freq_hz(
    const double & _arg)
  {
    this->freq_hz = _arg;
    return *this;
  }
  Type & set__amplitude(
    const double & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }
  Type & set__step_duty(
    const double & _arg)
  {
    this->step_duty = _arg;
    return *this;
  }
  Type & set__segment(
    const int32_t & _arg)
  {
    this->segment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    me130_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const me130_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      me130_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      me130_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__me130_interfaces__msg__MotorCommand
    std::shared_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__me130_interfaces__msg__MotorCommand
    std::shared_ptr<me130_interfaces::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->freq_hz != other.freq_hz) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    if (this->step_duty != other.step_duty) {
      return false;
    }
    if (this->segment != other.segment) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  me130_interfaces::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace me130_interfaces

#endif  // ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
