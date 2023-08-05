# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rov_interfaces:msg/Thruster.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Thruster(type):
    """Metaclass of message 'Thruster'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rov_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rov_interfaces.msg.Thruster')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thruster
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thruster
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thruster
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thruster
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thruster

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Thruster(metaclass=Metaclass_Thruster):
    """Message class 'Thruster'."""

    __slots__ = [
        '_speed_rpm',
        '_given_voltage',
        '_given_current',
        '_controller_temperate',
        '_motor_temperate',
        '_motor_status',
    ]

    _fields_and_field_types = {
        'speed_rpm': 'uint16',
        'given_voltage': 'float',
        'given_current': 'float',
        'controller_temperate': 'uint8',
        'motor_temperate': 'uint8',
        'motor_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_rpm = kwargs.get('speed_rpm', int())
        self.given_voltage = kwargs.get('given_voltage', float())
        self.given_current = kwargs.get('given_current', float())
        self.controller_temperate = kwargs.get('controller_temperate', int())
        self.motor_temperate = kwargs.get('motor_temperate', int())
        self.motor_status = kwargs.get('motor_status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.speed_rpm != other.speed_rpm:
            return False
        if self.given_voltage != other.given_voltage:
            return False
        if self.given_current != other.given_current:
            return False
        if self.controller_temperate != other.controller_temperate:
            return False
        if self.motor_temperate != other.motor_temperate:
            return False
        if self.motor_status != other.motor_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_rpm(self):
        """Message field 'speed_rpm'."""
        return self._speed_rpm

    @speed_rpm.setter
    def speed_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_rpm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'speed_rpm' field must be an unsigned integer in [0, 65535]"
        self._speed_rpm = value

    @builtins.property
    def given_voltage(self):
        """Message field 'given_voltage'."""
        return self._given_voltage

    @given_voltage.setter
    def given_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'given_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'given_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._given_voltage = value

    @builtins.property
    def given_current(self):
        """Message field 'given_current'."""
        return self._given_current

    @given_current.setter
    def given_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'given_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'given_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._given_current = value

    @builtins.property
    def controller_temperate(self):
        """Message field 'controller_temperate'."""
        return self._controller_temperate

    @controller_temperate.setter
    def controller_temperate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_temperate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'controller_temperate' field must be an unsigned integer in [0, 255]"
        self._controller_temperate = value

    @builtins.property
    def motor_temperate(self):
        """Message field 'motor_temperate'."""
        return self._motor_temperate

    @motor_temperate.setter
    def motor_temperate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_temperate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_temperate' field must be an unsigned integer in [0, 255]"
        self._motor_temperate = value

    @builtins.property
    def motor_status(self):
        """Message field 'motor_status'."""
        return self._motor_status

    @motor_status.setter
    def motor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_status' field must be an unsigned integer in [0, 255]"
        self._motor_status = value
