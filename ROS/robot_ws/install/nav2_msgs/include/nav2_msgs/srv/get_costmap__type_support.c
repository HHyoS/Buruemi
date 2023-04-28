// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/srv/get_costmap__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/srv/get_costmap__struct.h"


// Include directives for member types
// Member `specs`
#include "nav2_msgs/msg/costmap_meta_data.h"
// Member `specs`
#include "nav2_msgs/msg/costmap_meta_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_member_array[1] = {
  {
    "specs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCostmap_Request, specs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_members = {
  "nav2_msgs__srv",  // message namespace
  "GetCostmap_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__srv__GetCostmap_Request),
  GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_type_support_handle = {
  0,
  &GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Request)() {
  GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, CostmapMetaData)();
  if (!GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_type_support_handle.typesupport_identifier) {
    GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetCostmap_Request__rosidl_typesupport_introspection_c__GetCostmap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/srv/get_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/srv/get_costmap__struct.h"


// Include directives for member types
// Member `map`
#include "nav2_msgs/msg/costmap.h"
// Member `map`
#include "nav2_msgs/msg/costmap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_member_array[1] = {
  {
    "map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCostmap_Response, map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_members = {
  "nav2_msgs__srv",  // message namespace
  "GetCostmap_Response",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__srv__GetCostmap_Response),
  GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_type_support_handle = {
  0,
  &GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Response)() {
  GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, Costmap)();
  if (!GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_type_support_handle.typesupport_identifier) {
    GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetCostmap_Response__rosidl_typesupport_introspection_c__GetCostmap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/srv/get_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_members = {
  "nav2_msgs__srv",  // service namespace
  "GetCostmap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_type_support_handle = {
  0,
  &nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap)() {
  if (!nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Response)()->data;
  }

  return &nav2_msgs__srv__get_costmap__rosidl_typesupport_introspection_c__GetCostmap_service_type_support_handle;
}
