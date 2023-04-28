// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/WriteState.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__WRITE_STATE__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__WRITE_STATE__TRAITS_HPP_

#include "cartographer_ros_msgs/srv/write_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::WriteState_Request>()
{
  return "cartographer_ros_msgs::srv::WriteState_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::WriteState_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/status_response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::WriteState_Response>()
{
  return "cartographer_ros_msgs::srv::WriteState_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteState_Response>
  : std::integral_constant<bool, has_fixed_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::WriteState_Response>
  : std::integral_constant<bool, has_bounded_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::WriteState>()
{
  return "cartographer_ros_msgs::srv::WriteState";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteState>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::WriteState_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::WriteState_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::WriteState>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::WriteState_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::WriteState_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__WRITE_STATE__TRAITS_HPP_
