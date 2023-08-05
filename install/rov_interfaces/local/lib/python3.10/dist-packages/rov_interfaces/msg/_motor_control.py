# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rov_interfaces:msg/MotorControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'thruster_speed'
# Member 'track_speed'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorControl(type):
    """Metaclass of message 'MotorControl'."""

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
                'rov_interfaces.msg.MotorControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorControl(metaclass=Metaclass_MotorControl):
    """Message class 'MotorControl'."""

    __slots__ = [
        '_thruster_speed',
        '_track_speed',
    ]

    _fields_and_field_types = {
        'thruster_speed': 'int16[6]',
        'track_speed': 'int16[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'thruster_speed' not in kwargs:
            self.thruster_speed = numpy.zeros(6, dtype=numpy.int16)
        else:
            self.thruster_speed = numpy.array(kwargs.get('thruster_speed'), dtype=numpy.int16)
            assert self.thruster_speed.shape == (6, )
        if 'track_speed' not in kwargs:
            self.track_speed = numpy.zeros(2, dtype=numpy.int16)
        else:
            self.track_speed = numpy.array(kwargs.get('track_speed'), dtype=numpy.int16)
            assert self.track_speed.shape == (2, )

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
        if all(self.thruster_speed != other.thruster_speed):
            return False
        if all(self.track_speed != other.track_speed):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def thruster_speed(self):
        """Message field 'thruster_speed'."""
        return self._thruster_speed

    @thruster_speed.setter
    def thruster_speed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'thruster_speed' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 6, \
                "The 'thruster_speed' numpy.ndarray() must have a size of 6"
            self._thruster_speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'thruster_speed' field must be a set or sequence with length 6 and each value of type 'int' and each integer in [-32768, 32767]"
        self._thruster_speed = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def track_speed(self):
        """Message field 'track_speed'."""
        return self._track_speed

    @track_speed.setter
    def track_speed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'track_speed' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 2, \
                "The 'track_speed' numpy.ndarray() must have a size of 2"
            self._track_speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'track_speed' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-32768, 32767]"
        self._track_speed = numpy.array(value, dtype=numpy.int16)
