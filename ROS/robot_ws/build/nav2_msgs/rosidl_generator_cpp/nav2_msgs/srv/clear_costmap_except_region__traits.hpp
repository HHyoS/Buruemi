// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/ClearCostmapExceptRegion.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__CLEAR_COSTMAP_EXCEPT_REGION__TRAITS_HPP_
#define NAV2_MSGS__SRV__CLEAR_COSTMAP_EXCEPT_REGION__TRAITS_HPP_

#include "nav2_msgs/srv/clear_costmap_except_region__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ClearCostmapExceptRegion_Request>()
{
  return "nav2_msgs::srv::ClearCostmapExceptRegion_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ClearCostmapExceptRegion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ClearCostmapExceptRegion_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "std_msgs/msg/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ClearCostmapExceptRegion_Response>()
{
  return "nav2_msgs::srv::ClearCostmapExceptRegion_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ClearCostmapExceptRegion_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ClearCostmapExceptRegion_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ClearCostmapExceptRegion>()
{
  return "nav2_msgs::srv::ClearCostmapExceptRegion";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ClearCostmapExceptRegion>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::ClearCostmapExceptRegion_Request>::value &&
    has_fixed_size<nav2_msgs::srv::ClearCostmapExceptRegion_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::ClearCostmapExceptRegion>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::ClearCostmapExceptRegion_Request>::value &&
    has_bounded_size<nav2_msgs::srv::ClearCostmapExceptRegion_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__CLEAR_COSTMAP_EXCEPT_REGION__TRAITS_HPP_
