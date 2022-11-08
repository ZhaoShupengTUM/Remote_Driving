// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tod_msgs:msg/VideoInfo.idl
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
#include "tod_msgs/msg/detail/video_info__struct.h"
#include "tod_msgs/msg/detail/video_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tod_msgs__msg__video_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("tod_msgs.msg._video_info.VideoInfo", full_classname_dest, 34) == 0);
  }
  tod_msgs__msg__VideoInfo * ros_message = _ros_message;
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
  {  // kbitrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "kbitrate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kbitrate = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // framerate
    PyObject * field = PyObject_GetAttrString(_pymsg, "framerate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framerate = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // image_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_height = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // image_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_width = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // image_nof_pixel
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_nof_pixel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_nof_pixel = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tod_msgs__msg__video_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VideoInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tod_msgs.msg._video_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VideoInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tod_msgs__msg__VideoInfo * ros_message = (tod_msgs__msg__VideoInfo *)raw_ros_message;
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
  {  // kbitrate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->kbitrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kbitrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // framerate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->framerate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framerate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->image_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->image_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_nof_pixel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->image_nof_pixel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_nof_pixel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
