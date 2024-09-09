#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/Image.h"
#include "cv_bridge/cv_bridge.h"
#include "opencv2/opencv.hpp"
#include <string>

int img_width;
int img_height;
int ROI_CENTER_Y;
int ROI_WIDTH;
int perspective_upper;
int perspective_lower;
int lane_width;
int canney_low;
int canney_high;

double Speed = 0.0;

geometry_msgs::Twist cmd_vel_msg;

void imageCallback(const sensor_msgs::Image::ConstPtr& msg)
{
    try
    {
        cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        cv::Mat image = cv_ptr->image;
    }
    catch (cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "lane_detect_node");
    ros::NodeHandle nh;

    std::string input_image_topic = "/usb_cam/image_raw";
    std::string vision_xte_offset_topic = "/vision_xte_offset";
    std::string vision_xte_topic = "/vision_xte";

    ros::param::get("~input_image_topic", input_image_topic);
    ros::param::get("~img_width", img_width);
    ros::param::get("~img_height", img_height);
    ros::param::get("~ROI_CENTER_Y", ROI_CENTER_Y);
    ros::param::get("~ROI_WIDTH", ROI_WIDTH);
    ros::param::get("~perspective_upper", perspective_upper);
    ros::param::get("~perspective_lower", perspective_lower);
    ros::param::get("~lane_width", lane_width);
    ros::param::get("~canney_low", canney_low);
    ros::param::get("~canney_high", canney_high);
    ros::param::get("~vision_xte_topic", vision_xte_topic);
    ros::param::get("~vision_xte_offset_topic", vision_xte_offset_topic);
    ros::param::get("~Speed", Speed);

    ros::Subscriber sub_image = nh.subscribe(input_image_topic, 1, imageCallback);
    ros::Publisher pub_cmd_vel = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 1);

    ros::Rate loop_rate(10); // 10 Hz

    while (ros::ok())
    {
        ros::spinOnce();
        pub_cmd_vel.publish(cmd_vel_msg);
        loop_rate.sleep();
    }

    return 0;
}
