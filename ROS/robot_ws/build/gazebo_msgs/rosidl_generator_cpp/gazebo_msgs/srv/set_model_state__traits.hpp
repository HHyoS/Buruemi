// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__SET_MODEL_STATE__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__SET_MODEL_STATE__TRAITS_HPP_

#include "gazebo_msgs/srv/set_model_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'model_state'
#include "gazebo_msgs/msg/model_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelState_Request>()
{
  return "gazebo_msgs::srv::SetModelState_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelState_Request>
  : std::integral_constant<bool, has_fixed_size<gazebo_msgs::msg::ModelState>::value> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelState_Request>
  : std::integral_constant<bool, has_bounded_size<gazebo_msgs::msg::ModelState>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelState_Response>()
{
  return "gazebo_msgs::srv::SetModelState_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelState_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelState>()
{
  return "gazebo_msgs::srv::SetModelState";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelState>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetModelState_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetModelState_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelState>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetModelState_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetModelState_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__SET_MODEL_STATE__TRAITS_HPP_
