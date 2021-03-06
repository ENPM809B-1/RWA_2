// Generated by gencpp from file nist_gear/VacuumGripperControl.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_VACUUMGRIPPERCONTROL_H
#define NIST_GEAR_MESSAGE_VACUUMGRIPPERCONTROL_H

#include <ros/service_traits.h>


#include <nist_gear/VacuumGripperControlRequest.h>
#include <nist_gear/VacuumGripperControlResponse.h>


namespace nist_gear
{

struct VacuumGripperControl
{

typedef VacuumGripperControlRequest Request;
typedef VacuumGripperControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct VacuumGripperControl
} // namespace nist_gear


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nist_gear::VacuumGripperControl > {
  static const char* value()
  {
    return "6a0b406242562fc416b2c9c8a3efb051";
  }

  static const char* value(const ::nist_gear::VacuumGripperControl&) { return value(); }
};

template<>
struct DataType< ::nist_gear::VacuumGripperControl > {
  static const char* value()
  {
    return "nist_gear/VacuumGripperControl";
  }

  static const char* value(const ::nist_gear::VacuumGripperControl&) { return value(); }
};


// service_traits::MD5Sum< ::nist_gear::VacuumGripperControlRequest> should match
// service_traits::MD5Sum< ::nist_gear::VacuumGripperControl >
template<>
struct MD5Sum< ::nist_gear::VacuumGripperControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::VacuumGripperControl >::value();
  }
  static const char* value(const ::nist_gear::VacuumGripperControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::VacuumGripperControlRequest> should match
// service_traits::DataType< ::nist_gear::VacuumGripperControl >
template<>
struct DataType< ::nist_gear::VacuumGripperControlRequest>
{
  static const char* value()
  {
    return DataType< ::nist_gear::VacuumGripperControl >::value();
  }
  static const char* value(const ::nist_gear::VacuumGripperControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nist_gear::VacuumGripperControlResponse> should match
// service_traits::MD5Sum< ::nist_gear::VacuumGripperControl >
template<>
struct MD5Sum< ::nist_gear::VacuumGripperControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::VacuumGripperControl >::value();
  }
  static const char* value(const ::nist_gear::VacuumGripperControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::VacuumGripperControlResponse> should match
// service_traits::DataType< ::nist_gear::VacuumGripperControl >
template<>
struct DataType< ::nist_gear::VacuumGripperControlResponse>
{
  static const char* value()
  {
    return DataType< ::nist_gear::VacuumGripperControl >::value();
  }
  static const char* value(const ::nist_gear::VacuumGripperControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIST_GEAR_MESSAGE_VACUUMGRIPPERCONTROL_H
