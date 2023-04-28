// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__GET_CRITIC_SCORE__TRAITS_HPP_
#define DWB_MSGS__SRV__GET_CRITIC_SCORE__TRAITS_HPP_

#include "dwb_msgs/srv/get_critic_score__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "nav_2d_msgs/msg/pose2_d_stamped__traits.hpp"
// Member 'velocity'
#include "nav_2d_msgs/msg/twist2_d__traits.hpp"
// Member 'global_plan'
#include "nav_2d_msgs/msg/path2_d__traits.hpp"
// Member 'traj'
#include "dwb_msgs/msg/trajectory2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GetCriticScore_Request>()
{
  return "dwb_msgs::srv::GetCriticScore_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GetCriticScore_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GetCriticScore_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'score'
#include "dwb_msgs/msg/critic_score__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GetCriticScore_Response>()
{
  return "dwb_msgs::srv::GetCriticScore_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GetCriticScore_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::CriticScore>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GetCriticScore_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::CriticScore>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GetCriticScore>()
{
  return "dwb_msgs::srv::GetCriticScore";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GetCriticScore>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GetCriticScore_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GetCriticScore_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GetCriticScore>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GetCriticScore_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GetCriticScore_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__GET_CRITIC_SCORE__TRAITS_HPP_
