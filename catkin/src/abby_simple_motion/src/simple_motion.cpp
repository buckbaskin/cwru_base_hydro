/*
*	Simple motion node for ABBY
*	Luc Bettaieb
*	bettaieb@case.edu
*/

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <stdio.h>

int main(int argc, char** argv){
	ros::init(argc, argv, "simple_movement");
	ros::NodeHandle nh;

	ROS_INFO("Starting interactive loop..");

	while(ros::ok()){

		std::cout << "Please enter 0 for a translational or 1 for a rotational command: ";
		std::cin 
