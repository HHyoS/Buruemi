// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/ApplyBodyWrench.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/apply_body_wrench__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/apply_body_wrench__struct.h"


// Include directives for member types
// Member `body_name`
// Member `reference_frame`
#include "rosidl_generator_c/string_functions.h"
// Member `reference_point`
#include "geometry_msgs/msg/point.h"
// Member `reference_point`
#include "geometry_msgs/msg/point__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench__rosidl_typesupport_introspection_c.h"
// Member `start_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"
// Member `duration`
#include "builtin_interfaces/msg/duration.h"
// Member `duration`
#include "builtin_interfaces/msg/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_member_array[6] = {
  {
    "body_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Request, body_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Request, reference_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Request, reference_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Request, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Request, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "ApplyBodyWrench_Request",  // message name
  6,  // number of fields
  sizeof(gazebo_msgs__srv__ApplyBodyWrench_Request),
  ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_type_support_handle = {
  0,
  &ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench_Request)() {
  ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_type_support_handle.typesupport_identifier) {
    ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ApplyBodyWrench_Request__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/apply_body_wrench__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/apply_body_wrench__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__ApplyBodyWrench_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "ApplyBodyWrench_Response",  // message name
  2,  // number of fields
  sizeof(gazebo_msgs__srv__ApplyBodyWrench_Response),
  ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_type_support_handle = {
  0,
  &ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench_Response)() {
  if (!ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_type_support_handle.typesupport_identifier) {
    ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ApplyBodyWrench_Response__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/apply_body_wrench__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "ApplyBodyWrench",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench)() {
  if (!gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, ApplyBodyWrench_Response)()->data;
  }

  return &gazebo_msgs__srv__apply_body_wrench__rosidl_typesupport_introspection_c__ApplyBodyWrench_service_type_support_handle;
}
