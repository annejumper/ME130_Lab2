// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from me130_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/encoder_state.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_HPP_
#define ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_HPP_

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
# define DEPRECATED__me130_interfaces__msg__EncoderState __attribute__((deprecated))
#else
# define DEPRECATED__me130_interfaces__msg__EncoderState __declspec(deprecated)
#endif

namespace me130_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderState_
{
  using Type = EncoderState_<ContainerAllocator>;

  explicit EncoderState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counts = 0ll;
      this->counts_per_sec = 0.0;
    }
  }

  explicit EncoderState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counts = 0ll;
      this->counts_per_sec = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _counts_type =
    int64_t;
  _counts_type counts;
  using _counts_per_sec_type =
    double;
  _counts_per_sec_type counts_per_sec;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__counts(
    const int64_t & _arg)
  {
    this->counts = _arg;
    return *this;
  }
  Type & set__counts_per_sec(
    const double & _arg)
  {
    this->counts_per_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    me130_interfaces::msg::EncoderState_<ContainerAllocator> *;
  using ConstRawPtr =
    const me130_interfaces::msg::EncoderState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      me130_interfaces::msg::EncoderState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      me130_interfaces::msg::EncoderState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__me130_interfaces__msg__EncoderState
    std::shared_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__me130_interfaces__msg__EncoderState
    std::shared_ptr<me130_interfaces::msg::EncoderState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->counts != other.counts) {
      return false;
    }
    if (this->counts_per_sec != other.counts_per_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderState_

// alias to use template instance with default allocator
using EncoderState =
  me130_interfaces::msg::EncoderState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace me130_interfaces

#endif  // ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_HPP_
