// Generated by gencpp from file deepracer_msgs/SetVisualPose.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALPOSE_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALPOSE_H

#include <ros/service_traits.h>


#include <deepracer_msgs/SetVisualPoseRequest.h>
#include <deepracer_msgs/SetVisualPoseResponse.h>


namespace deepracer_msgs
{

struct SetVisualPose
{

typedef SetVisualPoseRequest Request;
typedef SetVisualPoseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetVisualPose
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::SetVisualPose > {
  static const char* value()
  {
    return "3b6fe41d1c80e9b62f81f01d6ed4fc64";
  }

  static const char* value(const ::deepracer_msgs::SetVisualPose&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::SetVisualPose > {
  static const char* value()
  {
    return "deepracer_msgs/SetVisualPose";
  }

  static const char* value(const ::deepracer_msgs::SetVisualPose&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::SetVisualPoseRequest> should match
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualPose >
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualPoseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualPose >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualPoseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualPoseRequest> should match
// service_traits::DataType< ::deepracer_msgs::SetVisualPose >
template<>
struct DataType< ::deepracer_msgs::SetVisualPoseRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualPose >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualPoseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::SetVisualPoseResponse> should match
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualPose >
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualPoseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualPose >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualPoseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualPoseResponse> should match
// service_traits::DataType< ::deepracer_msgs::SetVisualPose >
template<>
struct DataType< ::deepracer_msgs::SetVisualPoseResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualPose >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualPoseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALPOSE_H
