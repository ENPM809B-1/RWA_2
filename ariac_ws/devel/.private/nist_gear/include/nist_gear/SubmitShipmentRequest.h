// Generated by gencpp from file nist_gear/SubmitShipmentRequest.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_SUBMITSHIPMENTREQUEST_H
#define NIST_GEAR_MESSAGE_SUBMITSHIPMENTREQUEST_H


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
struct SubmitShipmentRequest_
{
  typedef SubmitShipmentRequest_<ContainerAllocator> Type;

  SubmitShipmentRequest_()
    : destination_id()
    , shipment_type()  {
    }
  SubmitShipmentRequest_(const ContainerAllocator& _alloc)
    : destination_id(_alloc)
    , shipment_type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _destination_id_type;
  _destination_id_type destination_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _shipment_type_type;
  _shipment_type_type shipment_type;





  typedef boost::shared_ptr< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SubmitShipmentRequest_

typedef ::nist_gear::SubmitShipmentRequest_<std::allocator<void> > SubmitShipmentRequest;

typedef boost::shared_ptr< ::nist_gear::SubmitShipmentRequest > SubmitShipmentRequestPtr;
typedef boost::shared_ptr< ::nist_gear::SubmitShipmentRequest const> SubmitShipmentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator1> & lhs, const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator2> & rhs)
{
  return lhs.destination_id == rhs.destination_id &&
    lhs.shipment_type == rhs.shipment_type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator1> & lhs, const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nist_gear

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bdb6c31456a709fb83a7e895b1c51bb2";
  }

  static const char* value(const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbdb6c31456a709fbULL;
  static const uint64_t static_value2 = 0x83a7e895b1c51bb2ULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/SubmitShipmentRequest";
  }

  static const char* value(const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ID used to say which tray or AGV this is\n"
"# allowed values are \"1\", or \"2\" to indicate which agv\n"
"# or the name of the tray on the agv\n"
"string destination_id\n"
"# ID used to say which order and shipment this is\n"
"string shipment_type\n"
"\n"
;
  }

  static const char* value(const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.destination_id);
      stream.next(m.shipment_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubmitShipmentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::SubmitShipmentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nist_gear::SubmitShipmentRequest_<ContainerAllocator>& v)
  {
    s << indent << "destination_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.destination_id);
    s << indent << "shipment_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.shipment_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_SUBMITSHIPMENTREQUEST_H