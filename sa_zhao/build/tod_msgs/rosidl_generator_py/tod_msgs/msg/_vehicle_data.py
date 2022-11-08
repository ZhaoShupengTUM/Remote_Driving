# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tod_msgs:msg/VehicleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleData(type):
    """Metaclass of message 'VehicleData'."""

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
                'tod_msgs.msg.VehicleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_data

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleData(metaclass=Metaclass_VehicleData):
    """Message class 'VehicleData'."""

    __slots__ = [
        '_header',
        '_indicator',
        '_gear_position',
        '_honk',
        '_wiper',
        '_head_light',
        '_flash_light',
        '_steering_wheel_angle',
        '_curvature',
        '_engine_speed',
        '_longitudinal_speed',
        '_linear_acceleration',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'indicator': 'int8',
        'gear_position': 'int8',
        'honk': 'int8',
        'wiper': 'int8',
        'head_light': 'int8',
        'flash_light': 'int8',
        'steering_wheel_angle': 'float',
        'curvature': 'float',
        'engine_speed': 'float',
        'longitudinal_speed': 'float',
        'linear_acceleration': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.indicator = kwargs.get('indicator', int())
        self.gear_position = kwargs.get('gear_position', int())
        self.honk = kwargs.get('honk', int())
        self.wiper = kwargs.get('wiper', int())
        self.head_light = kwargs.get('head_light', int())
        self.flash_light = kwargs.get('flash_light', int())
        self.steering_wheel_angle = kwargs.get('steering_wheel_angle', float())
        self.curvature = kwargs.get('curvature', float())
        self.engine_speed = kwargs.get('engine_speed', float())
        self.longitudinal_speed = kwargs.get('longitudinal_speed', float())
        from geometry_msgs.msg import Vector3
        self.linear_acceleration = kwargs.get('linear_acceleration', Vector3())

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
        if self.indicator != other.indicator:
            return False
        if self.gear_position != other.gear_position:
            return False
        if self.honk != other.honk:
            return False
        if self.wiper != other.wiper:
            return False
        if self.head_light != other.head_light:
            return False
        if self.flash_light != other.flash_light:
            return False
        if self.steering_wheel_angle != other.steering_wheel_angle:
            return False
        if self.curvature != other.curvature:
            return False
        if self.engine_speed != other.engine_speed:
            return False
        if self.longitudinal_speed != other.longitudinal_speed:
            return False
        if self.linear_acceleration != other.linear_acceleration:
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
    def indicator(self):
        """Message field 'indicator'."""
        return self._indicator

    @indicator.setter
    def indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indicator' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'indicator' field must be an integer in [-128, 127]"
        self._indicator = value

    @property
    def gear_position(self):
        """Message field 'gear_position'."""
        return self._gear_position

    @gear_position.setter
    def gear_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_position' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gear_position' field must be an integer in [-128, 127]"
        self._gear_position = value

    @property
    def honk(self):
        """Message field 'honk'."""
        return self._honk

    @honk.setter
    def honk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'honk' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'honk' field must be an integer in [-128, 127]"
        self._honk = value

    @property
    def wiper(self):
        """Message field 'wiper'."""
        return self._wiper

    @wiper.setter
    def wiper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wiper' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'wiper' field must be an integer in [-128, 127]"
        self._wiper = value

    @property
    def head_light(self):
        """Message field 'head_light'."""
        return self._head_light

    @head_light.setter
    def head_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'head_light' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'head_light' field must be an integer in [-128, 127]"
        self._head_light = value

    @property
    def flash_light(self):
        """Message field 'flash_light'."""
        return self._flash_light

    @flash_light.setter
    def flash_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flash_light' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'flash_light' field must be an integer in [-128, 127]"
        self._flash_light = value

    @property
    def steering_wheel_angle(self):
        """Message field 'steering_wheel_angle'."""
        return self._steering_wheel_angle

    @steering_wheel_angle.setter
    def steering_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle' field must be of type 'float'"
        self._steering_wheel_angle = value

    @property
    def curvature(self):
        """Message field 'curvature'."""
        return self._curvature

    @curvature.setter
    def curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature' field must be of type 'float'"
        self._curvature = value

    @property
    def engine_speed(self):
        """Message field 'engine_speed'."""
        return self._engine_speed

    @engine_speed.setter
    def engine_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_speed' field must be of type 'float'"
        self._engine_speed = value

    @property
    def longitudinal_speed(self):
        """Message field 'longitudinal_speed'."""
        return self._longitudinal_speed

    @longitudinal_speed.setter
    def longitudinal_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_speed' field must be of type 'float'"
        self._longitudinal_speed = value

    @property
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_acceleration' field must be a sub message of type 'Vector3'"
        self._linear_acceleration = value
