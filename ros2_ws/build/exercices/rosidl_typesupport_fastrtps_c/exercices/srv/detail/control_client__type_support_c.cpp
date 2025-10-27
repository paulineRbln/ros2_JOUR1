// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice
#include "exercices/srv/detail/control_client__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "exercices/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "exercices/srv/detail/control_client__struct.h"
#include "exercices/srv/detail/control_client__functions.h"
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

#include "rosidl_runtime_c/string.h"  // bon_ordi, ordi_serveur
#include "rosidl_runtime_c/string_functions.h"  // bon_ordi, ordi_serveur

// forward declare type support functions


using _ControlClient_Request__ros_msg_type = exercices__srv__ControlClient_Request;

static bool _ControlClient_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlClient_Request__ros_msg_type * ros_message = static_cast<const _ControlClient_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bon_ordi
  {
    const rosidl_runtime_c__String * str = &ros_message->bon_ordi;
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

  // Field name: ordi_serveur
  {
    const rosidl_runtime_c__String * str = &ros_message->ordi_serveur;
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

  // Field name: bon_domain
  {
    cdr << ros_message->bon_domain;
  }

  // Field name: domain_serveur
  {
    cdr << ros_message->domain_serveur;
  }

  return true;
}

static bool _ControlClient_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlClient_Request__ros_msg_type * ros_message = static_cast<_ControlClient_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bon_ordi
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bon_ordi.data) {
      rosidl_runtime_c__String__init(&ros_message->bon_ordi);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bon_ordi,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bon_ordi'\n");
      return false;
    }
  }

  // Field name: ordi_serveur
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ordi_serveur.data) {
      rosidl_runtime_c__String__init(&ros_message->ordi_serveur);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ordi_serveur,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ordi_serveur'\n");
      return false;
    }
  }

  // Field name: bon_domain
  {
    cdr >> ros_message->bon_domain;
  }

  // Field name: domain_serveur
  {
    cdr >> ros_message->domain_serveur;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exercices
size_t get_serialized_size_exercices__srv__ControlClient_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlClient_Request__ros_msg_type * ros_message = static_cast<const _ControlClient_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bon_ordi
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bon_ordi.size + 1);
  // field.name ordi_serveur
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ordi_serveur.size + 1);
  // field.name bon_domain
  {
    size_t item_size = sizeof(ros_message->bon_domain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name domain_serveur
  {
    size_t item_size = sizeof(ros_message->domain_serveur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlClient_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_exercices__srv__ControlClient_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exercices
size_t max_serialized_size_exercices__srv__ControlClient_Request(
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

  // member: bon_ordi
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
  // member: ordi_serveur
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
  // member: bon_domain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: domain_serveur
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
    using DataType = exercices__srv__ControlClient_Request;
    is_plain =
      (
      offsetof(DataType, domain_serveur) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlClient_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_exercices__srv__ControlClient_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlClient_Request = {
  "exercices::srv",
  "ControlClient_Request",
  _ControlClient_Request__cdr_serialize,
  _ControlClient_Request__cdr_deserialize,
  _ControlClient_Request__get_serialized_size,
  _ControlClient_Request__max_serialized_size
};

static rosidl_message_type_support_t _ControlClient_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlClient_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exercices, srv, ControlClient_Request)() {
  return &_ControlClient_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "exercices/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "exercices/srv/detail/control_client__struct.h"
// already included above
// #include "exercices/srv/detail/control_client__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _ControlClient_Response__ros_msg_type = exercices__srv__ControlClient_Response;

static bool _ControlClient_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlClient_Response__ros_msg_type * ros_message = static_cast<const _ControlClient_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _ControlClient_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlClient_Response__ros_msg_type * ros_message = static_cast<_ControlClient_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exercices
size_t get_serialized_size_exercices__srv__ControlClient_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlClient_Response__ros_msg_type * ros_message = static_cast<const _ControlClient_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlClient_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_exercices__srv__ControlClient_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exercices
size_t max_serialized_size_exercices__srv__ControlClient_Response(
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

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = exercices__srv__ControlClient_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlClient_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_exercices__srv__ControlClient_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlClient_Response = {
  "exercices::srv",
  "ControlClient_Response",
  _ControlClient_Response__cdr_serialize,
  _ControlClient_Response__cdr_deserialize,
  _ControlClient_Response__get_serialized_size,
  _ControlClient_Response__max_serialized_size
};

static rosidl_message_type_support_t _ControlClient_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlClient_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exercices, srv, ControlClient_Response)() {
  return &_ControlClient_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "exercices/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "exercices/srv/control_client.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ControlClient__callbacks = {
  "exercices::srv",
  "ControlClient",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exercices, srv, ControlClient_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exercices, srv, ControlClient_Response)(),
};

static rosidl_service_type_support_t ControlClient__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ControlClient__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exercices, srv, ControlClient)() {
  return &ControlClient__handle;
}

#if defined(__cplusplus)
}
#endif
