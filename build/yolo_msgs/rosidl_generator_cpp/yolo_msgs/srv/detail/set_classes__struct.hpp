// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolo_msgs:srv/SetClasses.idl
// generated code does not contain a copyright notice

#ifndef YOLO_MSGS__SRV__DETAIL__SET_CLASSES__STRUCT_HPP_
#define YOLO_MSGS__SRV__DETAIL__SET_CLASSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yolo_msgs__srv__SetClasses_Request __attribute__((deprecated))
#else
# define DEPRECATED__yolo_msgs__srv__SetClasses_Request __declspec(deprecated)
#endif

namespace yolo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetClasses_Request_
{
  using Type = SetClasses_Request_<ContainerAllocator>;

  explicit SetClasses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetClasses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _classes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _classes_type classes;

  // setters for named parameter idiom
  Type & set__classes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->classes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolo_msgs::srv::SetClasses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolo_msgs::srv::SetClasses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::srv::SetClasses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::srv::SetClasses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolo_msgs__srv__SetClasses_Request
    std::shared_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolo_msgs__srv__SetClasses_Request
    std::shared_ptr<yolo_msgs::srv::SetClasses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetClasses_Request_ & other) const
  {
    if (this->classes != other.classes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetClasses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetClasses_Request_

// alias to use template instance with default allocator
using SetClasses_Request =
  yolo_msgs::srv::SetClasses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yolo_msgs


#ifndef _WIN32
# define DEPRECATED__yolo_msgs__srv__SetClasses_Response __attribute__((deprecated))
#else
# define DEPRECATED__yolo_msgs__srv__SetClasses_Response __declspec(deprecated)
#endif

namespace yolo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetClasses_Response_
{
  using Type = SetClasses_Response_<ContainerAllocator>;

  explicit SetClasses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetClasses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    yolo_msgs::srv::SetClasses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolo_msgs::srv::SetClasses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::srv::SetClasses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::srv::SetClasses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolo_msgs__srv__SetClasses_Response
    std::shared_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolo_msgs__srv__SetClasses_Response
    std::shared_ptr<yolo_msgs::srv::SetClasses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetClasses_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetClasses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetClasses_Response_

// alias to use template instance with default allocator
using SetClasses_Response =
  yolo_msgs::srv::SetClasses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yolo_msgs

namespace yolo_msgs
{

namespace srv
{

struct SetClasses
{
  using Request = yolo_msgs::srv::SetClasses_Request;
  using Response = yolo_msgs::srv::SetClasses_Response;
};

}  // namespace srv

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__SRV__DETAIL__SET_CLASSES__STRUCT_HPP_