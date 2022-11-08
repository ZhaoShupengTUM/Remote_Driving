// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tod_msgs/msg/detail/status__struct.h"
#include "tod_msgs/msg/detail/status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tod_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tod_msgs.msg._status.Status", full_classname_dest, 27) == 0);
  }
  tod_msgs__msg__Status * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // operator_ip_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_ip_address");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->operator_ip_address, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // operator_control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operator_control_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operator_video_rate_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_video_rate_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operator_video_rate_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tod_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "tod_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tod_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_ip_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_ip_address");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_ip_address, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vehicle_emergency_stop_released
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_emergency_stop_released");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_emergency_stop_released = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_long_approved
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_long_approved");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_long_approved = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_lat_approved
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_lat_approved");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_lat_approved = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_control_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_nav_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_nav_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_nav_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vehicle_gps_pos_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_gps_pos_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_gps_pos_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tod_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tod_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tod_msgs__msg__Status * ros_message = (tod_msgs__msg__Status *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_ip_address
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->operator_ip_address.data,
      strlen(ros_message->operator_ip_address.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_ip_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_control_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operator_control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_video_rate_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operator_video_rate_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_video_rate_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tod_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tod_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tod_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_ip_address
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_ip_address.data,
      strlen(ros_message->vehicle_ip_address.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_ip_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_emergency_stop_released
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_emergency_stop_released ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_emergency_stop_released", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_long_approved
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_long_approved ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_long_approved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_lat_approved
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_lat_approved ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_lat_approved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_control_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_nav_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_nav_status.data,
      strlen(ros_message->vehicle_nav_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_nav_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_gps_pos_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_gps_pos_type.data,
      strlen(ros_message->vehicle_gps_pos_type.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_gps_pos_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
