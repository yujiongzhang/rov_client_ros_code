// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rov_interfaces:msg/Thrusters.idl
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
#include "rov_interfaces/msg/detail/thrusters__struct.h"
#include "rov_interfaces/msg/detail/thrusters__functions.h"

bool rov_interfaces__msg__thruster__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rov_interfaces__msg__thruster__convert_to_py(void * raw_ros_message);
bool rov_interfaces__msg__thruster__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rov_interfaces__msg__thruster__convert_to_py(void * raw_ros_message);
bool rov_interfaces__msg__thruster__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rov_interfaces__msg__thruster__convert_to_py(void * raw_ros_message);
bool rov_interfaces__msg__thruster__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rov_interfaces__msg__thruster__convert_to_py(void * raw_ros_message);
bool rov_interfaces__msg__thruster__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rov_interfaces__msg__thruster__convert_to_py(void * raw_ros_message);
bool rov_interfaces__msg__thruster__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rov_interfaces__msg__thruster__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rov_interfaces__msg__thrusters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("rov_interfaces.msg._thrusters.Thrusters", full_classname_dest, 39) == 0);
  }
  rov_interfaces__msg__Thrusters * ros_message = _ros_message;
  {  // upper_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "upper_left");
    if (!field) {
      return false;
    }
    if (!rov_interfaces__msg__thruster__convert_from_py(field, &ros_message->upper_left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // upper_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "upper_right");
    if (!field) {
      return false;
    }
    if (!rov_interfaces__msg__thruster__convert_from_py(field, &ros_message->upper_right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lower_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "lower_right");
    if (!field) {
      return false;
    }
    if (!rov_interfaces__msg__thruster__convert_from_py(field, &ros_message->lower_right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lower_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "lower_left");
    if (!field) {
      return false;
    }
    if (!rov_interfaces__msg__thruster__convert_from_py(field, &ros_message->lower_left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    if (!rov_interfaces__msg__thruster__convert_from_py(field, &ros_message->left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    if (!rov_interfaces__msg__thruster__convert_from_py(field, &ros_message->right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rov_interfaces__msg__thrusters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Thrusters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rov_interfaces.msg._thrusters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Thrusters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rov_interfaces__msg__Thrusters * ros_message = (rov_interfaces__msg__Thrusters *)raw_ros_message;
  {  // upper_left
    PyObject * field = NULL;
    field = rov_interfaces__msg__thruster__convert_to_py(&ros_message->upper_left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "upper_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // upper_right
    PyObject * field = NULL;
    field = rov_interfaces__msg__thruster__convert_to_py(&ros_message->upper_right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "upper_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lower_right
    PyObject * field = NULL;
    field = rov_interfaces__msg__thruster__convert_to_py(&ros_message->lower_right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lower_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lower_left
    PyObject * field = NULL;
    field = rov_interfaces__msg__thruster__convert_to_py(&ros_message->lower_left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lower_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left
    PyObject * field = NULL;
    field = rov_interfaces__msg__thruster__convert_to_py(&ros_message->left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = rov_interfaces__msg__thruster__convert_to_py(&ros_message->right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
