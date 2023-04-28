// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__GENERATE_TRAJECTORY__TRAITS_HPP_
#define DWB_MSGS__SRV__GENERATE_TRAJECTORY__TRAITS_HPP_

#include "dwb_msgs/srv/generate_trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_pose'
#include "geometry_msgs/msg/pose2_d__traits.hpp"
// Member 'start_vel'
// Member 'cmd_vel'
#include "nav_2d_msgs/msg/twist2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<nav_2d_msgs::msg::Twist2D>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/trajectory2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::Trajectory2D>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs::srv::GenerateTrajectory";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__GENERATE_TRAJECTORY__TRAITS_HPP_
