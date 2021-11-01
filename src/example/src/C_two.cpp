#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>
#include <string>
#include <iostream>
using namesapce std;

int main (int argc,char **argv)
{
	ros::init(argc,argv,"C_two");
	ros::NodeHandle nh;

	string a = "object";
	printf("%s\n",a.c_str());

	return 0;
}

