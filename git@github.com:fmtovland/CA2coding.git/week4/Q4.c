/*
Author: Liam McCormick
Discription: use a printf to retrieve the values of v1(5) v2(-4.5) and v3(11.25) to the minimum required places of decimal.
Date: 05-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	float v1,v2,v3;
	v1=5;
	v2=-4.5;
	v3=11.25;
	
	printf("v1=%.0f v2=%.1f v3=%.2f \n",v1,v2,v3);
	
}
