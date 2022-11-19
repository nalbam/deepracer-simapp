// Generated by gencpp from file deepracer_simulation_environment/AgentRewardData.msg
// DO NOT EDIT!


#ifndef DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_AGENTREWARDDATA_H
#define DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_AGENTREWARDDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/Image.h>

namespace deepracer_simulation_environment
{
template <class ContainerAllocator>
struct AgentRewardData_
{
  typedef AgentRewardData_<ContainerAllocator> Type;

  AgentRewardData_()
    : agent_name()
    , action(0)
    , reward(0.0)
    , action_space_len(0)
    , speed_list()
    , steering_angle_list()
    , image()  {
    }
  AgentRewardData_(const ContainerAllocator& _alloc)
    : agent_name(_alloc)
    , action(0)
    , reward(0.0)
    , action_space_len(0)
    , speed_list(_alloc)
    , steering_angle_list(_alloc)
    , image(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _agent_name_type;
  _agent_name_type agent_name;

   typedef int8_t _action_type;
  _action_type action;

   typedef double _reward_type;
  _reward_type reward;

   typedef int8_t _action_space_len_type;
  _action_space_len_type action_space_len;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _speed_list_type;
  _speed_list_type speed_list;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _steering_angle_list_type;
  _steering_angle_list_type steering_angle_list;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _image_type;
  _image_type image;





  typedef boost::shared_ptr< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> const> ConstPtr;

}; // struct AgentRewardData_

typedef ::deepracer_simulation_environment::AgentRewardData_<std::allocator<void> > AgentRewardData;

typedef boost::shared_ptr< ::deepracer_simulation_environment::AgentRewardData > AgentRewardDataPtr;
typedef boost::shared_ptr< ::deepracer_simulation_environment::AgentRewardData const> AgentRewardDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator1> & lhs, const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator2> & rhs)
{
  return lhs.agent_name == rhs.agent_name &&
    lhs.action == rhs.action &&
    lhs.reward == rhs.reward &&
    lhs.action_space_len == rhs.action_space_len &&
    lhs.speed_list == rhs.speed_list &&
    lhs.steering_angle_list == rhs.steering_angle_list &&
    lhs.image == rhs.image;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator1> & lhs, const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_simulation_environment

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af5e8658bf60dab3f19408bd4ad157dd";
  }

  static const char* value(const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf5e8658bf60dab3ULL;
  static const uint64_t static_value2 = 0xf19408bd4ad157ddULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_simulation_environment/AgentRewardData";
  }

  static const char* value(const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string agent_name\n"
"int8 action\n"
"float64 reward\n"
"int8 action_space_len\n"
"string[] speed_list\n"
"string[] steering_angle_list\n"
"sensor_msgs/Image image\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.agent_name);
      stream.next(m.action);
      stream.next(m.reward);
      stream.next(m.action_space_len);
      stream.next(m.speed_list);
      stream.next(m.steering_angle_list);
      stream.next(m.image);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgentRewardData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_simulation_environment::AgentRewardData_<ContainerAllocator>& v)
  {
    s << indent << "agent_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.agent_name);
    s << indent << "action: ";
    Printer<int8_t>::stream(s, indent + "  ", v.action);
    s << indent << "reward: ";
    Printer<double>::stream(s, indent + "  ", v.reward);
    s << indent << "action_space_len: ";
    Printer<int8_t>::stream(s, indent + "  ", v.action_space_len);
    s << indent << "speed_list[]" << std::endl;
    for (size_t i = 0; i < v.speed_list.size(); ++i)
    {
      s << indent << "  speed_list[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.speed_list[i]);
    }
    s << indent << "steering_angle_list[]" << std::endl;
    for (size_t i = 0; i < v.steering_angle_list.size(); ++i)
    {
      s << indent << "  steering_angle_list[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.steering_angle_list[i]);
    }
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_AGENTREWARDDATA_H
