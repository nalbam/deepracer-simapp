// Generated by gencpp from file deepracer_msgs/GetLinkStatesResponse.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETLINKSTATESRESPONSE_H
#define DEEPRACER_MSGS_MESSAGE_GETLINKSTATESRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gazebo_msgs/LinkState.h>

namespace deepracer_msgs
{
template <class ContainerAllocator>
struct GetLinkStatesResponse_
{
  typedef GetLinkStatesResponse_<ContainerAllocator> Type;

  GetLinkStatesResponse_()
    : link_states()
    , success(false)
    , status_message()
    , status()
    , messages()  {
    }
  GetLinkStatesResponse_(const ContainerAllocator& _alloc)
    : link_states(_alloc)
    , success(false)
    , status_message(_alloc)
    , status(_alloc)
    , messages(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::gazebo_msgs::LinkState_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::gazebo_msgs::LinkState_<ContainerAllocator> >> _link_states_type;
  _link_states_type link_states;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_message_type;
  _status_message_type status_message;

   typedef std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> _status_type;
  _status_type status;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _messages_type;
  _messages_type messages;





  typedef boost::shared_ptr< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetLinkStatesResponse_

typedef ::deepracer_msgs::GetLinkStatesResponse_<std::allocator<void> > GetLinkStatesResponse;

typedef boost::shared_ptr< ::deepracer_msgs::GetLinkStatesResponse > GetLinkStatesResponsePtr;
typedef boost::shared_ptr< ::deepracer_msgs::GetLinkStatesResponse const> GetLinkStatesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.link_states == rhs.link_states &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message &&
    lhs.status == rhs.status &&
    lhs.messages == rhs.messages;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3016f6bbe8575753300c5adc29c01810";
  }

  static const char* value(const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3016f6bbe8575753ULL;
  static const uint64_t static_value2 = 0x300c5adc29c01810ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/GetLinkStatesResponse";
  }

  static const char* value(const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/LinkState[] link_states\n"
"bool success                 # return true if get info is successful\n"
"string status_message        # comments if available\n"
"int8[] status                # status of each request: true if succeeded otherwise false\n"
"string[] messages\n"
"\n"
"================================================================================\n"
"MSG: gazebo_msgs/LinkState\n"
"# @todo: FIXME: sets pose and twist of a link.  All children link poses/twists of the URDF tree are not updated accordingly, but should be.\n"
"string link_name            # link name, link_names are in gazebo scoped name notation, [model_name::body_name]\n"
"geometry_msgs/Pose pose     # desired pose in reference frame\n"
"geometry_msgs/Twist twist   # desired twist in reference frame\n"
"string reference_frame      # set pose/twist relative to the frame of this link/body\n"
"                            # leave empty or \"world\" or \"map\" defaults to world-frame\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_states);
      stream.next(m.success);
      stream.next(m.status_message);
      stream.next(m.status);
      stream.next(m.messages);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetLinkStatesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::GetLinkStatesResponse_<ContainerAllocator>& v)
  {
    s << indent << "link_states[]" << std::endl;
    for (size_t i = 0; i < v.link_states.size(); ++i)
    {
      s << indent << "  link_states[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gazebo_msgs::LinkState_<ContainerAllocator> >::stream(s, indent + "    ", v.link_states[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status_message);
    s << indent << "status[]" << std::endl;
    for (size_t i = 0; i < v.status.size(); ++i)
    {
      s << indent << "  status[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.status[i]);
    }
    s << indent << "messages[]" << std::endl;
    for (size_t i = 0; i < v.messages.size(); ++i)
    {
      s << indent << "  messages[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.messages[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETLINKSTATESRESPONSE_H
