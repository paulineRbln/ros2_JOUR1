# generated from rosidl_generator_py/resource/_idl.py.em
# with input from exercices:srv/ControlClient.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlClient_Request(type):
    """Metaclass of message 'ControlClient_Request'."""

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
                'exercices.srv.ControlClient_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_client__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_client__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_client__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_client__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_client__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlClient_Request(metaclass=Metaclass_ControlClient_Request):
    """Message class 'ControlClient_Request'."""

    __slots__ = [
        '_bon_ordi',
        '_ordi_serveur',
        '_bon_domain',
        '_domain_serveur',
    ]

    _fields_and_field_types = {
        'bon_ordi': 'string',
        'ordi_serveur': 'string',
        'bon_domain': 'int32',
        'domain_serveur': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bon_ordi = kwargs.get('bon_ordi', str())
        self.ordi_serveur = kwargs.get('ordi_serveur', str())
        self.bon_domain = kwargs.get('bon_domain', int())
        self.domain_serveur = kwargs.get('domain_serveur', int())

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
        if self.bon_ordi != other.bon_ordi:
            return False
        if self.ordi_serveur != other.ordi_serveur:
            return False
        if self.bon_domain != other.bon_domain:
            return False
        if self.domain_serveur != other.domain_serveur:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bon_ordi(self):
        """Message field 'bon_ordi'."""
        return self._bon_ordi

    @bon_ordi.setter
    def bon_ordi(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bon_ordi' field must be of type 'str'"
        self._bon_ordi = value

    @builtins.property
    def ordi_serveur(self):
        """Message field 'ordi_serveur'."""
        return self._ordi_serveur

    @ordi_serveur.setter
    def ordi_serveur(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ordi_serveur' field must be of type 'str'"
        self._ordi_serveur = value

    @builtins.property
    def bon_domain(self):
        """Message field 'bon_domain'."""
        return self._bon_domain

    @bon_domain.setter
    def bon_domain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bon_domain' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bon_domain' field must be an integer in [-2147483648, 2147483647]"
        self._bon_domain = value

    @builtins.property
    def domain_serveur(self):
        """Message field 'domain_serveur'."""
        return self._domain_serveur

    @domain_serveur.setter
    def domain_serveur(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'domain_serveur' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'domain_serveur' field must be an integer in [-2147483648, 2147483647]"
        self._domain_serveur = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlClient_Response(type):
    """Metaclass of message 'ControlClient_Response'."""

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
                'exercices.srv.ControlClient_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_client__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_client__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_client__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_client__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_client__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlClient_Response(metaclass=Metaclass_ControlClient_Response):
    """Message class 'ControlClient_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_ControlClient(type):
    """Metaclass of service 'ControlClient'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('exercices')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'exercices.srv.ControlClient')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_client

            from exercices.srv import _control_client
            if _control_client.Metaclass_ControlClient_Request._TYPE_SUPPORT is None:
                _control_client.Metaclass_ControlClient_Request.__import_type_support__()
            if _control_client.Metaclass_ControlClient_Response._TYPE_SUPPORT is None:
                _control_client.Metaclass_ControlClient_Response.__import_type_support__()


class ControlClient(metaclass=Metaclass_ControlClient):
    from exercices.srv._control_client import ControlClient_Request as Request
    from exercices.srv._control_client import ControlClient_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
