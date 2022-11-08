// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tod_msgs:msg/SecondaryControlCmd.idl
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
#include "tod_msgs/msg/detail/secondary_control_cmd__struct.h"
#include "tod_msgs/msg/detail/secondary_control_cmd__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tod_msgs__msg__secondary_control_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("tod_msgs.msg._secondary_control_cmd.SecondaryControlCmd", full_classname_dest, 55) == 0);
  }
  tod_msgs__msg__SecondaryControlCmd * ros_message = _ros_message;
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
  {  // indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indicator = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_position = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // honk
    PyObject * field = PyObject_GetAttrString(_pymsg, "honk");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->honk = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wiper
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wiper = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // head_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_light");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_light = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // flash_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "flash_light");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flash_light = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tod_msgs__msg__secondary_control_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SecondaryControlCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tod_msgs.msg._secondary_control_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SecondaryControlCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tod_msgs__msg__SecondaryControlCmd * ros_message = (tod_msgs__msg__SecondaryControlCmd *)raw_ros_message;
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
  {  // indicator
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // honk
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->honk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "honk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wiper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_light
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->head_light);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flash_light
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->flash_light);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flash_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
