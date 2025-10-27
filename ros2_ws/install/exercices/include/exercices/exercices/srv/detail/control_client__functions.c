// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice
#include "exercices/srv/detail/control_client__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `bon_ordi`
// Member `ordi_serveur`
#include "rosidl_runtime_c/string_functions.h"

bool
exercices__srv__ControlClient_Request__init(exercices__srv__ControlClient_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bon_ordi
  if (!rosidl_runtime_c__String__init(&msg->bon_ordi)) {
    exercices__srv__ControlClient_Request__fini(msg);
    return false;
  }
  // ordi_serveur
  if (!rosidl_runtime_c__String__init(&msg->ordi_serveur)) {
    exercices__srv__ControlClient_Request__fini(msg);
    return false;
  }
  // bon_domain
  // domain_serveur
  return true;
}

void
exercices__srv__ControlClient_Request__fini(exercices__srv__ControlClient_Request * msg)
{
  if (!msg) {
    return;
  }
  // bon_ordi
  rosidl_runtime_c__String__fini(&msg->bon_ordi);
  // ordi_serveur
  rosidl_runtime_c__String__fini(&msg->ordi_serveur);
  // bon_domain
  // domain_serveur
}

bool
exercices__srv__ControlClient_Request__are_equal(const exercices__srv__ControlClient_Request * lhs, const exercices__srv__ControlClient_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bon_ordi
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bon_ordi), &(rhs->bon_ordi)))
  {
    return false;
  }
  // ordi_serveur
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ordi_serveur), &(rhs->ordi_serveur)))
  {
    return false;
  }
  // bon_domain
  if (lhs->bon_domain != rhs->bon_domain) {
    return false;
  }
  // domain_serveur
  if (lhs->domain_serveur != rhs->domain_serveur) {
    return false;
  }
  return true;
}

bool
exercices__srv__ControlClient_Request__copy(
  const exercices__srv__ControlClient_Request * input,
  exercices__srv__ControlClient_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // bon_ordi
  if (!rosidl_runtime_c__String__copy(
      &(input->bon_ordi), &(output->bon_ordi)))
  {
    return false;
  }
  // ordi_serveur
  if (!rosidl_runtime_c__String__copy(
      &(input->ordi_serveur), &(output->ordi_serveur)))
  {
    return false;
  }
  // bon_domain
  output->bon_domain = input->bon_domain;
  // domain_serveur
  output->domain_serveur = input->domain_serveur;
  return true;
}

exercices__srv__ControlClient_Request *
exercices__srv__ControlClient_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exercices__srv__ControlClient_Request * msg = (exercices__srv__ControlClient_Request *)allocator.allocate(sizeof(exercices__srv__ControlClient_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(exercices__srv__ControlClient_Request));
  bool success = exercices__srv__ControlClient_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
exercices__srv__ControlClient_Request__destroy(exercices__srv__ControlClient_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    exercices__srv__ControlClient_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
exercices__srv__ControlClient_Request__Sequence__init(exercices__srv__ControlClient_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exercices__srv__ControlClient_Request * data = NULL;

  if (size) {
    data = (exercices__srv__ControlClient_Request *)allocator.zero_allocate(size, sizeof(exercices__srv__ControlClient_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = exercices__srv__ControlClient_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        exercices__srv__ControlClient_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
exercices__srv__ControlClient_Request__Sequence__fini(exercices__srv__ControlClient_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      exercices__srv__ControlClient_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

exercices__srv__ControlClient_Request__Sequence *
exercices__srv__ControlClient_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exercices__srv__ControlClient_Request__Sequence * array = (exercices__srv__ControlClient_Request__Sequence *)allocator.allocate(sizeof(exercices__srv__ControlClient_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = exercices__srv__ControlClient_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
exercices__srv__ControlClient_Request__Sequence__destroy(exercices__srv__ControlClient_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    exercices__srv__ControlClient_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
exercices__srv__ControlClient_Request__Sequence__are_equal(const exercices__srv__ControlClient_Request__Sequence * lhs, const exercices__srv__ControlClient_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!exercices__srv__ControlClient_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
exercices__srv__ControlClient_Request__Sequence__copy(
  const exercices__srv__ControlClient_Request__Sequence * input,
  exercices__srv__ControlClient_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(exercices__srv__ControlClient_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    exercices__srv__ControlClient_Request * data =
      (exercices__srv__ControlClient_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!exercices__srv__ControlClient_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          exercices__srv__ControlClient_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!exercices__srv__ControlClient_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
exercices__srv__ControlClient_Response__init(exercices__srv__ControlClient_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
exercices__srv__ControlClient_Response__fini(exercices__srv__ControlClient_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
exercices__srv__ControlClient_Response__are_equal(const exercices__srv__ControlClient_Response * lhs, const exercices__srv__ControlClient_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
exercices__srv__ControlClient_Response__copy(
  const exercices__srv__ControlClient_Response * input,
  exercices__srv__ControlClient_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

exercices__srv__ControlClient_Response *
exercices__srv__ControlClient_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exercices__srv__ControlClient_Response * msg = (exercices__srv__ControlClient_Response *)allocator.allocate(sizeof(exercices__srv__ControlClient_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(exercices__srv__ControlClient_Response));
  bool success = exercices__srv__ControlClient_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
exercices__srv__ControlClient_Response__destroy(exercices__srv__ControlClient_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    exercices__srv__ControlClient_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
exercices__srv__ControlClient_Response__Sequence__init(exercices__srv__ControlClient_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exercices__srv__ControlClient_Response * data = NULL;

  if (size) {
    data = (exercices__srv__ControlClient_Response *)allocator.zero_allocate(size, sizeof(exercices__srv__ControlClient_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = exercices__srv__ControlClient_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        exercices__srv__ControlClient_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
exercices__srv__ControlClient_Response__Sequence__fini(exercices__srv__ControlClient_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      exercices__srv__ControlClient_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

exercices__srv__ControlClient_Response__Sequence *
exercices__srv__ControlClient_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exercices__srv__ControlClient_Response__Sequence * array = (exercices__srv__ControlClient_Response__Sequence *)allocator.allocate(sizeof(exercices__srv__ControlClient_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = exercices__srv__ControlClient_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
exercices__srv__ControlClient_Response__Sequence__destroy(exercices__srv__ControlClient_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    exercices__srv__ControlClient_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
exercices__srv__ControlClient_Response__Sequence__are_equal(const exercices__srv__ControlClient_Response__Sequence * lhs, const exercices__srv__ControlClient_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!exercices__srv__ControlClient_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
exercices__srv__ControlClient_Response__Sequence__copy(
  const exercices__srv__ControlClient_Response__Sequence * input,
  exercices__srv__ControlClient_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(exercices__srv__ControlClient_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    exercices__srv__ControlClient_Response * data =
      (exercices__srv__ControlClient_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!exercices__srv__ControlClient_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          exercices__srv__ControlClient_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!exercices__srv__ControlClient_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
