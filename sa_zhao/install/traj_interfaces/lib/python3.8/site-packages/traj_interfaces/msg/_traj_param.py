# generated from rosidl_generator_py/resource/_idl.py.em
# with input from traj_interfaces:msg/TrajParam.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajParam(type):
    """Metaclass of message 'TrajParam'."""

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
            module = import_type_support('traj_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'traj_interfaces.msg.TrajParam')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traj_param
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traj_param
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traj_param
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traj_param
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traj_param

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajParam(metaclass=Metaclass_TrajParam):
    """Message class 'TrajParam'."""

    __slots__ = [
        '_lenkrad',
        '_pedal',
        '_taster_confirm',
        '_r_gear',
    ]

    _fields_and_field_types = {
        'lenkrad': 'double',
        'pedal': 'double',
        'taster_confirm': 'boolean',
        'r_gear': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lenkrad = kwargs.get('lenkrad', float())
        self.pedal = kwargs.get('pedal', float())
        self.taster_confirm = kwargs.get('taster_confirm', bool())
        self.r_gear = kwargs.get('r_gear', bool())

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
        if self.lenkrad != other.lenkrad:
            return False
        if self.pedal != other.pedal:
            return False
        if self.taster_confirm != other.taster_confirm:
            return False
        if self.r_gear != other.r_gear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lenkrad(self):
        """Message field 'lenkrad'."""
        return self._lenkrad

    @lenkrad.setter
    def lenkrad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lenkrad' field must be of type 'float'"
        self._lenkrad = value

    @property
    def pedal(self):
        """Message field 'pedal'."""
        return self._pedal

    @pedal.setter
    def pedal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pedal' field must be of type 'float'"
        self._pedal = value

    @property
    def taster_confirm(self):
        """Message field 'taster_confirm'."""
        return self._taster_confirm

    @taster_confirm.setter
    def taster_confirm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'taster_confirm' field must be of type 'bool'"
        self._taster_confirm = value

    @property
    def r_gear(self):
        """Message field 'r_gear'."""
        return self._r_gear

    @r_gear.setter
    def r_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'r_gear' field must be of type 'bool'"
        self._r_gear = value
