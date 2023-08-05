# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rov_interfaces:msg/CabinState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CabinState(type):
    """Metaclass of message 'CabinState'."""

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
                'rov_interfaces.msg.CabinState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cabin_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cabin_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cabin_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cabin_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cabin_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CabinState(metaclass=Metaclass_CabinState):
    """Message class 'CabinState'."""

    __slots__ = [
        '_cabin_temperature',
        '_cabin_humidity',
        '_cabin_water_level',
        '_cpu_temperature',
    ]

    _fields_and_field_types = {
        'cabin_temperature': 'float',
        'cabin_humidity': 'float',
        'cabin_water_level': 'float',
        'cpu_temperature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cabin_temperature = kwargs.get('cabin_temperature', float())
        self.cabin_humidity = kwargs.get('cabin_humidity', float())
        self.cabin_water_level = kwargs.get('cabin_water_level', float())
        self.cpu_temperature = kwargs.get('cpu_temperature', float())

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
        if self.cabin_temperature != other.cabin_temperature:
            return False
        if self.cabin_humidity != other.cabin_humidity:
            return False
        if self.cabin_water_level != other.cabin_water_level:
            return False
        if self.cpu_temperature != other.cpu_temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cabin_temperature(self):
        """Message field 'cabin_temperature'."""
        return self._cabin_temperature

    @cabin_temperature.setter
    def cabin_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cabin_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cabin_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cabin_temperature = value

    @builtins.property
    def cabin_humidity(self):
        """Message field 'cabin_humidity'."""
        return self._cabin_humidity

    @cabin_humidity.setter
    def cabin_humidity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cabin_humidity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cabin_humidity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cabin_humidity = value

    @builtins.property
    def cabin_water_level(self):
        """Message field 'cabin_water_level'."""
        return self._cabin_water_level

    @cabin_water_level.setter
    def cabin_water_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cabin_water_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cabin_water_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cabin_water_level = value

    @builtins.property
    def cpu_temperature(self):
        """Message field 'cpu_temperature'."""
        return self._cpu_temperature

    @cpu_temperature.setter
    def cpu_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_temperature = value
