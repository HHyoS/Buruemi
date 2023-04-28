// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__LOCAL_PLAN_EVALUATION__TRAITS_HPP_
#define DWB_MSGS__MSG__LOCAL_PLAN_EVALUATION__TRAITS_HPP_

#include "dwb_msgs/msg/local_plan_evaluation__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::msg::LocalPlanEvaluation>()
{
  return "dwb_msgs::msg::LocalPlanEvaluation";
}

template<>
struct has_fixed_size<dwb_msgs::msg::LocalPlanEvaluation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::msg::LocalPlanEvaluation>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__MSG__LOCAL_PLAN_EVALUATION__TRAITS_HPP_
