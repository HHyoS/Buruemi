// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/submap_entry__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::msg::SubmapEntry>()
{
  return "cartographer_ros_msgs::msg::SubmapEntry";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::SubmapEntry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::SubmapEntry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__TRAITS_HPP_
