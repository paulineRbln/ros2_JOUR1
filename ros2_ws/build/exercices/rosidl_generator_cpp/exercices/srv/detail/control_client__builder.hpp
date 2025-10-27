// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__SRV__DETAIL__CONTROL_CLIENT__BUILDER_HPP_
#define EXERCICES__SRV__DETAIL__CONTROL_CLIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "exercices/srv/detail/control_client__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace exercices
{

namespace srv
{

namespace builder
{

class Init_ControlClient_Request_domain_serveur
{
public:
  explicit Init_ControlClient_Request_domain_serveur(::exercices::srv::ControlClient_Request & msg)
  : msg_(msg)
  {}
  ::exercices::srv::ControlClient_Request domain_serveur(::exercices::srv::ControlClient_Request::_domain_serveur_type arg)
  {
    msg_.domain_serveur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exercices::srv::ControlClient_Request msg_;
};

class Init_ControlClient_Request_bon_domain
{
public:
  explicit Init_ControlClient_Request_bon_domain(::exercices::srv::ControlClient_Request & msg)
  : msg_(msg)
  {}
  Init_ControlClient_Request_domain_serveur bon_domain(::exercices::srv::ControlClient_Request::_bon_domain_type arg)
  {
    msg_.bon_domain = std::move(arg);
    return Init_ControlClient_Request_domain_serveur(msg_);
  }

private:
  ::exercices::srv::ControlClient_Request msg_;
};

class Init_ControlClient_Request_ordi_serveur
{
public:
  explicit Init_ControlClient_Request_ordi_serveur(::exercices::srv::ControlClient_Request & msg)
  : msg_(msg)
  {}
  Init_ControlClient_Request_bon_domain ordi_serveur(::exercices::srv::ControlClient_Request::_ordi_serveur_type arg)
  {
    msg_.ordi_serveur = std::move(arg);
    return Init_ControlClient_Request_bon_domain(msg_);
  }

private:
  ::exercices::srv::ControlClient_Request msg_;
};

class Init_ControlClient_Request_bon_ordi
{
public:
  Init_ControlClient_Request_bon_ordi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlClient_Request_ordi_serveur bon_ordi(::exercices::srv::ControlClient_Request::_bon_ordi_type arg)
  {
    msg_.bon_ordi = std::move(arg);
    return Init_ControlClient_Request_ordi_serveur(msg_);
  }

private:
  ::exercices::srv::ControlClient_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::exercices::srv::ControlClient_Request>()
{
  return exercices::srv::builder::Init_ControlClient_Request_bon_ordi();
}

}  // namespace exercices


namespace exercices
{

namespace srv
{

namespace builder
{

class Init_ControlClient_Response_result
{
public:
  Init_ControlClient_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::exercices::srv::ControlClient_Response result(::exercices::srv::ControlClient_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exercices::srv::ControlClient_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::exercices::srv::ControlClient_Response>()
{
  return exercices::srv::builder::Init_ControlClient_Response_result();
}

}  // namespace exercices

#endif  // EXERCICES__SRV__DETAIL__CONTROL_CLIENT__BUILDER_HPP_
