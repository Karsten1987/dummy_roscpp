#include "dummy.h"

namespace dummy
{
namespace roscpp
{

Dummy::Dummy( const ros::NodeHandle& nh, const ros::NodeHandle& nh_p ):
  nh_(nh),
  nh_p_(nh_p)
{
  ROS_INFO_STREAM("Dummy successfully initialized");
}

} // roscpp
} // dummy
