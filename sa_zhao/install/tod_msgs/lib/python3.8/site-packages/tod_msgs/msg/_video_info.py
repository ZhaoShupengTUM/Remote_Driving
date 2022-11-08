# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tod_msgs:msg/VideoInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VideoInfo(type):
    """Metaclass of message 'VideoInfo'."""

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
                'tod_msgs.msg.VideoInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__video_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__video_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__video_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__video_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__video_info

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


class VideoInfo(metaclass=Metaclass_VideoInfo):
    """Message class 'VideoInfo'."""

    __slots__ = [
        '_header',
        '_kbitrate',
        '_framerate',
        '_image_height',
        '_image_width',
        '_image_nof_pixel',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'kbitrate': 'uint32',
        'framerate': 'uint32',
        'image_height': 'uint32',
        'image_width': 'uint32',
        'image_nof_pixel': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.kbitrate = kwargs.get('kbitrate', int())
        self.framerate = kwargs.get('framerate', int())
        self.image_height = kwargs.get('image_height', int())
        self.image_width = kwargs.get('image_width', int())
        self.image_nof_pixel = kwargs.get('image_nof_pixel', int())

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
        if self.kbitrate != other.kbitrate:
            return False
        if self.framerate != other.framerate:
            return False
        if self.image_height != other.image_height:
            return False
        if self.image_width != other.image_width:
            return False
        if self.image_nof_pixel != other.image_nof_pixel:
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
    def kbitrate(self):
        """Message field 'kbitrate'."""
        return self._kbitrate

    @kbitrate.setter
    def kbitrate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kbitrate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'kbitrate' field must be an unsigned integer in [0, 4294967295]"
        self._kbitrate = value

    @property
    def framerate(self):
        """Message field 'framerate'."""
        return self._framerate

    @framerate.setter
    def framerate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framerate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'framerate' field must be an unsigned integer in [0, 4294967295]"
        self._framerate = value

    @property
    def image_height(self):
        """Message field 'image_height'."""
        return self._image_height

    @image_height.setter
    def image_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'image_height' field must be an unsigned integer in [0, 4294967295]"
        self._image_height = value

    @property
    def image_width(self):
        """Message field 'image_width'."""
        return self._image_width

    @image_width.setter
    def image_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'image_width' field must be an unsigned integer in [0, 4294967295]"
        self._image_width = value

    @property
    def image_nof_pixel(self):
        """Message field 'image_nof_pixel'."""
        return self._image_nof_pixel

    @image_nof_pixel.setter
    def image_nof_pixel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_nof_pixel' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'image_nof_pixel' field must be an unsigned integer in [0, 4294967295]"
        self._image_nof_pixel = value
