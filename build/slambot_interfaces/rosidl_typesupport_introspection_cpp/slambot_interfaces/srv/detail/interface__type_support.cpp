// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from slambot_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "slambot_interfaces/srv/detail/interface__functions.h"
#include "slambot_interfaces/srv/detail/interface__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Interface_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) slambot_interfaces::srv::Interface_Request(_init);
}

void Interface_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<slambot_interfaces::srv::Interface_Request *>(message_memory);
  typed_message->~Interface_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Interface_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slambot_interfaces::srv::Interface_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Interface_Request_message_members = {
  "slambot_interfaces::srv",  // message namespace
  "Interface_Request",  // message name
  1,  // number of fields
  sizeof(slambot_interfaces::srv::Interface_Request),
  false,  // has_any_key_member_
  Interface_Request_message_member_array,  // message members
  Interface_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Interface_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Interface_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Interface_Request_message_members,
  get_message_typesupport_handle_function,
  &slambot_interfaces__srv__Interface_Request__get_type_hash,
  &slambot_interfaces__srv__Interface_Request__get_type_description,
  &slambot_interfaces__srv__Interface_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace slambot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slambot_interfaces::srv::Interface_Request>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface_Request)() {
  return &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Interface_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) slambot_interfaces::srv::Interface_Response(_init);
}

void Interface_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<slambot_interfaces::srv::Interface_Response *>(message_memory);
  typed_message->~Interface_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Interface_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slambot_interfaces::srv::Interface_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Interface_Response_message_members = {
  "slambot_interfaces::srv",  // message namespace
  "Interface_Response",  // message name
  1,  // number of fields
  sizeof(slambot_interfaces::srv::Interface_Response),
  false,  // has_any_key_member_
  Interface_Response_message_member_array,  // message members
  Interface_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Interface_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Interface_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Interface_Response_message_members,
  get_message_typesupport_handle_function,
  &slambot_interfaces__srv__Interface_Response__get_type_hash,
  &slambot_interfaces__srv__Interface_Response__get_type_description,
  &slambot_interfaces__srv__Interface_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace slambot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slambot_interfaces::srv::Interface_Response>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface_Response)() {
  return &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Interface_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) slambot_interfaces::srv::Interface_Event(_init);
}

void Interface_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<slambot_interfaces::srv::Interface_Event *>(message_memory);
  typed_message->~Interface_Event();
}

size_t size_function__Interface_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<slambot_interfaces::srv::Interface_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Interface_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<slambot_interfaces::srv::Interface_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__Interface_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<slambot_interfaces::srv::Interface_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__Interface_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const slambot_interfaces::srv::Interface_Request *>(
    get_const_function__Interface_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<slambot_interfaces::srv::Interface_Request *>(untyped_value);
  value = item;
}

void assign_function__Interface_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<slambot_interfaces::srv::Interface_Request *>(
    get_function__Interface_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const slambot_interfaces::srv::Interface_Request *>(untyped_value);
  item = value;
}

void resize_function__Interface_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<slambot_interfaces::srv::Interface_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Interface_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<slambot_interfaces::srv::Interface_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Interface_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<slambot_interfaces::srv::Interface_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__Interface_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<slambot_interfaces::srv::Interface_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__Interface_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const slambot_interfaces::srv::Interface_Response *>(
    get_const_function__Interface_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<slambot_interfaces::srv::Interface_Response *>(untyped_value);
  value = item;
}

void assign_function__Interface_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<slambot_interfaces::srv::Interface_Response *>(
    get_function__Interface_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const slambot_interfaces::srv::Interface_Response *>(untyped_value);
  item = value;
}

void resize_function__Interface_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<slambot_interfaces::srv::Interface_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Interface_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slambot_interfaces::srv::Interface_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(slambot_interfaces::srv::Interface_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__Interface_Event__request,  // size() function pointer
    get_const_function__Interface_Event__request,  // get_const(index) function pointer
    get_function__Interface_Event__request,  // get(index) function pointer
    fetch_function__Interface_Event__request,  // fetch(index, &value) function pointer
    assign_function__Interface_Event__request,  // assign(index, value) function pointer
    resize_function__Interface_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(slambot_interfaces::srv::Interface_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__Interface_Event__response,  // size() function pointer
    get_const_function__Interface_Event__response,  // get_const(index) function pointer
    get_function__Interface_Event__response,  // get(index) function pointer
    fetch_function__Interface_Event__response,  // fetch(index, &value) function pointer
    assign_function__Interface_Event__response,  // assign(index, value) function pointer
    resize_function__Interface_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Interface_Event_message_members = {
  "slambot_interfaces::srv",  // message namespace
  "Interface_Event",  // message name
  3,  // number of fields
  sizeof(slambot_interfaces::srv::Interface_Event),
  false,  // has_any_key_member_
  Interface_Event_message_member_array,  // message members
  Interface_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  Interface_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Interface_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Interface_Event_message_members,
  get_message_typesupport_handle_function,
  &slambot_interfaces__srv__Interface_Event__get_type_hash,
  &slambot_interfaces__srv__Interface_Event__get_type_description,
  &slambot_interfaces__srv__Interface_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace slambot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slambot_interfaces::srv::Interface_Event>()
{
  return &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface_Event)() {
  return &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "slambot_interfaces/srv/detail/interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace slambot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Interface_service_members = {
  "slambot_interfaces::srv",  // service namespace
  "Interface",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<slambot_interfaces::srv::Interface>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t Interface_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Interface_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<slambot_interfaces::srv::Interface_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<slambot_interfaces::srv::Interface>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<slambot_interfaces::srv::Interface>,
  &slambot_interfaces__srv__Interface__get_type_hash,
  &slambot_interfaces__srv__Interface__get_type_description,
  &slambot_interfaces__srv__Interface__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace slambot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<slambot_interfaces::srv::Interface>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::slambot_interfaces::srv::rosidl_typesupport_introspection_cpp::Interface_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::slambot_interfaces::srv::Interface_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::slambot_interfaces::srv::Interface_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::slambot_interfaces::srv::Interface_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slambot_interfaces, srv, Interface)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<slambot_interfaces::srv::Interface>();
}

#ifdef __cplusplus
}
#endif
