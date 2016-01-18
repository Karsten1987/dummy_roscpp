cmake_minimum_required(VERSION 2.8.3)
project(dummy_roscpp)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES dummy_roscpp
  CATKIN_DEPENDS roscpp
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(dummy_roscpp src/dummy_roscpp.cpp src/dummy.cpp)
target_link_libraries(dummy_roscpp
  ${catkin_LIBRARIES}
)
