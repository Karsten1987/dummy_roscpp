#include <ros/ros.h>

#include "dummy.h"

int main( int argc, char** argv )
{
  ros::init(argc, argv, "dummy_roscpp");

  ros::NodeHandle nh;
  ros::NodeHandle nh_p("~");

  dummy::roscpp::Dummy(nh, nh_p);

  return 0;
}
