// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/submap_entry__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/submap_entry__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_member_array[4] = {
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapEntry, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submap_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapEntry, submap_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submap_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapEntry, submap_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapEntry, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "SubmapEntry",  // message name
  4,  // number of fields
  sizeof(cartographer_ros_msgs__msg__SubmapEntry),
  SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_type_support_handle = {
  0,
  &SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SubmapEntry)() {
  SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_type_support_handle.typesupport_identifier) {
    SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmapEntry__rosidl_typesupport_introspection_c__SubmapEntry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
