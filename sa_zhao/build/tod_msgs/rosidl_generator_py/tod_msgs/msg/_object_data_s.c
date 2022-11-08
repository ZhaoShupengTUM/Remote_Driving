// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tod_msgs:msg/ObjectData.idl
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
#include "tod_msgs/msg/detail/object_data__struct.h"
#include "tod_msgs/msg/detail/object_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tod_msgs__msg__object_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("tod_msgs.msg._object_data.ObjectData", full_classname_dest, 36) == 0);
  }
  tod_msgs__msg__ObjectData * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dim_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "dim_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dim_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dim_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "dim_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dim_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dim_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "dim_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dim_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_center_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_center_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_center_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_center_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_center_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_center_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tod_msgs__msg__object_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tod_msgs.msg._object_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tod_msgs__msg__ObjectData * ros_message = (tod_msgs__msg__ObjectData *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dim_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dim_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dim_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dim_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dim_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dim_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dim_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dim_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dim_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_center_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_center_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_center_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_center_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_center_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_center_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
