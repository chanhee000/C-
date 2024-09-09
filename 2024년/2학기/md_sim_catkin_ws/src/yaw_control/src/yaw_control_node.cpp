#include "ros/ros.h"
#include "std_msgs/Int8.h"
#include "std_msgs/Int16.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float64.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/Imu.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"

#define DEG2RAD(x) ((x) * M_PI / 180.0)
#define RAD2DEG(x) ((x) * 180.0 / M_PI)

double roll, pitch, yaw;

double Kp_yaw 			= 0.0;
double Ki_yaw 			= 0.0;
double Kd_yaw 			= 0.0;

double error 			= 0.0;
double error_old		= 0.0;

double yaw_deg 			= 0.0;
double target_yaw_deg 	= 0.0;

double Speed 			= 0.0;
double Steering_Angle 	= 0.0;

double pid_output = 0.0;

geometry_msgs::Twist cmd_vel_msg;

void imu_Callback(const sensor_msgs::Imu::ConstPtr &msg)
{
    tf2::Quaternion q(
        msg->orientation.x,
        msg->orientation.y,
        msg->orientation.z,
        msg->orientation.w);

    tf2::Matrix3x3 m(q);
    m.getRPY(roll, pitch, yaw);
    
    yaw_deg = RAD2DEG(yaw);
    
    if (yaw_deg > 360)
    {
        yaw_deg = yaw_deg - 360;
    }
    
    else if (yaw_deg < 0)
    {
        yaw_deg = yaw_deg + 360;
    }
}

double imu_yaw_control(void)
{
	error = target_yaw_deg - yaw_deg;

    if (error > 180)
    {
        error = error - 360;
    }
    else if (error < -180)
    {
        error = error + 360;
    }

    double error_d = error - error_old;

    Steering_Angle = Kp_yaw * error + Kd_yaw * error_d;

    error_old = error;

    return Steering_Angle;
}

int main(int argc, char **argv)
{
    int count = 0;

    ros::init(argc, argv, "yaw_control");
    ros::NodeHandle n;
    
    std::string imu_topic 					= "/imu";
    std::string cmd_vel_topic				= "/ackermann_steering_controller/cmd_vel";
    
	ros::param::get("~imu_topic",			imu_topic);
	ros::param::get("~cmd_vel_topic",		cmd_vel_topic);
	ros::param::get("~Kp_yaw", 				Kp_yaw);  
	ros::param::get("~Kd_yaw", 				Kd_yaw);  
	ros::param::get("~Ki_yaw", 				Ki_yaw);
	ros::param::get("~Speed",				Speed);
	ros::param::get("~target_yaw_deg",		target_yaw_deg);

    ros::Subscriber sub_imu			 		= n.subscribe(imu_topic, 1, imu_Callback);
    ros::Publisher pub_cmd_vel 				= n.advertise<geometry_msgs::Twist>(cmd_vel_topic, 1);

    ros::Rate loop_rate(25.0);

    while (ros::ok())
    {
		ROS_INFO("IMU_CONTROL");
		pid_output = imu_yaw_control();
		
		// target_yaw 도착시 정지 
		if (fabs(error) < 0.5)
		{
			cmd_vel_msg.linear.x = 0.0;
			cmd_vel_msg.angular.z = 0.0;
						
			printf("\n");
			printf("Target Reach\n\n");
			
			printf("yaw_deg = %.2f\n", yaw_deg);
			printf("target_yaw_deg = %.2lf\n", target_yaw_deg);
			printf("error = %.2lf\n",error);
			printf("Speed = %.2lf\n",Speed);
			printf("Steering_Angle = %.2lf\n\n",cmd_vel_msg.angular.z);
		}
		else
		{
			cmd_vel_msg.linear.x = Speed;
			cmd_vel_msg.angular.z = pid_output;
			
			printf("yaw_deg = %.2f\n", yaw_deg);
			printf("target_yaw_deg = %.2lf\n", target_yaw_deg);
			printf("error = %.2lf\n",error);
			printf("Speed = %.2lf\n",Speed);
			printf("Steering_Angle = %.2lf\n\n",cmd_vel_msg.angular.z);
		}
		


        pub_cmd_vel.publish(cmd_vel_msg);
		
        ros::spinOnce();
        loop_rate.sleep();
        ++count;
    }
    return 0;
}
