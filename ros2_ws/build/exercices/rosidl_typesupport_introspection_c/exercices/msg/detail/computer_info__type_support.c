// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from exercices:msg/ComputerInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "exercices/msg/detail/computer_info__rosidl_typesupport_introspection_c.h"
#include "exercices/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "exercices/msg/detail/computer_info__functions.h"
#include "exercices/msg/detail/computer_info__struct.h"


// Include directives for member types
// Member `computer_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  exercices__msg__ComputerInfo__init(message_memory);
}

void exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_fini_function(void * message_memory)
{
  exercices__msg__ComputerInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_member_array[3] = {
  {
    "computer_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__msg__ComputerInfo, computer_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "domain_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__msg__ComputerInfo, domain_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__msg__ComputerInfo, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_members = {
  "exercices__msg",  // message namespace
  "ComputerInfo",  // message name
  3,  // number of fields
  sizeof(exercices__msg__ComputerInfo),
  exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_member_array,  // message members
  exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_type_support_handle = {
  0,
  &exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_exercices
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, msg, ComputerInfo)() {
  if (!exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_type_support_handle.typesupport_identifier) {
    exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &exercices__msg__ComputerInfo__rosidl_typesupport_introspection_c__ComputerInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
