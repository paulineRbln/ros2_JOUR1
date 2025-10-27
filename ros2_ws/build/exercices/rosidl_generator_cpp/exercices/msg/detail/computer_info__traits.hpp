// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from exercices:msg/ComputerInfo.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__MSG__DETAIL__COMPUTER_INFO__TRAITS_HPP_
#define EXERCICES__MSG__DETAIL__COMPUTER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "exercices/msg/detail/computer_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace exercices
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComputerInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: computer_name
  {
    out << "computer_name: ";
    rosidl_generator_traits::value_to_yaml(msg.computer_name, out);
    out << ", ";
  }

  // member: domain_id
  {
    out << "domain_id: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_id, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: computer_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computer_name: ";
    rosidl_generator_traits::value_to_yaml(msg.computer_name, out);
    out << "\n";
  }

  // member: domain_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "domain_id: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_id, out);
    out << "\n";
  }

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputerInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace exercices

namespace rosidl_generator_traits
{

[[deprecated("use exercices::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const exercices::msg::ComputerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  exercices::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use exercices::msg::to_yaml() instead")]]
inline std::string to_yaml(const exercices::msg::ComputerInfo & msg)
{
  return exercices::msg::to_yaml(msg);
}

template<>
inline const char * data_type<exercices::msg::ComputerInfo>()
{
  return "exercices::msg::ComputerInfo";
}

template<>
inline const char * name<exercices::msg::ComputerInfo>()
{
  return "exercices/msg/ComputerInfo";
}

template<>
struct has_fixed_size<exercices::msg::ComputerInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<exercices::msg::ComputerInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<exercices::msg::ComputerInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXERCICES__MSG__DETAIL__COMPUTER_INFO__TRAITS_HPP_
