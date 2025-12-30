// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from slambot_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice
#include "slambot_interfaces/srv/detail/interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
slambot_interfaces__srv__Interface_Request__init(slambot_interfaces__srv__Interface_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
slambot_interfaces__srv__Interface_Request__fini(slambot_interfaces__srv__Interface_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
slambot_interfaces__srv__Interface_Request__are_equal(const slambot_interfaces__srv__Interface_Request * lhs, const slambot_interfaces__srv__Interface_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
slambot_interfaces__srv__Interface_Request__copy(
  const slambot_interfaces__srv__Interface_Request * input,
  slambot_interfaces__srv__Interface_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

slambot_interfaces__srv__Interface_Request *
slambot_interfaces__srv__Interface_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Request * msg = (slambot_interfaces__srv__Interface_Request *)allocator.allocate(sizeof(slambot_interfaces__srv__Interface_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(slambot_interfaces__srv__Interface_Request));
  bool success = slambot_interfaces__srv__Interface_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
slambot_interfaces__srv__Interface_Request__destroy(slambot_interfaces__srv__Interface_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    slambot_interfaces__srv__Interface_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
slambot_interfaces__srv__Interface_Request__Sequence__init(slambot_interfaces__srv__Interface_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Request * data = NULL;

  if (size) {
    data = (slambot_interfaces__srv__Interface_Request *)allocator.zero_allocate(size, sizeof(slambot_interfaces__srv__Interface_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = slambot_interfaces__srv__Interface_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        slambot_interfaces__srv__Interface_Request__fini(&data[i - 1]);
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
slambot_interfaces__srv__Interface_Request__Sequence__fini(slambot_interfaces__srv__Interface_Request__Sequence * array)
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
      slambot_interfaces__srv__Interface_Request__fini(&array->data[i]);
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

slambot_interfaces__srv__Interface_Request__Sequence *
slambot_interfaces__srv__Interface_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Request__Sequence * array = (slambot_interfaces__srv__Interface_Request__Sequence *)allocator.allocate(sizeof(slambot_interfaces__srv__Interface_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = slambot_interfaces__srv__Interface_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
slambot_interfaces__srv__Interface_Request__Sequence__destroy(slambot_interfaces__srv__Interface_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    slambot_interfaces__srv__Interface_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
slambot_interfaces__srv__Interface_Request__Sequence__are_equal(const slambot_interfaces__srv__Interface_Request__Sequence * lhs, const slambot_interfaces__srv__Interface_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!slambot_interfaces__srv__Interface_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
slambot_interfaces__srv__Interface_Request__Sequence__copy(
  const slambot_interfaces__srv__Interface_Request__Sequence * input,
  slambot_interfaces__srv__Interface_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(slambot_interfaces__srv__Interface_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    slambot_interfaces__srv__Interface_Request * data =
      (slambot_interfaces__srv__Interface_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!slambot_interfaces__srv__Interface_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          slambot_interfaces__srv__Interface_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!slambot_interfaces__srv__Interface_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
slambot_interfaces__srv__Interface_Response__init(slambot_interfaces__srv__Interface_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
slambot_interfaces__srv__Interface_Response__fini(slambot_interfaces__srv__Interface_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
slambot_interfaces__srv__Interface_Response__are_equal(const slambot_interfaces__srv__Interface_Response * lhs, const slambot_interfaces__srv__Interface_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
slambot_interfaces__srv__Interface_Response__copy(
  const slambot_interfaces__srv__Interface_Response * input,
  slambot_interfaces__srv__Interface_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

slambot_interfaces__srv__Interface_Response *
slambot_interfaces__srv__Interface_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Response * msg = (slambot_interfaces__srv__Interface_Response *)allocator.allocate(sizeof(slambot_interfaces__srv__Interface_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(slambot_interfaces__srv__Interface_Response));
  bool success = slambot_interfaces__srv__Interface_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
slambot_interfaces__srv__Interface_Response__destroy(slambot_interfaces__srv__Interface_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    slambot_interfaces__srv__Interface_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
slambot_interfaces__srv__Interface_Response__Sequence__init(slambot_interfaces__srv__Interface_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Response * data = NULL;

  if (size) {
    data = (slambot_interfaces__srv__Interface_Response *)allocator.zero_allocate(size, sizeof(slambot_interfaces__srv__Interface_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = slambot_interfaces__srv__Interface_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        slambot_interfaces__srv__Interface_Response__fini(&data[i - 1]);
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
slambot_interfaces__srv__Interface_Response__Sequence__fini(slambot_interfaces__srv__Interface_Response__Sequence * array)
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
      slambot_interfaces__srv__Interface_Response__fini(&array->data[i]);
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

slambot_interfaces__srv__Interface_Response__Sequence *
slambot_interfaces__srv__Interface_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Response__Sequence * array = (slambot_interfaces__srv__Interface_Response__Sequence *)allocator.allocate(sizeof(slambot_interfaces__srv__Interface_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = slambot_interfaces__srv__Interface_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
slambot_interfaces__srv__Interface_Response__Sequence__destroy(slambot_interfaces__srv__Interface_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    slambot_interfaces__srv__Interface_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
slambot_interfaces__srv__Interface_Response__Sequence__are_equal(const slambot_interfaces__srv__Interface_Response__Sequence * lhs, const slambot_interfaces__srv__Interface_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!slambot_interfaces__srv__Interface_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
slambot_interfaces__srv__Interface_Response__Sequence__copy(
  const slambot_interfaces__srv__Interface_Response__Sequence * input,
  slambot_interfaces__srv__Interface_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(slambot_interfaces__srv__Interface_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    slambot_interfaces__srv__Interface_Response * data =
      (slambot_interfaces__srv__Interface_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!slambot_interfaces__srv__Interface_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          slambot_interfaces__srv__Interface_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!slambot_interfaces__srv__Interface_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "slambot_interfaces/srv/detail/interface__functions.h"

bool
slambot_interfaces__srv__Interface_Event__init(slambot_interfaces__srv__Interface_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    slambot_interfaces__srv__Interface_Event__fini(msg);
    return false;
  }
  // request
  if (!slambot_interfaces__srv__Interface_Request__Sequence__init(&msg->request, 0)) {
    slambot_interfaces__srv__Interface_Event__fini(msg);
    return false;
  }
  // response
  if (!slambot_interfaces__srv__Interface_Response__Sequence__init(&msg->response, 0)) {
    slambot_interfaces__srv__Interface_Event__fini(msg);
    return false;
  }
  return true;
}

void
slambot_interfaces__srv__Interface_Event__fini(slambot_interfaces__srv__Interface_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  slambot_interfaces__srv__Interface_Request__Sequence__fini(&msg->request);
  // response
  slambot_interfaces__srv__Interface_Response__Sequence__fini(&msg->response);
}

bool
slambot_interfaces__srv__Interface_Event__are_equal(const slambot_interfaces__srv__Interface_Event * lhs, const slambot_interfaces__srv__Interface_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!slambot_interfaces__srv__Interface_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!slambot_interfaces__srv__Interface_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
slambot_interfaces__srv__Interface_Event__copy(
  const slambot_interfaces__srv__Interface_Event * input,
  slambot_interfaces__srv__Interface_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!slambot_interfaces__srv__Interface_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!slambot_interfaces__srv__Interface_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

slambot_interfaces__srv__Interface_Event *
slambot_interfaces__srv__Interface_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Event * msg = (slambot_interfaces__srv__Interface_Event *)allocator.allocate(sizeof(slambot_interfaces__srv__Interface_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(slambot_interfaces__srv__Interface_Event));
  bool success = slambot_interfaces__srv__Interface_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
slambot_interfaces__srv__Interface_Event__destroy(slambot_interfaces__srv__Interface_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    slambot_interfaces__srv__Interface_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
slambot_interfaces__srv__Interface_Event__Sequence__init(slambot_interfaces__srv__Interface_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Event * data = NULL;

  if (size) {
    data = (slambot_interfaces__srv__Interface_Event *)allocator.zero_allocate(size, sizeof(slambot_interfaces__srv__Interface_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = slambot_interfaces__srv__Interface_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        slambot_interfaces__srv__Interface_Event__fini(&data[i - 1]);
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
slambot_interfaces__srv__Interface_Event__Sequence__fini(slambot_interfaces__srv__Interface_Event__Sequence * array)
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
      slambot_interfaces__srv__Interface_Event__fini(&array->data[i]);
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

slambot_interfaces__srv__Interface_Event__Sequence *
slambot_interfaces__srv__Interface_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slambot_interfaces__srv__Interface_Event__Sequence * array = (slambot_interfaces__srv__Interface_Event__Sequence *)allocator.allocate(sizeof(slambot_interfaces__srv__Interface_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = slambot_interfaces__srv__Interface_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
slambot_interfaces__srv__Interface_Event__Sequence__destroy(slambot_interfaces__srv__Interface_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    slambot_interfaces__srv__Interface_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
slambot_interfaces__srv__Interface_Event__Sequence__are_equal(const slambot_interfaces__srv__Interface_Event__Sequence * lhs, const slambot_interfaces__srv__Interface_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!slambot_interfaces__srv__Interface_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
slambot_interfaces__srv__Interface_Event__Sequence__copy(
  const slambot_interfaces__srv__Interface_Event__Sequence * input,
  slambot_interfaces__srv__Interface_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(slambot_interfaces__srv__Interface_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    slambot_interfaces__srv__Interface_Event * data =
      (slambot_interfaces__srv__Interface_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!slambot_interfaces__srv__Interface_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          slambot_interfaces__srv__Interface_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!slambot_interfaces__srv__Interface_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
