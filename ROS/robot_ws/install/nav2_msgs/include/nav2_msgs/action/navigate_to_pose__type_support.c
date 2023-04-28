// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:action/NavigateToPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_member_array[1] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_Goal, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_Goal",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_Goal),
  NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_type_support_handle = {
  0,
  &NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_Goal)() {
  NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_Goal__rosidl_typesupport_introspection_c__NavigateToPose_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `result`
#include "std_msgs/msg/empty.h"
// Member `result`
#include "std_msgs/msg/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_Result",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_Result),
  NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_type_support_handle = {
  0,
  &NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_Result)() {
  NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Empty)();
  if (!NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_Result__rosidl_typesupport_introspection_c__NavigateToPose_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_Feedback),
  NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_type_support_handle = {
  0,
  &NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_Feedback)() {
  if (!NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_Feedback__rosidl_typesupport_introspection_c__NavigateToPose_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nav2_msgs/action/navigate_to_pose.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_SendGoal_Request),
  NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_type_support_handle = {
  0,
  &NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal_Request)() {
  NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_Goal)();
  if (!NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_SendGoal_Response),
  NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_type_support_handle = {
  0,
  &NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal_Response)() {
  NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_members = {
  "nav2_msgs__action",  // service namespace
  "NavigateToPose_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_type_support_handle = {
  0,
  &nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal)() {
  if (!nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_SendGoal_Response)()->data;
  }

  return &nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_GetResult_Request),
  NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_type_support_handle = {
  0,
  &NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult_Request)() {
  NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_GetResult_Request__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/navigate_to_pose.h"
// Member `result`
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_GetResult_Response),
  NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_type_support_handle = {
  0,
  &NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult_Response)() {
  NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_Result)();
  if (!NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_GetResult_Response__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_members = {
  "nav2_msgs__action",  // service namespace
  "NavigateToPose_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_type_support_handle = {
  0,
  &nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult)() {
  if (!nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_GetResult_Response)()->data;
  }

  return &nav2_msgs__action__navigate_to_pose__rosidl_typesupport_introspection_c__NavigateToPose_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/navigate_to_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/navigate_to_pose.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/navigate_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__NavigateToPose_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_members = {
  "nav2_msgs__action",  // message namespace
  "NavigateToPose_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__NavigateToPose_FeedbackMessage),
  NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_type_support_handle = {
  0,
  &NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_FeedbackMessage)() {
  NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, NavigateToPose_Feedback)();
  if (!NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateToPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateToPose_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
