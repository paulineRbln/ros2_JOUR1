// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__SRV__DETAIL__CONTROL_CLIENT__FUNCTIONS_H_
#define EXERCICES__SRV__DETAIL__CONTROL_CLIENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "exercices/msg/rosidl_generator_c__visibility_control.h"

#include "exercices/srv/detail/control_client__struct.h"

/// Initialize srv/ControlClient message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * exercices__srv__ControlClient_Request
 * )) before or use
 * exercices__srv__ControlClient_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Request__init(exercices__srv__ControlClient_Request * msg);

/// Finalize srv/ControlClient message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Request__fini(exercices__srv__ControlClient_Request * msg);

/// Create srv/ControlClient message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * exercices__srv__ControlClient_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
exercices__srv__ControlClient_Request *
exercices__srv__ControlClient_Request__create();

/// Destroy srv/ControlClient message.
/**
 * It calls
 * exercices__srv__ControlClient_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Request__destroy(exercices__srv__ControlClient_Request * msg);

/// Check for srv/ControlClient message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Request__are_equal(const exercices__srv__ControlClient_Request * lhs, const exercices__srv__ControlClient_Request * rhs);

/// Copy a srv/ControlClient message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Request__copy(
  const exercices__srv__ControlClient_Request * input,
  exercices__srv__ControlClient_Request * output);

/// Initialize array of srv/ControlClient messages.
/**
 * It allocates the memory for the number of elements and calls
 * exercices__srv__ControlClient_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Request__Sequence__init(exercices__srv__ControlClient_Request__Sequence * array, size_t size);

/// Finalize array of srv/ControlClient messages.
/**
 * It calls
 * exercices__srv__ControlClient_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Request__Sequence__fini(exercices__srv__ControlClient_Request__Sequence * array);

/// Create array of srv/ControlClient messages.
/**
 * It allocates the memory for the array and calls
 * exercices__srv__ControlClient_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
exercices__srv__ControlClient_Request__Sequence *
exercices__srv__ControlClient_Request__Sequence__create(size_t size);

/// Destroy array of srv/ControlClient messages.
/**
 * It calls
 * exercices__srv__ControlClient_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Request__Sequence__destroy(exercices__srv__ControlClient_Request__Sequence * array);

/// Check for srv/ControlClient message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Request__Sequence__are_equal(const exercices__srv__ControlClient_Request__Sequence * lhs, const exercices__srv__ControlClient_Request__Sequence * rhs);

/// Copy an array of srv/ControlClient messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Request__Sequence__copy(
  const exercices__srv__ControlClient_Request__Sequence * input,
  exercices__srv__ControlClient_Request__Sequence * output);

/// Initialize srv/ControlClient message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * exercices__srv__ControlClient_Response
 * )) before or use
 * exercices__srv__ControlClient_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Response__init(exercices__srv__ControlClient_Response * msg);

/// Finalize srv/ControlClient message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Response__fini(exercices__srv__ControlClient_Response * msg);

/// Create srv/ControlClient message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * exercices__srv__ControlClient_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
exercices__srv__ControlClient_Response *
exercices__srv__ControlClient_Response__create();

/// Destroy srv/ControlClient message.
/**
 * It calls
 * exercices__srv__ControlClient_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Response__destroy(exercices__srv__ControlClient_Response * msg);

/// Check for srv/ControlClient message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Response__are_equal(const exercices__srv__ControlClient_Response * lhs, const exercices__srv__ControlClient_Response * rhs);

/// Copy a srv/ControlClient message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Response__copy(
  const exercices__srv__ControlClient_Response * input,
  exercices__srv__ControlClient_Response * output);

/// Initialize array of srv/ControlClient messages.
/**
 * It allocates the memory for the number of elements and calls
 * exercices__srv__ControlClient_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Response__Sequence__init(exercices__srv__ControlClient_Response__Sequence * array, size_t size);

/// Finalize array of srv/ControlClient messages.
/**
 * It calls
 * exercices__srv__ControlClient_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Response__Sequence__fini(exercices__srv__ControlClient_Response__Sequence * array);

/// Create array of srv/ControlClient messages.
/**
 * It allocates the memory for the array and calls
 * exercices__srv__ControlClient_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
exercices__srv__ControlClient_Response__Sequence *
exercices__srv__ControlClient_Response__Sequence__create(size_t size);

/// Destroy array of srv/ControlClient messages.
/**
 * It calls
 * exercices__srv__ControlClient_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
void
exercices__srv__ControlClient_Response__Sequence__destroy(exercices__srv__ControlClient_Response__Sequence * array);

/// Check for srv/ControlClient message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Response__Sequence__are_equal(const exercices__srv__ControlClient_Response__Sequence * lhs, const exercices__srv__ControlClient_Response__Sequence * rhs);

/// Copy an array of srv/ControlClient messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_exercices
bool
exercices__srv__ControlClient_Response__Sequence__copy(
  const exercices__srv__ControlClient_Response__Sequence * input,
  exercices__srv__ControlClient_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EXERCICES__SRV__DETAIL__CONTROL_CLIENT__FUNCTIONS_H_
