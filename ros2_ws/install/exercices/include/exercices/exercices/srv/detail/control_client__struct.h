// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__SRV__DETAIL__CONTROL_CLIENT__STRUCT_H_
#define EXERCICES__SRV__DETAIL__CONTROL_CLIENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bon_ordi'
// Member 'ordi_serveur'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlClient in the package exercices.
typedef struct exercices__srv__ControlClient_Request
{
  rosidl_runtime_c__String bon_ordi;
  rosidl_runtime_c__String ordi_serveur;
  int32_t bon_domain;
  int32_t domain_serveur;
} exercices__srv__ControlClient_Request;

// Struct for a sequence of exercices__srv__ControlClient_Request.
typedef struct exercices__srv__ControlClient_Request__Sequence
{
  exercices__srv__ControlClient_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} exercices__srv__ControlClient_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ControlClient in the package exercices.
typedef struct exercices__srv__ControlClient_Response
{
  bool result;
} exercices__srv__ControlClient_Response;

// Struct for a sequence of exercices__srv__ControlClient_Response.
typedef struct exercices__srv__ControlClient_Response__Sequence
{
  exercices__srv__ControlClient_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} exercices__srv__ControlClient_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXERCICES__SRV__DETAIL__CONTROL_CLIENT__STRUCT_H_
