// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__VOXEL_GRID__TRAITS_HPP_
#define NAV2_MSGS__MSG__VOXEL_GRID__TRAITS_HPP_

#include "nav2_msgs/msg/voxel_grid__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/point32__traits.hpp"
// Member 'resolutions'
#include "geometry_msgs/msg/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::msg::VoxelGrid>()
{
  return "nav2_msgs::msg::VoxelGrid";
}

template<>
struct has_fixed_size<nav2_msgs::msg::VoxelGrid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::VoxelGrid>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__VOXEL_GRID__TRAITS_HPP_
