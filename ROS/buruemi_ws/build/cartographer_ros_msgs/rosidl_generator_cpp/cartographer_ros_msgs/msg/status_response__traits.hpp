// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__STATUS_RESPONSE__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__STATUS_RESPONSE__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/status_response__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::msg::StatusResponse>()
{
  return "cartographer_ros_msgs::msg::StatusResponse";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::StatusResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::StatusResponse>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__STATUS_RESPONSE__TRAITS_HPP_
