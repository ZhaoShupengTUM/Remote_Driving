# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tod_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROL_MODE_DIRECT': 0,
        'CONTROL_MODE_SHARED': 1,
        'CONTROL_MODE_WAYPOINT': 2,
        'CONTROL_MODE_PATH_GUIDANCE': 3,
        'CONTROL_MODE_PERCEPTION_MODIFICATION': 4,
        'CONTROL_MODE_SAFECORRIDOR': 5,
        'CONTROL_MODE_NONE': 99,
        'VIDEO_RATE_CONTROL_MODE_SINGLE': 0,
        'VIDEO_RATE_CONTROL_MODE_COLLECTIVE': 1,
        'VIDEO_RATE_CONTROL_MODE_AUTOMATIC': 2,
        'TOD_STATUS_IDLE': 0,
        'TOD_STATUS_UPLINK_ONLY': 1,
        'TOD_STATUS_TELEOPERATION': 2,
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
                'tod_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROL_MODE_DIRECT': cls.__constants['CONTROL_MODE_DIRECT'],
            'CONTROL_MODE_SHARED': cls.__constants['CONTROL_MODE_SHARED'],
            'CONTROL_MODE_WAYPOINT': cls.__constants['CONTROL_MODE_WAYPOINT'],
            'CONTROL_MODE_PATH_GUIDANCE': cls.__constants['CONTROL_MODE_PATH_GUIDANCE'],
            'CONTROL_MODE_PERCEPTION_MODIFICATION': cls.__constants['CONTROL_MODE_PERCEPTION_MODIFICATION'],
            'CONTROL_MODE_SAFECORRIDOR': cls.__constants['CONTROL_MODE_SAFECORRIDOR'],
            'CONTROL_MODE_NONE': cls.__constants['CONTROL_MODE_NONE'],
            'VIDEO_RATE_CONTROL_MODE_SINGLE': cls.__constants['VIDEO_RATE_CONTROL_MODE_SINGLE'],
            'VIDEO_RATE_CONTROL_MODE_COLLECTIVE': cls.__constants['VIDEO_RATE_CONTROL_MODE_COLLECTIVE'],
            'VIDEO_RATE_CONTROL_MODE_AUTOMATIC': cls.__constants['VIDEO_RATE_CONTROL_MODE_AUTOMATIC'],
            'TOD_STATUS_IDLE': cls.__constants['TOD_STATUS_IDLE'],
            'TOD_STATUS_UPLINK_ONLY': cls.__constants['TOD_STATUS_UPLINK_ONLY'],
            'TOD_STATUS_TELEOPERATION': cls.__constants['TOD_STATUS_TELEOPERATION'],
        }

    @property
    def CONTROL_MODE_DIRECT(self):
        """Message constant 'CONTROL_MODE_DIRECT'."""
        return Metaclass_Status.__constants['CONTROL_MODE_DIRECT']

    @property
    def CONTROL_MODE_SHARED(self):
        """Message constant 'CONTROL_MODE_SHARED'."""
        return Metaclass_Status.__constants['CONTROL_MODE_SHARED']

    @property
    def CONTROL_MODE_WAYPOINT(self):
        """Message constant 'CONTROL_MODE_WAYPOINT'."""
        return Metaclass_Status.__constants['CONTROL_MODE_WAYPOINT']

    @property
    def CONTROL_MODE_PATH_GUIDANCE(self):
        """Message constant 'CONTROL_MODE_PATH_GUIDANCE'."""
        return Metaclass_Status.__constants['CONTROL_MODE_PATH_GUIDANCE']

    @property
    def CONTROL_MODE_PERCEPTION_MODIFICATION(self):
        """Message constant 'CONTROL_MODE_PERCEPTION_MODIFICATION'."""
        return Metaclass_Status.__constants['CONTROL_MODE_PERCEPTION_MODIFICATION']

    @property
    def CONTROL_MODE_SAFECORRIDOR(self):
        """Message constant 'CONTROL_MODE_SAFECORRIDOR'."""
        return Metaclass_Status.__constants['CONTROL_MODE_SAFECORRIDOR']

    @property
    def CONTROL_MODE_NONE(self):
        """Message constant 'CONTROL_MODE_NONE'."""
        return Metaclass_Status.__constants['CONTROL_MODE_NONE']

    @property
    def VIDEO_RATE_CONTROL_MODE_SINGLE(self):
        """Message constant 'VIDEO_RATE_CONTROL_MODE_SINGLE'."""
        return Metaclass_Status.__constants['VIDEO_RATE_CONTROL_MODE_SINGLE']

    @property
    def VIDEO_RATE_CONTROL_MODE_COLLECTIVE(self):
        """Message constant 'VIDEO_RATE_CONTROL_MODE_COLLECTIVE'."""
        return Metaclass_Status.__constants['VIDEO_RATE_CONTROL_MODE_COLLECTIVE']

    @property
    def VIDEO_RATE_CONTROL_MODE_AUTOMATIC(self):
        """Message constant 'VIDEO_RATE_CONTROL_MODE_AUTOMATIC'."""
        return Metaclass_Status.__constants['VIDEO_RATE_CONTROL_MODE_AUTOMATIC']

    @property
    def TOD_STATUS_IDLE(self):
        """Message constant 'TOD_STATUS_IDLE'."""
        return Metaclass_Status.__constants['TOD_STATUS_IDLE']

    @property
    def TOD_STATUS_UPLINK_ONLY(self):
        """Message constant 'TOD_STATUS_UPLINK_ONLY'."""
        return Metaclass_Status.__constants['TOD_STATUS_UPLINK_ONLY']

    @property
    def TOD_STATUS_TELEOPERATION(self):
        """Message constant 'TOD_STATUS_TELEOPERATION'."""
        return Metaclass_Status.__constants['TOD_STATUS_TELEOPERATION']


class Status(metaclass=Metaclass_Status):
    """
    Message class 'Status'.

    Constants:
      CONTROL_MODE_DIRECT
      CONTROL_MODE_SHARED
      CONTROL_MODE_WAYPOINT
      CONTROL_MODE_PATH_GUIDANCE
      CONTROL_MODE_PERCEPTION_MODIFICATION
      CONTROL_MODE_SAFECORRIDOR
      CONTROL_MODE_NONE
      VIDEO_RATE_CONTROL_MODE_SINGLE
      VIDEO_RATE_CONTROL_MODE_COLLECTIVE
      VIDEO_RATE_CONTROL_MODE_AUTOMATIC
      TOD_STATUS_IDLE
      TOD_STATUS_UPLINK_ONLY
      TOD_STATUS_TELEOPERATION
    """

    __slots__ = [
        '_header',
        '_operator_ip_address',
        '_operator_control_mode',
        '_operator_video_rate_mode',
        '_tod_status',
        '_vehicle_ip_address',
        '_vehicle_emergency_stop_released',
        '_vehicle_long_approved',
        '_vehicle_lat_approved',
        '_vehicle_control_mode',
        '_vehicle_nav_status',
        '_vehicle_gps_pos_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'operator_ip_address': 'string',
        'operator_control_mode': 'uint8',
        'operator_video_rate_mode': 'uint8',
        'tod_status': 'uint8',
        'vehicle_ip_address': 'string',
        'vehicle_emergency_stop_released': 'boolean',
        'vehicle_long_approved': 'boolean',
        'vehicle_lat_approved': 'boolean',
        'vehicle_control_mode': 'uint8',
        'vehicle_nav_status': 'string',
        'vehicle_gps_pos_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.operator_ip_address = kwargs.get('operator_ip_address', str())
        self.operator_control_mode = kwargs.get('operator_control_mode', int())
        self.operator_video_rate_mode = kwargs.get('operator_video_rate_mode', int())
        self.tod_status = kwargs.get('tod_status', int())
        self.vehicle_ip_address = kwargs.get('vehicle_ip_address', str())
        self.vehicle_emergency_stop_released = kwargs.get('vehicle_emergency_stop_released', bool())
        self.vehicle_long_approved = kwargs.get('vehicle_long_approved', bool())
        self.vehicle_lat_approved = kwargs.get('vehicle_lat_approved', bool())
        self.vehicle_control_mode = kwargs.get('vehicle_control_mode', int())
        self.vehicle_nav_status = kwargs.get('vehicle_nav_status', str())
        self.vehicle_gps_pos_type = kwargs.get('vehicle_gps_pos_type', str())

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
        if self.header != other.header:
            return False
        if self.operator_ip_address != other.operator_ip_address:
            return False
        if self.operator_control_mode != other.operator_control_mode:
            return False
        if self.operator_video_rate_mode != other.operator_video_rate_mode:
            return False
        if self.tod_status != other.tod_status:
            return False
        if self.vehicle_ip_address != other.vehicle_ip_address:
            return False
        if self.vehicle_emergency_stop_released != other.vehicle_emergency_stop_released:
            return False
        if self.vehicle_long_approved != other.vehicle_long_approved:
            return False
        if self.vehicle_lat_approved != other.vehicle_lat_approved:
            return False
        if self.vehicle_control_mode != other.vehicle_control_mode:
            return False
        if self.vehicle_nav_status != other.vehicle_nav_status:
            return False
        if self.vehicle_gps_pos_type != other.vehicle_gps_pos_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def operator_ip_address(self):
        """Message field 'operator_ip_address'."""
        return self._operator_ip_address

    @operator_ip_address.setter
    def operator_ip_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operator_ip_address' field must be of type 'str'"
        self._operator_ip_address = value

    @property
    def operator_control_mode(self):
        """Message field 'operator_control_mode'."""
        return self._operator_control_mode

    @operator_control_mode.setter
    def operator_control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operator_control_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operator_control_mode' field must be an unsigned integer in [0, 255]"
        self._operator_control_mode = value

    @property
    def operator_video_rate_mode(self):
        """Message field 'operator_video_rate_mode'."""
        return self._operator_video_rate_mode

    @operator_video_rate_mode.setter
    def operator_video_rate_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operator_video_rate_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operator_video_rate_mode' field must be an unsigned integer in [0, 255]"
        self._operator_video_rate_mode = value

    @property
    def tod_status(self):
        """Message field 'tod_status'."""
        return self._tod_status

    @tod_status.setter
    def tod_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tod_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tod_status' field must be an unsigned integer in [0, 255]"
        self._tod_status = value

    @property
    def vehicle_ip_address(self):
        """Message field 'vehicle_ip_address'."""
        return self._vehicle_ip_address

    @vehicle_ip_address.setter
    def vehicle_ip_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_ip_address' field must be of type 'str'"
        self._vehicle_ip_address = value

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

    @property
    def vehicle_control_mode(self):
        """Message field 'vehicle_control_mode'."""
        return self._vehicle_control_mode

    @vehicle_control_mode.setter
    def vehicle_control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_control_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_control_mode' field must be an unsigned integer in [0, 255]"
        self._vehicle_control_mode = value

    @property
    def vehicle_nav_status(self):
        """Message field 'vehicle_nav_status'."""
        return self._vehicle_nav_status

    @vehicle_nav_status.setter
    def vehicle_nav_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_nav_status' field must be of type 'str'"
        self._vehicle_nav_status = value

    @property
    def vehicle_gps_pos_type(self):
        """Message field 'vehicle_gps_pos_type'."""
        return self._vehicle_gps_pos_type

    @vehicle_gps_pos_type.setter
    def vehicle_gps_pos_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_gps_pos_type' field must be of type 'str'"
        self._vehicle_gps_pos_type = value
