// Generated by gencpp from file nist_gear/DetectShipmentResponse.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_DETECTSHIPMENTRESPONSE_H
#define NIST_GEAR_MESSAGE_DETECTSHIPMENTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nist_gear/DetectedShipment.h>

namespace nist_gear
{
template <class ContainerAllocator>
struct DetectShipmentResponse_
{
  typedef DetectShipmentResponse_<ContainerAllocator> Type;

  DetectShipmentResponse_()
    : shipment()  {
    }
  DetectShipmentResponse_(const ContainerAllocator& _alloc)
    : shipment(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nist_gear::DetectedShipment_<ContainerAllocator>  _shipment_type;
  _shipment_type shipment;





  typedef boost::shared_ptr< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DetectShipmentResponse_

typedef ::nist_gear::DetectShipmentResponse_<std::allocator<void> > DetectShipmentResponse;

typedef boost::shared_ptr< ::nist_gear::DetectShipmentResponse > DetectShipmentResponsePtr;
typedef boost::shared_ptr< ::nist_gear::DetectShipmentResponse const> DetectShipmentResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::DetectShipmentResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nist_gear::DetectShipmentResponse_<ContainerAllocator1> & lhs, const ::nist_gear::DetectShipmentResponse_<ContainerAllocator2> & rhs)
{
  return lhs.shipment == rhs.shipment;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nist_gear::DetectShipmentResponse_<ContainerAllocator1> & lhs, const ::nist_gear::DetectShipmentResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nist_gear

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f1cde41b69fdae4a3f7f6ab4fbc94332";
  }

  static const char* value(const ::nist_gear::DetectShipmentResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf1cde41b69fdae4aULL;
  static const uint64_t static_value2 = 0x3f7f6ab4fbc94332ULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/DetectShipmentResponse";
  }

  static const char* value(const ::nist_gear::DetectShipmentResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# What was detected in the tray\n"
"DetectedShipment shipment\n"
"\n"
"\n"
"================================================================================\n"
"MSG: nist_gear/DetectedShipment\n"
"# Shipment contents message\n"
"# This structure contains the information about a shipment being submitted\n"
"\n"
"# The ID of the shipping_box or tray the shipment was detected in\n"
"string destination_id\n"
"\n"
"# Collection of products\n"
"DetectedProduct[] products\n"
"\n"
"================================================================================\n"
"MSG: nist_gear/DetectedProduct\n"
"# DetectedProduct message\n"
"# This structure contains the information of a detected product.\n"
"\n"
"# Product type\n"
"string type\n"
"\n"
"# Whether or not the product is faulty\n"
"bool is_faulty\n"
"\n"
"# Target pose\n"
"geometry_msgs/Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::nist_gear::DetectShipmentResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.shipment);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectShipmentResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::DetectShipmentResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nist_gear::DetectShipmentResponse_<ContainerAllocator>& v)
  {
    s << indent << "shipment: ";
    s << std::endl;
    Printer< ::nist_gear::DetectedShipment_<ContainerAllocator> >::stream(s, indent + "  ", v.shipment);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_DETECTSHIPMENTRESPONSE_H