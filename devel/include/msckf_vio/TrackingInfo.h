// Generated by gencpp from file msckf_vio/TrackingInfo.msg
// DO NOT EDIT!


#ifndef MSCKF_VIO_MESSAGE_TRACKINGINFO_H
#define MSCKF_VIO_MESSAGE_TRACKINGINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace msckf_vio
{
template <class ContainerAllocator>
struct TrackingInfo_
{
  typedef TrackingInfo_<ContainerAllocator> Type;

  TrackingInfo_()
    : header()
    , before_tracking(0)
    , after_tracking(0)
    , after_matching(0)
    , after_ransac(0)  {
    }
  TrackingInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , before_tracking(0)
    , after_tracking(0)
    , after_matching(0)
    , after_ransac(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _before_tracking_type;
  _before_tracking_type before_tracking;

   typedef int16_t _after_tracking_type;
  _after_tracking_type after_tracking;

   typedef int16_t _after_matching_type;
  _after_matching_type after_matching;

   typedef int16_t _after_ransac_type;
  _after_ransac_type after_ransac;





  typedef boost::shared_ptr< ::msckf_vio::TrackingInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msckf_vio::TrackingInfo_<ContainerAllocator> const> ConstPtr;

}; // struct TrackingInfo_

typedef ::msckf_vio::TrackingInfo_<std::allocator<void> > TrackingInfo;

typedef boost::shared_ptr< ::msckf_vio::TrackingInfo > TrackingInfoPtr;
typedef boost::shared_ptr< ::msckf_vio::TrackingInfo const> TrackingInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msckf_vio::TrackingInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msckf_vio::TrackingInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msckf_vio

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msckf_vio': ['/home/vtkc/Desktop/tlab/msckf_loopClosure/src/msckf_vio/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msckf_vio::TrackingInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msckf_vio::TrackingInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msckf_vio::TrackingInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe61515ea4754478598919b321c32c28";
  }

  static const char* value(const ::msckf_vio::TrackingInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe61515ea4754478ULL;
  static const uint64_t static_value2 = 0x598919b321c32c28ULL;
};

template<class ContainerAllocator>
struct DataType< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msckf_vio/TrackingInfo";
  }

  static const char* value(const ::msckf_vio::TrackingInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# Number of features after each outlier removal step.\n\
int16 before_tracking\n\
int16 after_tracking\n\
int16 after_matching\n\
int16 after_ransac\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::msckf_vio::TrackingInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.before_tracking);
      stream.next(m.after_tracking);
      stream.next(m.after_matching);
      stream.next(m.after_ransac);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackingInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msckf_vio::TrackingInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msckf_vio::TrackingInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "before_tracking: ";
    Printer<int16_t>::stream(s, indent + "  ", v.before_tracking);
    s << indent << "after_tracking: ";
    Printer<int16_t>::stream(s, indent + "  ", v.after_tracking);
    s << indent << "after_matching: ";
    Printer<int16_t>::stream(s, indent + "  ", v.after_matching);
    s << indent << "after_ransac: ";
    Printer<int16_t>::stream(s, indent + "  ", v.after_ransac);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSCKF_VIO_MESSAGE_TRACKINGINFO_H
