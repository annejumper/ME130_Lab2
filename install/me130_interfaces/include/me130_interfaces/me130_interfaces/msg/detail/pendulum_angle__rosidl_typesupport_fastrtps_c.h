// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from me130_interfaces:msg/PendulumAngle.idl
// generated code does not contain a copyright notice
#ifndef ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "me130_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "me130_interfaces/msg/detail/pendulum_angle__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
bool cdr_serialize_me130_interfaces__msg__PendulumAngle(
  const me130_interfaces__msg__PendulumAngle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
bool cdr_deserialize_me130_interfaces__msg__PendulumAngle(
  eprosima::fastcdr::Cdr &,
  me130_interfaces__msg__PendulumAngle * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
size_t get_serialized_size_me130_interfaces__msg__PendulumAngle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
size_t max_serialized_size_me130_interfaces__msg__PendulumAngle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
bool cdr_serialize_key_me130_interfaces__msg__PendulumAngle(
  const me130_interfaces__msg__PendulumAngle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
size_t get_serialized_size_key_me130_interfaces__msg__PendulumAngle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
size_t max_serialized_size_key_me130_interfaces__msg__PendulumAngle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_me130_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, me130_interfaces, msg, PendulumAngle)();

#ifdef __cplusplus
}
#endif

#endif  // ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
