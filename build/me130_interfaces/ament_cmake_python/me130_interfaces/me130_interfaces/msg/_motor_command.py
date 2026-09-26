# generated from rosidl_generator_py/resource/_idl.py.em
# with input from me130_interfaces:msg/MotorCommand.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommand(type):
    """Metaclass of message 'MotorCommand'."""

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
            module = import_type_support('me130_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'me130_interfaces.msg.MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_command

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


class MotorCommand(metaclass=Metaclass_MotorCommand):
    """Message class 'MotorCommand'."""

    __slots__ = [
        '_header',
        '_u',
        '_mode',
        '_freq_hz',
        '_amplitude',
        '_step_duty',
        '_segment',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'u': 'double',
        'mode': 'string',
        'freq_hz': 'double',
        'amplitude': 'double',
        'step_duty': 'double',
        'segment': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.u = kwargs.get('u', float())
        self.mode = kwargs.get('mode', str())
        self.freq_hz = kwargs.get('freq_hz', float())
        self.amplitude = kwargs.get('amplitude', float())
        self.step_duty = kwargs.get('step_duty', float())
        self.segment = kwargs.get('segment', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.u != other.u:
            return False
        if self.mode != other.mode:
            return False
        if self.freq_hz != other.freq_hz:
            return False
        if self.amplitude != other.amplitude:
            return False
        if self.step_duty != other.step_duty:
            return False
        if self.segment != other.segment:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def u(self):
        """Message field 'u'."""
        return self._u

    @u.setter
    def u(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'u' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'u' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._u = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def freq_hz(self):
        """Message field 'freq_hz'."""
        return self._freq_hz

    @freq_hz.setter
    def freq_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'freq_hz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'freq_hz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._freq_hz = value

    @builtins.property
    def amplitude(self):
        """Message field 'amplitude'."""
        return self._amplitude

    @amplitude.setter
    def amplitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'amplitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'amplitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._amplitude = value

    @builtins.property
    def step_duty(self):
        """Message field 'step_duty'."""
        return self._step_duty

    @step_duty.setter
    def step_duty(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'step_duty' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_duty' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_duty = value

    @builtins.property
    def segment(self):
        """Message field 'segment'."""
        return self._segment

    @segment.setter
    def segment(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'segment' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'segment' field must be an integer in [-2147483648, 2147483647]"
        self._segment = value
