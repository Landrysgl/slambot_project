// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slambot_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slambot_interfaces/srv/interface.hpp"


#ifndef SLAMBOT_INTERFACES__SRV__DETAIL__INTERFACE__BUILDER_HPP_
#define SLAMBOT_INTERFACES__SRV__DETAIL__INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slambot_interfaces/srv/detail/interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slambot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slambot_interfaces::srv::Interface_Request>()
{
  return ::slambot_interfaces::srv::Interface_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slambot_interfaces


namespace slambot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slambot_interfaces::srv::Interface_Response>()
{
  return ::slambot_interfaces::srv::Interface_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slambot_interfaces


namespace slambot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Interface_Event_response
{
public:
  explicit Init_Interface_Event_response(::slambot_interfaces::srv::Interface_Event & msg)
  : msg_(msg)
  {}
  ::slambot_interfaces::srv::Interface_Event response(::slambot_interfaces::srv::Interface_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slambot_interfaces::srv::Interface_Event msg_;
};

class Init_Interface_Event_request
{
public:
  explicit Init_Interface_Event_request(::slambot_interfaces::srv::Interface_Event & msg)
  : msg_(msg)
  {}
  Init_Interface_Event_response request(::slambot_interfaces::srv::Interface_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Interface_Event_response(msg_);
  }

private:
  ::slambot_interfaces::srv::Interface_Event msg_;
};

class Init_Interface_Event_info
{
public:
  Init_Interface_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Interface_Event_request info(::slambot_interfaces::srv::Interface_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Interface_Event_request(msg_);
  }

private:
  ::slambot_interfaces::srv::Interface_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slambot_interfaces::srv::Interface_Event>()
{
  return slambot_interfaces::srv::builder::Init_Interface_Event_info();
}

}  // namespace slambot_interfaces

#endif  // SLAMBOT_INTERFACES__SRV__DETAIL__INTERFACE__BUILDER_HPP_
