/*
Author: Liam McCormick
Discription: Ask age, and caculate the number of heartbeats a person has experienced.
Date: 05-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int age,heartbeats;
	printf("How old are you to the nearest year \n");
	scanf("%d",&age);
	heartbeats=age*75*60*24*365.25;	
	//age in years by heartbeats-per-minute times minutes per hour times hours per day times days per year
	printf("your heart has had %d beats in your life \n",heartbeats);
	
} //end main
