// Generated by gencpp from file nist_gear/Order.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_ORDER_H
#define NIST_GEAR_MESSAGE_ORDER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nist_gear/Shipment.h>

namespace nist_gear
{
template <class ContainerAllocator>
struct Order_
{
  typedef Order_<ContainerAllocator> Type;

  Order_()
    : order_id()
    , shipments()  {
    }
  Order_(const ContainerAllocator& _alloc)
    : order_id(_alloc)
    , shipments(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _order_id_type;
  _order_id_type order_id;

   typedef std::vector< ::nist_gear::Shipment_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nist_gear::Shipment_<ContainerAllocator> >::other >  _shipments_type;
  _shipments_type shipments;





  typedef boost::shared_ptr< ::nist_gear::Order_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::Order_<ContainerAllocator> const> ConstPtr;

}; // struct Order_

typedef ::nist_gear::Order_<std::allocator<void> > Order;

typedef boost::shared_ptr< ::nist_gear::Order > OrderPtr;
typedef boost::shared_ptr< ::nist_gear::Order const> OrderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::Order_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::Order_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nist_gear::Order_<ContainerAllocator1> & lhs, const ::nist_gear::Order_<ContainerAllocator2> & rhs)
{
  return lhs.order_id == rhs.order_id &&
    lhs.shipments == rhs.shipments;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nist_gear::Order_<ContainerAllocator1> & lhs, const ::nist_gear::Order_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nist_gear

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::Order_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::Order_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::Order_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::Order_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::Order_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::Order_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::Order_<ContainerAllocator> >
{
  static const char* value()
  {
    return "37a37d6e765c675eee7c113bc580da11";
  }

  static const char* value(const ::nist_gear::Order_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x37a37d6e765c675eULL;
  static const uint64_t static_value2 = 0xee7c113bc580da11ULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::Order_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/Order";
  }

  static const char* value(const ::nist_gear::Order_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::Order_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Order message\n"
"# This structure contains the information of an order.\n"
"\n"
"# ID of the order\n"
"string order_id\n"
"\n"
"# Collection of shipments\n"
"Shipment[] shipments\n"
"\n"
"================================================================================\n"
"MSG: nist_gear/Shipment\n"
"# Shipment message\n"
"# This structure contains the information of shipment.\n"
"\n"
"# The type of shipment\n"
"string shipment_type\n"
"\n"
"# ID used to say which AGV the shipment must be delivered to\n"
"# Possible values are \"agv1\", \"agv2\", or \"any\"\n"
"string agv_id\n"
"\n"
"# Collection of products\n"
"Product[] products\n"
"\n"
"================================================================================\n"
"MSG: nist_gear/Product\n"
"# Product message\n"
"# This structure contains the information of an product contained in a shipment.\n"
"\n"
"# Product type\n"
"string type\n"
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

  static const char* value(const ::nist_gear::Order_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::Order_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.order_id);
      stream.next(m.shipments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Order_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::Order_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nist_gear::Order_<ContainerAllocator>& v)
  {
    s << indent << "order_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.order_id);
    s << indent << "shipments[]" << std::endl;
    for (size_t i = 0; i < v.shipments.size(); ++i)
    {
      s << indent << "  shipments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nist_gear::Shipment_<ContainerAllocator> >::stream(s, indent + "    ", v.shipments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_ORDER_H