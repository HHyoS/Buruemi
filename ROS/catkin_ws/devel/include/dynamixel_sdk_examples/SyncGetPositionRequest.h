// Generated by gencpp from file dynamixel_sdk_examples/SyncGetPositionRequest.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_SDK_EXAMPLES_MESSAGE_SYNCGETPOSITIONREQUEST_H
#define DYNAMIXEL_SDK_EXAMPLES_MESSAGE_SYNCGETPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_sdk_examples
{
template <class ContainerAllocator>
struct SyncGetPositionRequest_
{
  typedef SyncGetPositionRequest_<ContainerAllocator> Type;

  SyncGetPositionRequest_()
    : id1(0)
    , id2(0)  {
    }
  SyncGetPositionRequest_(const ContainerAllocator& _alloc)
    : id1(0)
    , id2(0)  {
  (void)_alloc;
    }



   typedef uint8_t _id1_type;
  _id1_type id1;

   typedef uint8_t _id2_type;
  _id2_type id2;





  typedef boost::shared_ptr< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SyncGetPositionRequest_

typedef ::dynamixel_sdk_examples::SyncGetPositionRequest_<std::allocator<void> > SyncGetPositionRequest;

typedef boost::shared_ptr< ::dynamixel_sdk_examples::SyncGetPositionRequest > SyncGetPositionRequestPtr;
typedef boost::shared_ptr< ::dynamixel_sdk_examples::SyncGetPositionRequest const> SyncGetPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator1> & lhs, const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id1 == rhs.id1 &&
    lhs.id2 == rhs.id2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator1> & lhs, const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamixel_sdk_examples

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "533dfb55d158e8e581d9e0f578d53185";
  }

  static const char* value(const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x533dfb55d158e8e5ULL;
  static const uint64_t static_value2 = 0x81d9e0f578d53185ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_sdk_examples/SyncGetPositionRequest";
  }

  static const char* value(const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id1\n"
"uint8 id2\n"
;
  }

  static const char* value(const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id1);
      stream.next(m.id2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncGetPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_sdk_examples::SyncGetPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "id1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id1);
    s << indent << "id2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_SDK_EXAMPLES_MESSAGE_SYNCGETPOSITIONREQUEST_H
