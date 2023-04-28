// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__TRAJECTORY2_D__STRUCT_HPP_
#define DWB_MSGS__MSG__TRAJECTORY2_D__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'velocity'
#include "nav_2d_msgs/msg/twist2_d__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/duration__struct.hpp"
// Member 'poses'
#include "geometry_msgs/msg/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__msg__Trajectory2D __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__msg__Trajectory2D __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory2D_
{
  using Type = Trajectory2D_<ContainerAllocator>;

  explicit Trajectory2D_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : velocity(_init),
    duration(_init)
  {
    (void)_init;
  }

  explicit Trajectory2D_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : velocity(_alloc, _init),
    duration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _velocity_type =
    nav_2d_msgs::msg::Twist2D_<ContainerAllocator>;
  _velocity_type velocity;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose2D_<ContainerAllocator>>::other>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__velocity(
    const nav_2d_msgs::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose2D_<ContainerAllocator>>::other> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::msg::Trajectory2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::msg::Trajectory2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::msg::Trajectory2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::msg::Trajectory2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__msg__Trajectory2D
    std::shared_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__msg__Trajectory2D
    std::shared_ptr<dwb_msgs::msg::Trajectory2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory2D_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory2D_

// alias to use template instance with default allocator
using Trajectory2D =
  dwb_msgs::msg::Trajectory2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__TRAJECTORY2_D__STRUCT_HPP_
