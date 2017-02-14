#include "ros/ros.h"
#include "turtlesim/Pose.h"
#include "geometry_msgs/Twist.h"

#define PI 3.14159

ros::Publisher pub;
ros::Subscriber sub;

/****
Do your callback function here.
In this callback function, you need to write something
to make the turtle move with square trajectory.

...

****/

int main(int argc, char **argv)
{
    // Initialize the node here
	ros::init(argc, argv, "turtle");
    ros::NodeHandle node;


    /**** Write a publisher for the turtle movement here
	pub = ...

	****/


    /**** Write a subscriber for the turtle pose
	sub = ...

	****/


    // Set the publish rate here
	ros::Rate rate(10);
    
    while (ros::ok()) 
	{
        ros::spinOnce();    // Allow processing of incoming messages

        rate.sleep();
    }
}

