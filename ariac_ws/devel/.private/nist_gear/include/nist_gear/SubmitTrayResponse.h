// Generated by gencpp from file nist_gear/SubmitTrayResponse.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_SUBMITTRAYRESPONSE_H
#define NIST_GEAR_MESSAGE_SUBMITTRAYRESPONSE_H


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
struct SubmitTrayResponse_
{
  typedef SubmitTrayResponse_<ContainerAllocator> Type;

  SubmitTrayResponse_()
    : success(false)
    , inspection_result(0.0)  {
    }
  SubmitTrayResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , inspection_result(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef float _inspection_result_type;
  _inspection_result_type inspection_result;





  typedef boost::shared_ptr< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SubmitTrayResponse_

typedef ::nist_gear::SubmitTrayResponse_<std::allocator<void> > SubmitTrayResponse;

typedef boost::shared_ptr< ::nist_gear::SubmitTrayResponse > SubmitTrayResponsePtr;
typedef boost::shared_ptr< ::nist_gear::SubmitTrayResponse const> SubmitTrayResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::SubmitTrayResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nist_gear::SubmitTrayResponse_<ContainerAllocator1> & lhs, const ::nist_gear::SubmitTrayResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.inspection_result == rhs.inspection_result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nist_gear::SubmitTrayResponse_<ContainerAllocator1> & lhs, const ::nist_gear::SubmitTrayResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nist_gear

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a81550f277a1c03d6d98406331d270c2";
  }

  static const char* value(const ::nist_gear::SubmitTrayResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa81550f277a1c03dULL;
  static const uint64_t static_value2 = 0x6d98406331d270c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/SubmitTrayResponse";
  }

  static const char* value(const ::nist_gear::SubmitTrayResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"float32 inspection_result\n"
"\n"
;
  }

  static const char* value(const ::nist_gear::SubmitTrayResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.inspection_result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubmitTrayResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nist_gear::SubmitTrayResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "inspection_result: ";
    Printer<float>::stream(s, indent + "  ", v.inspection_result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_SUBMITTRAYRESPONSE_H
