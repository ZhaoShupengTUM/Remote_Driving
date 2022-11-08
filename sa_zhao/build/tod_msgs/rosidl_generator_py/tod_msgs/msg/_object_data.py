# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tod_msgs:msg/ObjectData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectData(type):
    """Metaclass of message 'ObjectData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CLASSIFICATION_UNKNOWN': 0,
        'CLASSIFICATION_VEHICLE': 1,
        'CLASSIFICATION_VRU': 2,
        'CLASSIFICATION_ANIMAL': 3,
        'CLASSIFICATION_OTHER': 4,
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
                'tod_msgs.msg.ObjectData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CLASSIFICATION_UNKNOWN': cls.__constants['CLASSIFICATION_UNKNOWN'],
            'CLASSIFICATION_VEHICLE': cls.__constants['CLASSIFICATION_VEHICLE'],
            'CLASSIFICATION_VRU': cls.__constants['CLASSIFICATION_VRU'],
            'CLASSIFICATION_ANIMAL': cls.__constants['CLASSIFICATION_ANIMAL'],
            'CLASSIFICATION_OTHER': cls.__constants['CLASSIFICATION_OTHER'],
        }

    @property
    def CLASSIFICATION_UNKNOWN(self):
        """Message constant 'CLASSIFICATION_UNKNOWN'."""
        return Metaclass_ObjectData.__constants['CLASSIFICATION_UNKNOWN']

    @property
    def CLASSIFICATION_VEHICLE(self):
        """Message constant 'CLASSIFICATION_VEHICLE'."""
        return Metaclass_ObjectData.__constants['CLASSIFICATION_VEHICLE']

    @property
    def CLASSIFICATION_VRU(self):
        """Message constant 'CLASSIFICATION_VRU'."""
        return Metaclass_ObjectData.__constants['CLASSIFICATION_VRU']

    @property
    def CLASSIFICATION_ANIMAL(self):
        """Message constant 'CLASSIFICATION_ANIMAL'."""
        return Metaclass_ObjectData.__constants['CLASSIFICATION_ANIMAL']

    @property
    def CLASSIFICATION_OTHER(self):
        """Message constant 'CLASSIFICATION_OTHER'."""
        return Metaclass_ObjectData.__constants['CLASSIFICATION_OTHER']


class ObjectData(metaclass=Metaclass_ObjectData):
    """
    Message class 'ObjectData'.

    Constants:
      CLASSIFICATION_UNKNOWN
      CLASSIFICATION_VEHICLE
      CLASSIFICATION_VRU
      CLASSIFICATION_ANIMAL
      CLASSIFICATION_OTHER
    """

    __slots__ = [
        '_id',
        '_yaw_angle',
        '_dim_x',
        '_dim_y',
        '_dim_z',
        '_dist_center_x',
        '_dist_center_y',
        '_speed_x',
        '_speed_y',
        '_acceleration_x',
        '_acceleration_y',
        '_classification',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'yaw_angle': 'float',
        'dim_x': 'float',
        'dim_y': 'float',
        'dim_z': 'float',
        'dist_center_x': 'float',
        'dist_center_y': 'float',
        'speed_x': 'float',
        'speed_y': 'float',
        'acceleration_x': 'float',
        'acceleration_y': 'float',
        'classification': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.yaw_angle = kwargs.get('yaw_angle', float())
        self.dim_x = kwargs.get('dim_x', float())
        self.dim_y = kwargs.get('dim_y', float())
        self.dim_z = kwargs.get('dim_z', float())
        self.dist_center_x = kwargs.get('dist_center_x', float())
        self.dist_center_y = kwargs.get('dist_center_y', float())
        self.speed_x = kwargs.get('speed_x', float())
        self.speed_y = kwargs.get('speed_y', float())
        self.acceleration_x = kwargs.get('acceleration_x', float())
        self.acceleration_y = kwargs.get('acceleration_y', float())
        self.classification = kwargs.get('classification', int())

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
        if self.id != other.id:
            return False
        if self.yaw_angle != other.yaw_angle:
            return False
        if self.dim_x != other.dim_x:
            return False
        if self.dim_y != other.dim_y:
            return False
        if self.dim_z != other.dim_z:
            return False
        if self.dist_center_x != other.dist_center_x:
            return False
        if self.dist_center_y != other.dist_center_y:
            return False
        if self.speed_x != other.speed_x:
            return False
        if self.speed_y != other.speed_y:
            return False
        if self.acceleration_x != other.acceleration_x:
            return False
        if self.acceleration_y != other.acceleration_y:
            return False
        if self.classification != other.classification:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def yaw_angle(self):
        """Message field 'yaw_angle'."""
        return self._yaw_angle

    @yaw_angle.setter
    def yaw_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_angle' field must be of type 'float'"
        self._yaw_angle = value

    @property
    def dim_x(self):
        """Message field 'dim_x'."""
        return self._dim_x

    @dim_x.setter
    def dim_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dim_x' field must be of type 'float'"
        self._dim_x = value

    @property
    def dim_y(self):
        """Message field 'dim_y'."""
        return self._dim_y

    @dim_y.setter
    def dim_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dim_y' field must be of type 'float'"
        self._dim_y = value

    @property
    def dim_z(self):
        """Message field 'dim_z'."""
        return self._dim_z

    @dim_z.setter
    def dim_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dim_z' field must be of type 'float'"
        self._dim_z = value

    @property
    def dist_center_x(self):
        """Message field 'dist_center_x'."""
        return self._dist_center_x

    @dist_center_x.setter
    def dist_center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_center_x' field must be of type 'float'"
        self._dist_center_x = value

    @property
    def dist_center_y(self):
        """Message field 'dist_center_y'."""
        return self._dist_center_y

    @dist_center_y.setter
    def dist_center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_center_y' field must be of type 'float'"
        self._dist_center_y = value

    @property
    def speed_x(self):
        """Message field 'speed_x'."""
        return self._speed_x

    @speed_x.setter
    def speed_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_x' field must be of type 'float'"
        self._speed_x = value

    @property
    def speed_y(self):
        """Message field 'speed_y'."""
        return self._speed_y

    @speed_y.setter
    def speed_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_y' field must be of type 'float'"
        self._speed_y = value

    @property
    def acceleration_x(self):
        """Message field 'acceleration_x'."""
        return self._acceleration_x

    @acceleration_x.setter
    def acceleration_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_x' field must be of type 'float'"
        self._acceleration_x = value

    @property
    def acceleration_y(self):
        """Message field 'acceleration_y'."""
        return self._acceleration_y

    @acceleration_y.setter
    def acceleration_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_y' field must be of type 'float'"
        self._acceleration_y = value

    @property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'classification' field must be an unsigned integer in [0, 255]"
        self._classification = value
