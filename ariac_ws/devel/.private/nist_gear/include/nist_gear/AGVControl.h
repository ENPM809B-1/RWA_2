// Generated by gencpp from file nist_gear/AGVControl.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_AGVCONTROL_H
#define NIST_GEAR_MESSAGE_AGVCONTROL_H

#include <ros/service_traits.h>


#include <nist_gear/AGVControlRequest.h>
#include <nist_gear/AGVControlResponse.h>


namespace nist_gear
{

struct AGVControl
{

typedef AGVControlRequest Request;
typedef AGVControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AGVControl
} // namespace nist_gear


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nist_gear::AGVControl > {
  static const char* value()
  {
    return "c005482ab2942dacef2630ed2f58c3b3";
  }

  static const char* value(const ::nist_gear::AGVControl&) { return value(); }
};

template<>
struct DataType< ::nist_gear::AGVControl > {
  static const char* value()
  {
    return "nist_gear/AGVControl";
  }

  static const char* value(const ::nist_gear::AGVControl&) { return value(); }
};


// service_traits::MD5Sum< ::nist_gear::AGVControlRequest> should match
// service_traits::MD5Sum< ::nist_gear::AGVControl >
template<>
struct MD5Sum< ::nist_gear::AGVControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::AGVControl >::value();
  }
  static const char* value(const ::nist_gear::AGVControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::AGVControlRequest> should match
// service_traits::DataType< ::nist_gear::AGVControl >
template<>
struct DataType< ::nist_gear::AGVControlRequest>
{
  static const char* value()
  {
    return DataType< ::nist_gear::AGVControl >::value();
  }
  static const char* value(const ::nist_gear::AGVControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nist_gear::AGVControlResponse> should match
// service_traits::MD5Sum< ::nist_gear::AGVControl >
template<>
struct MD5Sum< ::nist_gear::AGVControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::AGVControl >::value();
  }
  static const char* value(const ::nist_gear::AGVControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::AGVControlResponse> should match
// service_traits::DataType< ::nist_gear::AGVControl >
template<>
struct DataType< ::nist_gear::AGVControlResponse>
{
  static const char* value()
  {
    return DataType< ::nist_gear::AGVControl >::value();
  }
  static const char* value(const ::nist_gear::AGVControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIST_GEAR_MESSAGE_AGVCONTROL_H
