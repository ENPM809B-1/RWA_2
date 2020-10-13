# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gazebo_msgs/SetLinkPropertiesRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class SetLinkPropertiesRequest(genpy.Message):
  _md5sum = "68ac74a4be01b165bc305b5ccdc45e91"
  _type = "gazebo_msgs/SetLinkPropertiesRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string link_name          # name of link
                          # link names are prefixed by model name, e.g. pr2::base_link
geometry_msgs/Pose com    # center of mass location in link frame
                          # and orientation of the moment of inertias
                          # relative to the link frame
bool gravity_mode         # set gravity mode on/off
float64 mass              # linear mass of link
float64 ixx               # moment of inertia
float64 ixy               # moment of inertia
float64 ixz               # moment of inertia
float64 iyy               # moment of inertia
float64 iyz               # moment of inertia
float64 izz               # moment of inertia

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['link_name','com','gravity_mode','mass','ixx','ixy','ixz','iyy','iyz','izz']
  _slot_types = ['string','geometry_msgs/Pose','bool','float64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       link_name,com,gravity_mode,mass,ixx,ixy,ixz,iyy,iyz,izz

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetLinkPropertiesRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.link_name is None:
        self.link_name = ''
      if self.com is None:
        self.com = geometry_msgs.msg.Pose()
      if self.gravity_mode is None:
        self.gravity_mode = False
      if self.mass is None:
        self.mass = 0.
      if self.ixx is None:
        self.ixx = 0.
      if self.ixy is None:
        self.ixy = 0.
      if self.ixz is None:
        self.ixz = 0.
      if self.iyy is None:
        self.iyy = 0.
      if self.iyz is None:
        self.iyz = 0.
      if self.izz is None:
        self.izz = 0.
    else:
      self.link_name = ''
      self.com = geometry_msgs.msg.Pose()
      self.gravity_mode = False
      self.mass = 0.
      self.ixx = 0.
      self.ixy = 0.
      self.ixz = 0.
      self.iyy = 0.
      self.iyz = 0.
      self.izz = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.link_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7dB7d().pack(_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.com is None:
        self.com = geometry_msgs.msg.Pose()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.link_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.link_name = str[start:end]
      _x = self
      start = end
      end += 113
      (_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz,) = _get_struct_7dB7d().unpack(str[start:end])
      self.gravity_mode = bool(self.gravity_mode)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.link_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7dB7d().pack(_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.com is None:
        self.com = geometry_msgs.msg.Pose()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.link_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.link_name = str[start:end]
      _x = self
      start = end
      end += 113
      (_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz,) = _get_struct_7dB7d().unpack(str[start:end])
      self.gravity_mode = bool(self.gravity_mode)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7dB7d = None
def _get_struct_7dB7d():
    global _struct_7dB7d
    if _struct_7dB7d is None:
        _struct_7dB7d = struct.Struct("<7dB7d")
    return _struct_7dB7d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gazebo_msgs/SetLinkPropertiesResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetLinkPropertiesResponse(genpy.Message):
  _md5sum = "2ec6f3eff0161f4257b808b12bc830c2"
  _type = "gazebo_msgs/SetLinkPropertiesResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success              # return true if get info is successful
string status_message     # comments if available

"""
  __slots__ = ['success','status_message']
  _slot_types = ['bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success,status_message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetLinkPropertiesResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
      if self.status_message is None:
        self.status_message = ''
    else:
      self.success = False
      self.status_message = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.status_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status_message = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.status_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.status_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status_message = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.status_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class SetLinkProperties(object):
  _type          = 'gazebo_msgs/SetLinkProperties'
  _md5sum = 'd534ce1b36ee99de0ffa806c3a6348f0'
  _request_class  = SetLinkPropertiesRequest
  _response_class = SetLinkPropertiesResponse
