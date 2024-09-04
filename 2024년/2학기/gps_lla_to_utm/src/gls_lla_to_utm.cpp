#include "ros/ros.h"
#include "sensor_msgs/NavSatFix.h"
#include "geometry_msgs/Point.h"
#include <cmath>
const double PI = 3.14159265358979323846; 				//원주율
const double ECCENTRICITY_SQUARED = 0.00669437999014;
const double EARTH_RADIUS = 6378137.0;					//지구의 반지름
const double k0 = 0.9996;								//UTM변환 스케일 팩터

ros::Publisher utm_pub;
ros::Publisher lla_pub;

double latitude = 0.0;									//위도
double longitude = 0.0;									//경도		
double utm_east = 0.0;									//UTM 동쪽 좌표
double utm_north = 0.0;									//UTM 북쪽 좌표

bool new_gps_data = false;

// GPS 데이터를 LLA 좌표로 변환
void gps_fix_lla(const sensor_msgs::NavSatFix& gps_fix, double* latitude, double* longitude) 
{
    *latitude = gps_fix.latitude;	//GPS 위도
    *longitude = gps_fix.longitude;	//GPS 경도
    printf("Received GPS data: Latitude = %9.6lf, Longitude = %9.6lf\n", *latitude, *longitude);
}


// LLA 좌표를 UTM 좌표로 변환
void ToUTM(double latitude, double longitude, double* utmX, double* utmY) {
    double lat_rad = latitude * PI / 180.0;		//위도 라디안으로 변환
    double lon_rad = longitude * PI / 180.0;	//경도 라디안으로 변환

    int zone = (int)((longitude + 180) / 6) + 1;
    double lon0 = (zone * 6 - 183) * PI / 180.0;

    double e_squared = ECCENTRICITY_SQUARED;
    double e_prime_squared = e_squared / (1 - e_squared);

    double n = EARTH_RADIUS / sqrt(1 - e_squared * sin(lat_rad) * sin(lat_rad));
    double t = tan(lat_rad) * tan(lat_rad);
    double c = e_prime_squared * cos(lat_rad) * cos(lat_rad);
    double a = (lon_rad - lon0) * cos(lat_rad);

    double m = EARTH_RADIUS * ((1 - e_squared / 4 - 3 * e_squared * e_squared / 64 - 5 * e_squared * e_squared * e_squared / 256) * lat_rad
               - (3 * e_squared / 8 + 3 * e_squared * e_squared / 32 + 45 * e_squared * e_squared * e_squared / 1024) * sin(2 * lat_rad)
               + (15 * e_squared * e_squared / 256 + 45 * e_squared * e_squared * e_squared / 1024) * sin(4 * lat_rad)
               - (35 * e_squared * e_squared * e_squared / 3072) * sin(6 * lat_rad));

    *utmX = k0 * n * (a + (1 - t + c) * a * a * a / 6
                      + (5 - 18 * t + t * t + 72 * c - 58 * e_squared) * a * a * a * a * a / 120)
            + 500000.0;

    *utmY = k0 * (m + n * tan(lat_rad) * (a * a / 2
                                          + (5 - t + 9 * c + 4 * c * c) * a * a * a * a / 24
                                          + (61 - 58 * t + t * t + 600 * c - 330 * e_squared) * a * a * a * a * a * a / 720));

    if (latitude < 0) {
        *utmY += 10000000.0;
    }
}


void pub_lla(double latitude, double longitude) 
{
    geometry_msgs::Point lla_msg;
    lla_msg.x = latitude;
    lla_msg.y = longitude;
    lla_msg.z = 0.0;

    lla_pub.publish(lla_msg);
    printf("Published LLA: Latitude = %9.6lf, Longitude = %9.6lf\n", latitude, longitude);
}

void pub_utm(double utmX, double utmY) 
{
    geometry_msgs::Point utm_msg;
    utm_msg.x = utmX;
    utm_msg.y = utmY;
    utm_msg.z = 0.0; 

    utm_pub.publish(utm_msg);
    printf("Published UTM: utm_East = %9.6lf, utm_North = %9.6lf\n", utmX, utmY);
}

void gps1_Callback(const sensor_msgs::NavSatFix::ConstPtr& msg) 
{
    gps_fix_lla(*msg, &latitude, &longitude);
    new_gps_data = true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "gls_to_utm_node");
    ros::NodeHandle n;

    std::string gps1_fix_topic = "/gps1/fix";
    std::string utm_pub_topic = "/gps1/utm";
    std::string lla_pub_topic = "/gps1/lla";
    
    ros::param::get("~gps1_fix_topic", gps1_fix_topic);
    ros::param::get("~utm_pub_topic", utm_pub_topic);
    ros::param::get("~lla_pub_topic", lla_pub_topic);

    utm_pub = n.advertise<geometry_msgs::Point>(utm_pub_topic, 10);
    lla_pub = n.advertise<geometry_msgs::Point>(lla_pub_topic, 10);

    ros::Subscriber sub_gps1_fix = n.subscribe(gps1_fix_topic, 1, gps1_Callback);

    ros::Rate loop_rate(30.0);

    while (ros::ok())
    {
        if (new_gps_data)
        {
            ToUTM(latitude, longitude, &utm_east, &utm_north);
            printf("Converted to UTM : utm_East = %9.6lf utm_North = %9.6lf\n\n", utm_east, utm_north);
            
            pub_lla(latitude, longitude);
            pub_utm(utm_east, utm_north);

            new_gps_data = false;
        }
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
