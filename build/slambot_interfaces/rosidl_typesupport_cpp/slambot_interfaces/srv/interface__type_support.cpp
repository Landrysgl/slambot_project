// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from slambot_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "slambot_interfaces/srv/detail/interface__functions.h"
#include "slambot_interfaces/srv/detail/interface__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Interface_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Interface_Request_type_support_ids_t;

static const _Interface_Request_type_support_ids_t _Interface_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Interface_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Interface_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Interface_Request_type_support_symbol_names_t _Interface_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slambot_interfaces, srv, Interface_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface_Request)),
  }
};

typedef struct _Interface_Request_type_support_data_t
{
  void * data[2];
} _Interface_Request_type_support_data_t;

static _Interface_Request_type_support_data_t _Interface_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Interface_Request_message_typesupport_map = {
  2,
  "slambot_interfaces",
  &_Interface_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Interface_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Interface_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Interface_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Interface_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &slambot_interfaces__srv__Interface_Request__get_type_hash,
  &slambot_interfaces__srv__Interface_Request__get_type_description,
  &slambot_interfaces__srv__Interface_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slambot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slambot_interfaces::srv::Interface_Request>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_cpp::Interface_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, slambot_interfaces, srv, Interface_Request)() {
  return get_message_type_support_handle<slambot_interfaces::srv::Interface_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Interface_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Interface_Response_type_support_ids_t;

static const _Interface_Response_type_support_ids_t _Interface_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Interface_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Interface_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Interface_Response_type_support_symbol_names_t _Interface_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slambot_interfaces, srv, Interface_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface_Response)),
  }
};

typedef struct _Interface_Response_type_support_data_t
{
  void * data[2];
} _Interface_Response_type_support_data_t;

static _Interface_Response_type_support_data_t _Interface_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Interface_Response_message_typesupport_map = {
  2,
  "slambot_interfaces",
  &_Interface_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Interface_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Interface_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Interface_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Interface_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &slambot_interfaces__srv__Interface_Response__get_type_hash,
  &slambot_interfaces__srv__Interface_Response__get_type_description,
  &slambot_interfaces__srv__Interface_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slambot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slambot_interfaces::srv::Interface_Response>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_cpp::Interface_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, slambot_interfaces, srv, Interface_Response)() {
  return get_message_type_support_handle<slambot_interfaces::srv::Interface_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Interface_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Interface_Event_type_support_ids_t;

static const _Interface_Event_type_support_ids_t _Interface_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Interface_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Interface_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Interface_Event_type_support_symbol_names_t _Interface_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slambot_interfaces, srv, Interface_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface_Event)),
  }
};

typedef struct _Interface_Event_type_support_data_t
{
  void * data[2];
} _Interface_Event_type_support_data_t;

static _Interface_Event_type_support_data_t _Interface_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Interface_Event_message_typesupport_map = {
  2,
  "slambot_interfaces",
  &_Interface_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Interface_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Interface_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Interface_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Interface_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &slambot_interfaces__srv__Interface_Event__get_type_hash,
  &slambot_interfaces__srv__Interface_Event__get_type_description,
  &slambot_interfaces__srv__Interface_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slambot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slambot_interfaces::srv::Interface_Event>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_cpp::Interface_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, slambot_interfaces, srv, Interface_Event)() {
  return get_message_type_support_handle<slambot_interfaces::srv::Interface_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "slambot_interfaces/srv/detail/interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Interface_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Interface_type_support_ids_t;

static const _Interface_type_support_ids_t _Interface_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Interface_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Interface_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Interface_type_support_symbol_names_t _Interface_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slambot_interfaces, srv, Interface)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface)),
  }
};

typedef struct _Interface_type_support_data_t
{
  void * data[2];
} _Interface_type_support_data_t;

static _Interface_type_support_data_t _Interface_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Interface_service_typesupport_map = {
  2,
  "slambot_interfaces",
  &_Interface_service_typesupport_ids.typesupport_identifier[0],
  &_Interface_service_typesupport_symbol_names.symbol_name[0],
  &_Interface_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Interface_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Interface_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<slambot_interfaces::srv::Interface>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<slambot_interfaces::srv::Interface>,
  &slambot_interfaces__srv__Interface__get_type_hash,
  &slambot_interfaces__srv__Interface__get_type_description,
  &slambot_interfaces__srv__Interface__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slambot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<slambot_interfaces::srv::Interface>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_cpp::Interface_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, slambot_interfaces, srv, Interface)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<slambot_interfaces::srv::Interface>();
}

#ifdef __cplusplus
}
#endif
