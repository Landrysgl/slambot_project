// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slambot_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slambot_interfaces/srv/interface.h"


#ifndef SLAMBOT_INTERFACES__SRV__DETAIL__INTERFACE__STRUCT_H_
#define SLAMBOT_INTERFACES__SRV__DETAIL__INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Interface in the package slambot_interfaces.
typedef struct slambot_interfaces__srv__Interface_Request
{
  uint8_t structure_needs_at_least_one_member;
} slambot_interfaces__srv__Interface_Request;

// Struct for a sequence of slambot_interfaces__srv__Interface_Request.
typedef struct slambot_interfaces__srv__Interface_Request__Sequence
{
  slambot_interfaces__srv__Interface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slambot_interfaces__srv__Interface_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Interface in the package slambot_interfaces.
typedef struct slambot_interfaces__srv__Interface_Response
{
  uint8_t structure_needs_at_least_one_member;
} slambot_interfaces__srv__Interface_Response;

// Struct for a sequence of slambot_interfaces__srv__Interface_Response.
typedef struct slambot_interfaces__srv__Interface_Response__Sequence
{
  slambot_interfaces__srv__Interface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slambot_interfaces__srv__Interface_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  slambot_interfaces__srv__Interface_Event__request__MAX_SIZE = 1
};
// response
enum
{
  slambot_interfaces__srv__Interface_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Interface in the package slambot_interfaces.
typedef struct slambot_interfaces__srv__Interface_Event
{
  service_msgs__msg__ServiceEventInfo info;
  slambot_interfaces__srv__Interface_Request__Sequence request;
  slambot_interfaces__srv__Interface_Response__Sequence response;
} slambot_interfaces__srv__Interface_Event;

// Struct for a sequence of slambot_interfaces__srv__Interface_Event.
typedef struct slambot_interfaces__srv__Interface_Event__Sequence
{
  slambot_interfaces__srv__Interface_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slambot_interfaces__srv__Interface_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAMBOT_INTERFACES__SRV__DETAIL__INTERFACE__STRUCT_H_
