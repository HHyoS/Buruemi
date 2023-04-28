// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:action/DummyRecovery.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DUMMY_RECOVERY__TRAITS_HPP_
#define NAV2_MSGS__ACTION__DUMMY_RECOVERY__TRAITS_HPP_

#include "nav2_msgs/action/dummy_recovery__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'command'
#include "std_msgs/msg/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_Goal>()
{
  return "nav2_msgs::action::DummyRecovery_Goal";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_Goal>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_Goal>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_Result>()
{
  return "nav2_msgs::action::DummyRecovery_Result";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_Result>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_Result>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_Feedback>()
{
  return "nav2_msgs::action::DummyRecovery_Feedback";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "nav2_msgs/action/dummy_recovery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_SendGoal_Request>()
{
  return "nav2_msgs::action::DummyRecovery_SendGoal_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::DummyRecovery_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::DummyRecovery_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_SendGoal_Response>()
{
  return "nav2_msgs::action::DummyRecovery_SendGoal_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_SendGoal>()
{
  return "nav2_msgs::action::DummyRecovery_SendGoal";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::DummyRecovery_SendGoal_Request>::value &&
    has_fixed_size<nav2_msgs::action::DummyRecovery_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::DummyRecovery_SendGoal_Request>::value &&
    has_bounded_size<nav2_msgs::action::DummyRecovery_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_GetResult_Request>()
{
  return "nav2_msgs::action::DummyRecovery_GetResult_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/dummy_recovery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_GetResult_Response>()
{
  return "nav2_msgs::action::DummyRecovery_GetResult_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::DummyRecovery_Result>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::DummyRecovery_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_GetResult>()
{
  return "nav2_msgs::action::DummyRecovery_GetResult";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::DummyRecovery_GetResult_Request>::value &&
    has_fixed_size<nav2_msgs::action::DummyRecovery_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::DummyRecovery_GetResult_Request>::value &&
    has_bounded_size<nav2_msgs::action::DummyRecovery_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/dummy_recovery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DummyRecovery_FeedbackMessage>()
{
  return "nav2_msgs::action::DummyRecovery_FeedbackMessage";
}

template<>
struct has_fixed_size<nav2_msgs::action::DummyRecovery_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::DummyRecovery_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DummyRecovery_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::DummyRecovery_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__ACTION__DUMMY_RECOVERY__TRAITS_HPP_
