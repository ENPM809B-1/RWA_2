// Generated by gencpp from file nist_gear/DetectShipmentRequest.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_DETECTSHIPMENTREQUEST_H
#define NIST_GEAR_MESSAGE_DETECTSHIPMENTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nist_gear
{
template <class ContainerAllocator>
struct DetectShipmentRequest_
{
  typedef DetectShipmentRequest_<ContainerAllocator> Type;

  DetectShipmentRequest_()
    {
    }
  DetectShipmentRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DetectShipmentRequest_

typedef ::nist_gear::DetectShipmentRequest_<std::allocator<void> > DetectShipmentRequest;

typedef boost::shared_ptr< ::nist_gear::DetectShipmentRequest > DetectShipmentRequestPtr;
typedef boost::shared_ptr< ::nist_gear::DetectShipmentRequest const> DetectShipmentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::DetectShipmentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace nist_gear

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::nist_gear::DetectShipmentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/DetectShipmentRequest";
  }

  static const char* value(const ::nist_gear::DetectShipmentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Detect shipment\n"
"# Called to ask a tray to report what products were placed on it\n"
;
  }

  static const char* value(const ::nist_gear::DetectShipmentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectShipmentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::DetectShipmentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::nist_gear::DetectShipmentRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_DETECTSHIPMENTREQUEST_H