# generated from rosidl_generator_py/resource/_idl.py.em
# with input from exercices:msg/ComputerInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputerInfo(type):
    """Metaclass of message 'ComputerInfo'."""

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
            module = import_type_support('exercices')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'exercices.msg.ComputerInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__computer_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__computer_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__computer_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__computer_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__computer_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputerInfo(metaclass=Metaclass_ComputerInfo):
    """Message class 'ComputerInfo'."""

    __slots__ = [
        '_computer_name',
        '_domain_id',
        '_counter',
    ]

    _fields_and_field_types = {
        'computer_name': 'string',
        'domain_id': 'int32',
        'counter': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.computer_name = kwargs.get('computer_name', str())
        self.domain_id = kwargs.get('domain_id', int())
        self.counter = kwargs.get('counter', int())

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
        if self.computer_name != other.computer_name:
            return False
        if self.domain_id != other.domain_id:
            return False
        if self.counter != other.counter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def computer_name(self):
        """Message field 'computer_name'."""
        return self._computer_name

    @computer_name.setter
    def computer_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'computer_name' field must be of type 'str'"
        self._computer_name = value

    @builtins.property
    def domain_id(self):
        """Message field 'domain_id'."""
        return self._domain_id

    @domain_id.setter
    def domain_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'domain_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'domain_id' field must be an integer in [-2147483648, 2147483647]"
        self._domain_id = value

    @builtins.property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'counter' field must be an integer in [-2147483648, 2147483647]"
        self._counter = value
