// Generated by gencpp from file easy_handeye_msgs/PlanToSelectedTargetPose.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_PLANTOSELECTEDTARGETPOSE_H
#define EASY_HANDEYE_MSGS_MESSAGE_PLANTOSELECTEDTARGETPOSE_H

#include <ros/service_traits.h>


#include <easy_handeye_msgs/PlanToSelectedTargetPoseRequest.h>
#include <easy_handeye_msgs/PlanToSelectedTargetPoseResponse.h>


namespace easy_handeye_msgs
{

struct PlanToSelectedTargetPose
{

typedef PlanToSelectedTargetPoseRequest Request;
typedef PlanToSelectedTargetPoseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlanToSelectedTargetPose
} // namespace easy_handeye_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPose > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::easy_handeye_msgs::PlanToSelectedTargetPose&) { return value(); }
};

template<>
struct DataType< ::easy_handeye_msgs::PlanToSelectedTargetPose > {
  static const char* value()
  {
    return "easy_handeye_msgs/PlanToSelectedTargetPose";
  }

  static const char* value(const ::easy_handeye_msgs::PlanToSelectedTargetPose&) { return value(); }
};


// service_traits::MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPoseRequest> should match
// service_traits::MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPose >
template<>
struct MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPoseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPose >::value();
  }
  static const char* value(const ::easy_handeye_msgs::PlanToSelectedTargetPoseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::easy_handeye_msgs::PlanToSelectedTargetPoseRequest> should match
// service_traits::DataType< ::easy_handeye_msgs::PlanToSelectedTargetPose >
template<>
struct DataType< ::easy_handeye_msgs::PlanToSelectedTargetPoseRequest>
{
  static const char* value()
  {
    return DataType< ::easy_handeye_msgs::PlanToSelectedTargetPose >::value();
  }
  static const char* value(const ::easy_handeye_msgs::PlanToSelectedTargetPoseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPoseResponse> should match
// service_traits::MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPose >
template<>
struct MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPoseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::easy_handeye_msgs::PlanToSelectedTargetPose >::value();
  }
  static const char* value(const ::easy_handeye_msgs::PlanToSelectedTargetPoseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::easy_handeye_msgs::PlanToSelectedTargetPoseResponse> should match
// service_traits::DataType< ::easy_handeye_msgs::PlanToSelectedTargetPose >
template<>
struct DataType< ::easy_handeye_msgs::PlanToSelectedTargetPoseResponse>
{
  static const char* value()
  {
    return DataType< ::easy_handeye_msgs::PlanToSelectedTargetPose >::value();
  }
  static const char* value(const ::easy_handeye_msgs::PlanToSelectedTargetPoseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_PLANTOSELECTEDTARGETPOSE_H