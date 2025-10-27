// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__SRV__DETAIL__CONTROL_CLIENT__TRAITS_HPP_
#define EXERCICES__SRV__DETAIL__CONTROL_CLIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "exercices/srv/detail/control_client__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace exercices
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlClient_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bon_ordi
  {
    out << "bon_ordi: ";
    rosidl_generator_traits::value_to_yaml(msg.bon_ordi, out);
    out << ", ";
  }

  // member: ordi_serveur
  {
    out << "ordi_serveur: ";
    rosidl_generator_traits::value_to_yaml(msg.ordi_serveur, out);
    out << ", ";
  }

  // member: bon_domain
  {
    out << "bon_domain: ";
    rosidl_generator_traits::value_to_yaml(msg.bon_domain, out);
    out << ", ";
  }

  // member: domain_serveur
  {
    out << "domain_serveur: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_serveur, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlClient_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bon_ordi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bon_ordi: ";
    rosidl_generator_traits::value_to_yaml(msg.bon_ordi, out);
    out << "\n";
  }

  // member: ordi_serveur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ordi_serveur: ";
    rosidl_generator_traits::value_to_yaml(msg.ordi_serveur, out);
    out << "\n";
  }

  // member: bon_domain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bon_domain: ";
    rosidl_generator_traits::value_to_yaml(msg.bon_domain, out);
    out << "\n";
  }

  // member: domain_serveur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "domain_serveur: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_serveur, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlClient_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace exercices

namespace rosidl_generator_traits
{

[[deprecated("use exercices::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const exercices::srv::ControlClient_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  exercices::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use exercices::srv::to_yaml() instead")]]
inline std::string to_yaml(const exercices::srv::ControlClient_Request & msg)
{
  return exercices::srv::to_yaml(msg);
}

template<>
inline const char * data_type<exercices::srv::ControlClient_Request>()
{
  return "exercices::srv::ControlClient_Request";
}

template<>
inline const char * name<exercices::srv::ControlClient_Request>()
{
  return "exercices/srv/ControlClient_Request";
}

template<>
struct has_fixed_size<exercices::srv::ControlClient_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<exercices::srv::ControlClient_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<exercices::srv::ControlClient_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace exercices
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlClient_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlClient_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlClient_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace exercices

namespace rosidl_generator_traits
{

[[deprecated("use exercices::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const exercices::srv::ControlClient_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  exercices::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use exercices::srv::to_yaml() instead")]]
inline std::string to_yaml(const exercices::srv::ControlClient_Response & msg)
{
  return exercices::srv::to_yaml(msg);
}

template<>
inline const char * data_type<exercices::srv::ControlClient_Response>()
{
  return "exercices::srv::ControlClient_Response";
}

template<>
inline const char * name<exercices::srv::ControlClient_Response>()
{
  return "exercices/srv/ControlClient_Response";
}

template<>
struct has_fixed_size<exercices::srv::ControlClient_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<exercices::srv::ControlClient_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<exercices::srv::ControlClient_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<exercices::srv::ControlClient>()
{
  return "exercices::srv::ControlClient";
}

template<>
inline const char * name<exercices::srv::ControlClient>()
{
  return "exercices/srv/ControlClient";
}

template<>
struct has_fixed_size<exercices::srv::ControlClient>
  : std::integral_constant<
    bool,
    has_fixed_size<exercices::srv::ControlClient_Request>::value &&
    has_fixed_size<exercices::srv::ControlClient_Response>::value
  >
{
};

template<>
struct has_bounded_size<exercices::srv::ControlClient>
  : std::integral_constant<
    bool,
    has_bounded_size<exercices::srv::ControlClient_Request>::value &&
    has_bounded_size<exercices::srv::ControlClient_Response>::value
  >
{
};

template<>
struct is_service<exercices::srv::ControlClient>
  : std::true_type
{
};

template<>
struct is_service_request<exercices::srv::ControlClient_Request>
  : std::true_type
{
};

template<>
struct is_service_response<exercices::srv::ControlClient_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXERCICES__SRV__DETAIL__CONTROL_CLIENT__TRAITS_HPP_
