// Generated by gencpp from file deepracer_msgs/SetVisualColorRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALCOLORREQUEST_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALCOLORREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace deepracer_msgs
{
template <class ContainerAllocator>
struct SetVisualColorRequest_
{
  typedef SetVisualColorRequest_<ContainerAllocator> Type;

  SetVisualColorRequest_()
    : link_name()
    , visual_name()
    , ambient()
    , diffuse()
    , specular()
    , emissive()
    , block(false)  {
    }
  SetVisualColorRequest_(const ContainerAllocator& _alloc)
    : link_name(_alloc)
    , visual_name(_alloc)
    , ambient(_alloc)
    , diffuse(_alloc)
    , specular(_alloc)
    , emissive(_alloc)
    , block(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _link_name_type;
  _link_name_type link_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _visual_name_type;
  _visual_name_type visual_name;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _ambient_type;
  _ambient_type ambient;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _diffuse_type;
  _diffuse_type diffuse;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _specular_type;
  _specular_type specular;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _emissive_type;
  _emissive_type emissive;

   typedef uint8_t _block_type;
  _block_type block;





  typedef boost::shared_ptr< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetVisualColorRequest_

typedef ::deepracer_msgs::SetVisualColorRequest_<std::allocator<void> > SetVisualColorRequest;

typedef boost::shared_ptr< ::deepracer_msgs::SetVisualColorRequest > SetVisualColorRequestPtr;
typedef boost::shared_ptr< ::deepracer_msgs::SetVisualColorRequest const> SetVisualColorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator1> & lhs, const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.link_name == rhs.link_name &&
    lhs.visual_name == rhs.visual_name &&
    lhs.ambient == rhs.ambient &&
    lhs.diffuse == rhs.diffuse &&
    lhs.specular == rhs.specular &&
    lhs.emissive == rhs.emissive &&
    lhs.block == rhs.block;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator1> & lhs, const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c993776acc4e7a226360c9194290bf99";
  }

  static const char* value(const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc993776acc4e7a22ULL;
  static const uint64_t static_value2 = 0x6360c9194290bf99ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/SetVisualColorRequest";
  }

  static const char* value(const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string link_name\n"
"string visual_name\n"
"std_msgs/ColorRGBA ambient\n"
"std_msgs/ColorRGBA diffuse\n"
"std_msgs/ColorRGBA specular\n"
"std_msgs/ColorRGBA emissive\n"
"bool block\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_name);
      stream.next(m.visual_name);
      stream.next(m.ambient);
      stream.next(m.diffuse);
      stream.next(m.specular);
      stream.next(m.emissive);
      stream.next(m.block);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetVisualColorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::SetVisualColorRequest_<ContainerAllocator>& v)
  {
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.link_name);
    s << indent << "visual_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.visual_name);
    s << indent << "ambient: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.ambient);
    s << indent << "diffuse: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.diffuse);
    s << indent << "specular: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.specular);
    s << indent << "emissive: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.emissive);
    s << indent << "block: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.block);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALCOLORREQUEST_H
