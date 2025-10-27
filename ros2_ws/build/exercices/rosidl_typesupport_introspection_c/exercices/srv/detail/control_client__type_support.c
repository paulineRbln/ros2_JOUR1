// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "exercices/srv/detail/control_client__rosidl_typesupport_introspection_c.h"
#include "exercices/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "exercices/srv/detail/control_client__functions.h"
#include "exercices/srv/detail/control_client__struct.h"


// Include directives for member types
// Member `bon_ordi`
// Member `ordi_serveur`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  exercices__srv__ControlClient_Request__init(message_memory);
}

void exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_fini_function(void * message_memory)
{
  exercices__srv__ControlClient_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_member_array[4] = {
  {
    "bon_ordi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__srv__ControlClient_Request, bon_ordi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ordi_serveur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__srv__ControlClient_Request, ordi_serveur),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bon_domain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__srv__ControlClient_Request, bon_domain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "domain_serveur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__srv__ControlClient_Request, domain_serveur),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_members = {
  "exercices__srv",  // message namespace
  "ControlClient_Request",  // message name
  4,  // number of fields
  sizeof(exercices__srv__ControlClient_Request),
  exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_member_array,  // message members
  exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_type_support_handle = {
  0,
  &exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_exercices
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient_Request)() {
  if (!exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_type_support_handle.typesupport_identifier) {
    exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &exercices__srv__ControlClient_Request__rosidl_typesupport_introspection_c__ControlClient_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "exercices/srv/detail/control_client__rosidl_typesupport_introspection_c.h"
// already included above
// #include "exercices/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "exercices/srv/detail/control_client__functions.h"
// already included above
// #include "exercices/srv/detail/control_client__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  exercices__srv__ControlClient_Response__init(message_memory);
}

void exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_fini_function(void * message_memory)
{
  exercices__srv__ControlClient_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exercices__srv__ControlClient_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_members = {
  "exercices__srv",  // message namespace
  "ControlClient_Response",  // message name
  1,  // number of fields
  sizeof(exercices__srv__ControlClient_Response),
  exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_member_array,  // message members
  exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_type_support_handle = {
  0,
  &exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_exercices
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient_Response)() {
  if (!exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_type_support_handle.typesupport_identifier) {
    exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &exercices__srv__ControlClient_Response__rosidl_typesupport_introspection_c__ControlClient_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "exercices/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "exercices/srv/detail/control_client__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_members = {
  "exercices__srv",  // service namespace
  "ControlClient",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_Request_message_type_support_handle,
  NULL  // response message
  // exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_Response_message_type_support_handle
};

static rosidl_service_type_support_t exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_type_support_handle = {
  0,
  &exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_exercices
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient)() {
  if (!exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_type_support_handle.typesupport_identifier) {
    exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exercices, srv, ControlClient_Response)()->data;
  }

  return &exercices__srv__detail__control_client__rosidl_typesupport_introspection_c__ControlClient_service_type_support_handle;
}
