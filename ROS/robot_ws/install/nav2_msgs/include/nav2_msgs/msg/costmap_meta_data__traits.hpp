// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__COSTMAP_META_DATA__TRAITS_HPP_
#define NAV2_MSGS__MSG__COSTMAP_META_DATA__TRAITS_HPP_

#include "nav2_msgs/msg/costmap_meta_data__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'map_load_time'
// Member 'update_time'
#include "builtin_interfaces/msg/time__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::msg::CostmapMetaData>()
{
  return "nav2_msgs::msg::CostmapMetaData";
}

template<>
struct has_fixed_size<nav2_msgs::msg::CostmapMetaData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::CostmapMetaData>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__COSTMAP_META_DATA__TRAITS_HPP_
