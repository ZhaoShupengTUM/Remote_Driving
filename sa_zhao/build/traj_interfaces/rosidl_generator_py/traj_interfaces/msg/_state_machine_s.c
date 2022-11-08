// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from traj_interfaces:msg/StateMachine.idl
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
#include "traj_interfaces/msg/detail/state_machine__struct.h"
#include "traj_interfaces/msg/detail/state_machine__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool traj_interfaces__msg__state_machine__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("traj_interfaces.msg._state_machine.StateMachine", full_classname_dest, 47) == 0);
  }
  traj_interfaces__msg__StateMachine * ros_message = _ros_message;
  {  // vehicle_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * traj_interfaces__msg__state_machine__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateMachine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("traj_interfaces.msg._state_machine");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateMachine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  traj_interfaces__msg__StateMachine * ros_message = (traj_interfaces__msg__StateMachine *)raw_ros_message;
  {  // vehicle_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
