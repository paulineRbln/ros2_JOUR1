// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from exercices:srv/ControlClient.idl
// generated code does not contain a copyright notice

#ifndef EXERCICES__SRV__DETAIL__CONTROL_CLIENT__STRUCT_HPP_
#define EXERCICES__SRV__DETAIL__CONTROL_CLIENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__exercices__srv__ControlClient_Request __attribute__((deprecated))
#else
# define DEPRECATED__exercices__srv__ControlClient_Request __declspec(deprecated)
#endif

namespace exercices
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlClient_Request_
{
  using Type = ControlClient_Request_<ContainerAllocator>;

  explicit ControlClient_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bon_ordi = "";
      this->ordi_serveur = "";
      this->bon_domain = 0l;
      this->domain_serveur = 0l;
    }
  }

  explicit ControlClient_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bon_ordi(_alloc),
    ordi_serveur(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bon_ordi = "";
      this->ordi_serveur = "";
      this->bon_domain = 0l;
      this->domain_serveur = 0l;
    }
  }

  // field types and members
  using _bon_ordi_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bon_ordi_type bon_ordi;
  using _ordi_serveur_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ordi_serveur_type ordi_serveur;
  using _bon_domain_type =
    int32_t;
  _bon_domain_type bon_domain;
  using _domain_serveur_type =
    int32_t;
  _domain_serveur_type domain_serveur;

  // setters for named parameter idiom
  Type & set__bon_ordi(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bon_ordi = _arg;
    return *this;
  }
  Type & set__ordi_serveur(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ordi_serveur = _arg;
    return *this;
  }
  Type & set__bon_domain(
    const int32_t & _arg)
  {
    this->bon_domain = _arg;
    return *this;
  }
  Type & set__domain_serveur(
    const int32_t & _arg)
  {
    this->domain_serveur = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    exercices::srv::ControlClient_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const exercices::srv::ControlClient_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      exercices::srv::ControlClient_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      exercices::srv::ControlClient_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__exercices__srv__ControlClient_Request
    std::shared_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__exercices__srv__ControlClient_Request
    std::shared_ptr<exercices::srv::ControlClient_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlClient_Request_ & other) const
  {
    if (this->bon_ordi != other.bon_ordi) {
      return false;
    }
    if (this->ordi_serveur != other.ordi_serveur) {
      return false;
    }
    if (this->bon_domain != other.bon_domain) {
      return false;
    }
    if (this->domain_serveur != other.domain_serveur) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlClient_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlClient_Request_

// alias to use template instance with default allocator
using ControlClient_Request =
  exercices::srv::ControlClient_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace exercices


#ifndef _WIN32
# define DEPRECATED__exercices__srv__ControlClient_Response __attribute__((deprecated))
#else
# define DEPRECATED__exercices__srv__ControlClient_Response __declspec(deprecated)
#endif

namespace exercices
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlClient_Response_
{
  using Type = ControlClient_Response_<ContainerAllocator>;

  explicit ControlClient_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit ControlClient_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    exercices::srv::ControlClient_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const exercices::srv::ControlClient_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      exercices::srv::ControlClient_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      exercices::srv::ControlClient_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__exercices__srv__ControlClient_Response
    std::shared_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__exercices__srv__ControlClient_Response
    std::shared_ptr<exercices::srv::ControlClient_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlClient_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlClient_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlClient_Response_

// alias to use template instance with default allocator
using ControlClient_Response =
  exercices::srv::ControlClient_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace exercices

namespace exercices
{

namespace srv
{

struct ControlClient
{
  using Request = exercices::srv::ControlClient_Request;
  using Response = exercices::srv::ControlClient_Response;
};

}  // namespace srv

}  // namespace exercices

#endif  // EXERCICES__SRV__DETAIL__CONTROL_CLIENT__STRUCT_HPP_
