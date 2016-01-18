#pragma once

#include <ros/node_handle.h>

namespace dummy
{
namespace roscpp
{

class Dummy
{
public:
  Dummy( const ros::NodeHandle& nh, const ros::NodeHandle& nh_p );

private:
  ros::NodeHandle nh_;
  ros::NodeHandle nh_p_;
};

} // roscpp
} // dummy
