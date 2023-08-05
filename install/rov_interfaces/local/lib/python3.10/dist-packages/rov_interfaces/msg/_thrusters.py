# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rov_interfaces:msg/Thrusters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Thrusters(type):
    """Metaclass of message 'Thrusters'."""

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
                'rov_interfaces.msg.Thrusters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thrusters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thrusters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thrusters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thrusters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thrusters

            from rov_interfaces.msg import Thruster
            if Thruster.__class__._TYPE_SUPPORT is None:
                Thruster.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Thrusters(metaclass=Metaclass_Thrusters):
    """Message class 'Thrusters'."""

    __slots__ = [
        '_upper_left',
        '_upper_right',
        '_lower_right',
        '_lower_left',
        '_left',
        '_right',
    ]

    _fields_and_field_types = {
        'upper_left': 'rov_interfaces/Thruster',
        'upper_right': 'rov_interfaces/Thruster',
        'lower_right': 'rov_interfaces/Thruster',
        'lower_left': 'rov_interfaces/Thruster',
        'left': 'rov_interfaces/Thruster',
        'right': 'rov_interfaces/Thruster',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rov_interfaces', 'msg'], 'Thruster'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rov_interfaces', 'msg'], 'Thruster'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rov_interfaces', 'msg'], 'Thruster'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rov_interfaces', 'msg'], 'Thruster'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rov_interfaces', 'msg'], 'Thruster'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rov_interfaces', 'msg'], 'Thruster'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rov_interfaces.msg import Thruster
        self.upper_left = kwargs.get('upper_left', Thruster())
        from rov_interfaces.msg import Thruster
        self.upper_right = kwargs.get('upper_right', Thruster())
        from rov_interfaces.msg import Thruster
        self.lower_right = kwargs.get('lower_right', Thruster())
        from rov_interfaces.msg import Thruster
        self.lower_left = kwargs.get('lower_left', Thruster())
        from rov_interfaces.msg import Thruster
        self.left = kwargs.get('left', Thruster())
        from rov_interfaces.msg import Thruster
        self.right = kwargs.get('right', Thruster())

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
        if self.upper_left != other.upper_left:
            return False
        if self.upper_right != other.upper_right:
            return False
        if self.lower_right != other.lower_right:
            return False
        if self.lower_left != other.lower_left:
            return False
        if self.left != other.left:
            return False
        if self.right != other.right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def upper_left(self):
        """Message field 'upper_left'."""
        return self._upper_left

    @upper_left.setter
    def upper_left(self, value):
        if __debug__:
            from rov_interfaces.msg import Thruster
            assert \
                isinstance(value, Thruster), \
                "The 'upper_left' field must be a sub message of type 'Thruster'"
        self._upper_left = value

    @builtins.property
    def upper_right(self):
        """Message field 'upper_right'."""
        return self._upper_right

    @upper_right.setter
    def upper_right(self, value):
        if __debug__:
            from rov_interfaces.msg import Thruster
            assert \
                isinstance(value, Thruster), \
                "The 'upper_right' field must be a sub message of type 'Thruster'"
        self._upper_right = value

    @builtins.property
    def lower_right(self):
        """Message field 'lower_right'."""
        return self._lower_right

    @lower_right.setter
    def lower_right(self, value):
        if __debug__:
            from rov_interfaces.msg import Thruster
            assert \
                isinstance(value, Thruster), \
                "The 'lower_right' field must be a sub message of type 'Thruster'"
        self._lower_right = value

    @builtins.property
    def lower_left(self):
        """Message field 'lower_left'."""
        return self._lower_left

    @lower_left.setter
    def lower_left(self, value):
        if __debug__:
            from rov_interfaces.msg import Thruster
            assert \
                isinstance(value, Thruster), \
                "The 'lower_left' field must be a sub message of type 'Thruster'"
        self._lower_left = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            from rov_interfaces.msg import Thruster
            assert \
                isinstance(value, Thruster), \
                "The 'left' field must be a sub message of type 'Thruster'"
        self._left = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            from rov_interfaces.msg import Thruster
            assert \
                isinstance(value, Thruster), \
                "The 'right' field must be a sub message of type 'Thruster'"
        self._right = value
