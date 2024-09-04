cmake_minimum_required(VERSION 3.0.2)
project(gps_lla_to_utm)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  rospy
  std_msgs
  sensor_msgs
)

## Find GeographicLib
find_package(GeographicLib REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES gps_lla_to_utm
  CATKIN_DEPENDS rospy std_msgs sensor_msgs geometry_msgs
  DEPENDS GeographicLib
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
  ${GeographicLib_INCLUDE_DIRS}
)

add_executable(gls_lla_to_utm_node src/gls_lla_to_utm.cpp)
add_dependencies(gls_lla_to_utm_node ${gls_lla_to_utm_node_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(gls_lla_to_utm_node
  ${catkin_LIBRARIES}
  ${GeographicLib_LIBRARIES}
)
