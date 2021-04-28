// Generated by gencpp from file deepracer_simulation_environment/VirtualEventVideoEditSrv.msg
// DO NOT EDIT!


#ifndef DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIRTUALEVENTVIDEOEDITSRV_H
#define DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIRTUALEVENTVIDEOEDITSRV_H

#include <ros/service_traits.h>


#include <deepracer_simulation_environment/VirtualEventVideoEditSrvRequest.h>
#include <deepracer_simulation_environment/VirtualEventVideoEditSrvResponse.h>


namespace deepracer_simulation_environment
{

struct VirtualEventVideoEditSrv
{

typedef VirtualEventVideoEditSrvRequest Request;
typedef VirtualEventVideoEditSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct VirtualEventVideoEditSrv
} // namespace deepracer_simulation_environment


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrv > {
  static const char* value()
  {
    return "d375256530e7fab3e8486078c126cdb6";
  }

  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrv&) { return value(); }
};

template<>
struct DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrv > {
  static const char* value()
  {
    return "deepracer_simulation_environment/VirtualEventVideoEditSrv";
  }

  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrv&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest> should match
// service_traits::MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >
template<>
struct MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >::value();
  }
  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest> should match
// service_traits::DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >
template<>
struct DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >::value();
  }
  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrvResponse> should match
// service_traits::MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >
template<>
struct MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >::value();
  }
  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrvResponse> should match
// service_traits::DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >
template<>
struct DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrvResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrv >::value();
  }
  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIRTUALEVENTVIDEOEDITSRV_H
