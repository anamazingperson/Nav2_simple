// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopatrol_interfaces:srv/SpeachText.idl
// generated code does not contain a copyright notice

#ifndef AUTOPATROL_INTERFACES__SRV__DETAIL__SPEACH_TEXT__STRUCT_H_
#define AUTOPATROL_INTERFACES__SRV__DETAIL__SPEACH_TEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpeachText in the package autopatrol_interfaces.
typedef struct autopatrol_interfaces__srv__SpeachText_Request
{
  rosidl_runtime_c__String text;
} autopatrol_interfaces__srv__SpeachText_Request;

// Struct for a sequence of autopatrol_interfaces__srv__SpeachText_Request.
typedef struct autopatrol_interfaces__srv__SpeachText_Request__Sequence
{
  autopatrol_interfaces__srv__SpeachText_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopatrol_interfaces__srv__SpeachText_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SpeachText in the package autopatrol_interfaces.
typedef struct autopatrol_interfaces__srv__SpeachText_Response
{
  bool result;
} autopatrol_interfaces__srv__SpeachText_Response;

// Struct for a sequence of autopatrol_interfaces__srv__SpeachText_Response.
typedef struct autopatrol_interfaces__srv__SpeachText_Response__Sequence
{
  autopatrol_interfaces__srv__SpeachText_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopatrol_interfaces__srv__SpeachText_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPATROL_INTERFACES__SRV__DETAIL__SPEACH_TEXT__STRUCT_H_
