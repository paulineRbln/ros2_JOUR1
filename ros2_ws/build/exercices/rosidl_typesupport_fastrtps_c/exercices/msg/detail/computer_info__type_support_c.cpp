// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from exercices:msg/ComputerInfo.idl
// generated code does not contain a copyright notice
#include "exercices/msg/detail/computer_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "exercices/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "exercices/msg/detail/computer_info__struct.h"
#include "exercices/msg/detail/computer_info__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // computer_name
#include "rosidl_runtime_c/string_functions.h"  // computer_name

// forward declare type support functions


using _ComputerInfo__ros_msg_type = exercices__msg__ComputerInfo;

static bool _ComputerInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputerInfo__ros_msg_type * ros_message = static_cast<const _ComputerInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: computer_name
  {
    const rosidl_runtime_c__String * str = &ros_message->computer_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: domain_id
  {
    cdr << ros_message->domain_id;
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  return true;
}

static bool _ComputerInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputerInfo__ros_msg_type * ros_message = static_cast<_ComputerInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: computer_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->computer_name.data) {
      rosidl_runtime_c__String__init(&ros_message->computer_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->computer_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'computer_name'\n");
      return false;
    }
  }

  // Field name: domain_id
  {
    cdr >> ros_message->domain_id;
  }

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exercices
size_t get_serialized_size_exercices__msg__ComputerInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputerInfo__ros_msg_type * ros_message = static_cast<const _ComputerInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name computer_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->computer_name.size + 1);
  // field.name domain_id
  {
    size_t item_size = sizeof(ros_message->domain_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputerInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_exercices__msg__ComputerInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exercices
size_t max_serialized_size_exercices__msg__ComputerInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: computer_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: domain_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = exercices__msg__ComputerInfo;
    is_plain =
      (
      offsetof(DataType, counter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ComputerInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_exercices__msg__ComputerInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ComputerInfo = {
  "exercices::msg",
  "ComputerInfo",
  _ComputerInfo__cdr_serialize,
  _ComputerInfo__cdr_deserialize,
  _ComputerInfo__get_serialized_size,
  _ComputerInfo__max_serialized_size
};

static rosidl_message_type_support_t _ComputerInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputerInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exercices, msg, ComputerInfo)() {
  return &_ComputerInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
