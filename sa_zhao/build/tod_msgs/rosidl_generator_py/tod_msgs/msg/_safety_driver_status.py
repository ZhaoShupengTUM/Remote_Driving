# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tod_msgs:msg/SafetyDriverStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyDriverStatus(type):
    """Metaclass of message 'SafetyDriverStatus'."""

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
            module = import_type_support('tod_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tod_msgs.msg.SafetyDriverStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_driver_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_driver_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_driver_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_driver_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_driver_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SafetyDriverStatus(metaclass=Metaclass_SafetyDriverStatus):
    """Message class 'SafetyDriverStatus'."""

    __slots__ = [
        '_vehicle_emergency_stop_released',
        '_vehicle_long_approved',
        '_vehicle_lat_approved',
    ]

    _fields_and_field_types = {
        'vehicle_emergency_stop_released': 'boolean',
        'vehicle_long_approved': 'boolean',
        'vehicle_lat_approved': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_emergency_stop_released = kwargs.get('vehicle_emergency_stop_released', bool())
        self.vehicle_long_approved = kwargs.get('vehicle_long_approved', bool())
        self.vehicle_lat_approved = kwargs.get('vehicle_lat_approved', bool())

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
        if self.vehicle_emergency_stop_released != other.vehicle_emergency_stop_released:
            return False
        if self.vehicle_long_approved != other.vehicle_long_approved:
            return False
        if self.vehicle_lat_approved != other.vehicle_lat_approved:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vehicle_emergency_stop_released(self):
        """Message field 'vehicle_emergency_stop_released'."""
        return self._vehicle_emergency_stop_released

    @vehicle_emergency_stop_released.setter
    def vehicle_emergency_stop_released(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_emergency_stop_released' field must be of type 'bool'"
        self._vehicle_emergency_stop_released = value

    @property
    def vehicle_long_approved(self):
        """Message field 'vehicle_long_approved'."""
        return self._vehicle_long_approved

    @vehicle_long_approved.setter
    def vehicle_long_approved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_long_approved' field must be of type 'bool'"
        self._vehicle_long_approved = value

    @property
    def vehicle_lat_approved(self):
        """Message field 'vehicle_lat_approved'."""
        return self._vehicle_lat_approved

    @vehicle_lat_approved.setter
    def vehicle_lat_approved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_lat_approved' field must be of type 'bool'"
        self._vehicle_lat_approved = value
