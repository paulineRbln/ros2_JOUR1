// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from exercices:msg/ComputerInfo.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__MSG__DETAIL__COMPUTER_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EXERCICES__MSG__DETAIL__COMPUTER_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "exercices/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "exercices/msg/detail/computer_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace exercices
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exercices
cdr_serialize(
  const exercices::msg::ComputerInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exercices
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  exercices::msg::ComputerInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exercices
get_serialized_size(
  const exercices::msg::ComputerInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exercices
max_serialized_size_ComputerInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace exercices

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exercices
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, exercices, msg, ComputerInfo)();

#ifdef __cplusplus
}
#endif

#endif  // EXERCICES__MSG__DETAIL__COMPUTER_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
