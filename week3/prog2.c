/*
Author: Liam Mc Cormick
Discription: Computation and display of the volume and area of a cubeoid
Date: 26-09-16
OS: Linux Mint 17.2 (kernel 3.16.0-38 x86_64)
*/

#include <stdio.h>
int main()
{
	float length,width,height,volume,area;

	height=10;
	length=11.5;
	width=2.5;

	volume=height*length*width;
	area=(2*height*length)+(2*width*height)+(2*length*width);

	printf("The volume of the cubeoid is %f \n",volume);
	printf("The area of the cubeoid is %f \n",area);

	return 0;
}
// end main
