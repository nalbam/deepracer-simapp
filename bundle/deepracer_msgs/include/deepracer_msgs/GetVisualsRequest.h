// Generated by gencpp from file deepracer_msgs/GetVisualsRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETVISUALSREQUEST_H
#define DEEPRACER_MSGS_MESSAGE_GETVISUALSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepracer_msgs
{
template <class ContainerAllocator>
struct GetVisualsRequest_
{
  typedef GetVisualsRequest_<ContainerAllocator> Type;

  GetVisualsRequest_()
    : link_names()
    , visual_names()  {
    }
  GetVisualsRequest_(const ContainerAllocator& _alloc)
    : link_names(_alloc)
    , visual_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _link_names_type;
  _link_names_type link_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _visual_names_type;
  _visual_names_type visual_names;





  typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetVisualsRequest_

typedef ::deepracer_msgs::GetVisualsRequest_<std::allocator<void> > GetVisualsRequest;

typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsRequest > GetVisualsRequestPtr;
typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsRequest const> GetVisualsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.link_names == rhs.link_names &&
    lhs.visual_names == rhs.visual_names;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c4dd005a7b7d78ec90c1c1b20dd7a43";
  }

  static const char* value(const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c4dd005a7b7d78eULL;
  static const uint64_t static_value2 = 0xc90c1c1b20dd7a43ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/GetVisualsRequest";
  }

  static const char* value(const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] link_names\n"
"string[] visual_names\n"
;
  }

  static const char* value(const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_names);
      stream.next(m.visual_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetVisualsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::GetVisualsRequest_<ContainerAllocator>& v)
  {
    s << indent << "link_names[]" << std::endl;
    for (size_t i = 0; i < v.link_names.size(); ++i)
    {
      s << indent << "  link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_names[i]);
    }
    s << indent << "visual_names[]" << std::endl;
    for (size_t i = 0; i < v.visual_names.size(); ++i)
    {
      s << indent << "  visual_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.visual_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETVISUALSREQUEST_H
