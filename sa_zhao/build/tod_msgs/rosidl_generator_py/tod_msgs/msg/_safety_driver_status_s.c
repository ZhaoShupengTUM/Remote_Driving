// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
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
#include "tod_msgs/msg/detail/safety_driver_status__struct.h"
#include "tod_msgs/msg/detail/safety_driver_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tod_msgs__msg__safety_driver_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("tod_msgs.msg._safety_driver_status.SafetyDriverStatus", full_classname_dest, 53) == 0);
  }
  tod_msgs__msg__SafetyDriverStatus * ros_message = _ros_message;
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tod_msgs__msg__safety_driver_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyDriverStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tod_msgs.msg._safety_driver_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyDriverStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tod_msgs__msg__SafetyDriverStatus * ros_message = (tod_msgs__msg__SafetyDriverStatus *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
