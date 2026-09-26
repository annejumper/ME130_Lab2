// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from me130_interfaces:msg/PendulumAngle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "me130_interfaces/msg/detail/pendulum_angle__functions.h"
#include "me130_interfaces/msg/detail/pendulum_angle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace me130_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PendulumAngle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) me130_interfaces::msg::PendulumAngle(_init);
}

void PendulumAngle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<me130_interfaces::msg::PendulumAngle *>(message_memory);
  typed_message->~PendulumAngle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PendulumAngle_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(me130_interfaces::msg::PendulumAngle, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_rad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(me130_interfaces::msg::PendulumAngle, theta_rad),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_dot_rad_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(me130_interfaces::msg::PendulumAngle, theta_dot_rad_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PendulumAngle_message_members = {
  "me130_interfaces::msg",  // message namespace
  "PendulumAngle",  // message name
  3,  // number of fields
  sizeof(me130_interfaces::msg::PendulumAngle),
  false,  // has_any_key_member_
  PendulumAngle_message_member_array,  // message members
  PendulumAngle_init_function,  // function to initialize message memory (memory has to be allocated)
  PendulumAngle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PendulumAngle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PendulumAngle_message_members,
  get_message_typesupport_handle_function,
  &me130_interfaces__msg__PendulumAngle__get_type_hash,
  &me130_interfaces__msg__PendulumAngle__get_type_description,
  &me130_interfaces__msg__PendulumAngle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace me130_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<me130_interfaces::msg::PendulumAngle>()
{
  return &::me130_interfaces::msg::rosidl_typesupport_introspection_cpp::PendulumAngle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, me130_interfaces, msg, PendulumAngle)() {
  return &::me130_interfaces::msg::rosidl_typesupport_introspection_cpp::PendulumAngle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
