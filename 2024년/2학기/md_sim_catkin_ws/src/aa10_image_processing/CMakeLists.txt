cmake_minimum_required(VERSION 3.0.2)
project(aa10_image_processing)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  rospy
  sensor_msgs
  std_msgs
  cv_bridge
  image_transport
)

## Find OpenCV
find_package(OpenCV REQUIRED)

## Declare a catkin package
catkin_package(
  CATKIN_DEPENDS geometry_msgs roscpp rospy sensor_msgs std_msgs cv_bridge image_transport
  DEPENDS OpenCV
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

## Declare a C++ executable
add_executable(aa10_lane_detect_node_node src/aa10_lane_detect_node.cpp)

## Add dependencies to the executable
add_dependencies(aa10_lane_detect_node_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Link the executable to the Catkin and OpenCV libraries
target_link_libraries(aa10_lane_detect_node_node
  ${catkin_LIBRARIES}
  ${OpenCV_LIBRARIES}
)

