// Generated by gencpp from file deepracer_simulation_environment/VideoMetricsSrvRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIDEOMETRICSSRVREQUEST_H
#define DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIDEOMETRICSSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepracer_simulation_environment
{
template <class ContainerAllocator>
struct VideoMetricsSrvRequest_
{
  typedef VideoMetricsSrvRequest_<ContainerAllocator> Type;

  VideoMetricsSrvRequest_()
    {
    }
  VideoMetricsSrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct VideoMetricsSrvRequest_

typedef ::deepracer_simulation_environment::VideoMetricsSrvRequest_<std::allocator<void> > VideoMetricsSrvRequest;

typedef boost::shared_ptr< ::deepracer_simulation_environment::VideoMetricsSrvRequest > VideoMetricsSrvRequestPtr;
typedef boost::shared_ptr< ::deepracer_simulation_environment::VideoMetricsSrvRequest const> VideoMetricsSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace deepracer_simulation_environment

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_simulation_environment/VideoMetricsSrvRequest";
  }

  static const char* value(const ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VideoMetricsSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::deepracer_simulation_environment::VideoMetricsSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIDEOMETRICSSRVREQUEST_H
