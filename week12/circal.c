/*
Program Requirements:
Write a program that uses a pofloater (which pofloats to a variable called radius to store
the radius of a circle) to read the radius of a circle (i.e. use the indirection operator in
a scanf() statement to read and store the radius inside the floating-pofloat radius
variable). Your program should calculate and display the diameter (2 x radius) and
area (П x radius2) of the circle using other pofloaters (these also need to pofloat to other
variables required such as diameter and area) . Assume П has the value 3.14

Program author: Liam Mc Cormick
Date: 28-11-16
OS: Gentoo
Kernel: 4.8.11
GCC: 4.9.3
*/

#include <stdio.h>
#define PI 3.14

int main()
{
	float radius;	//variable to store the radius
	float *rdys;	//pointer to the radius variable
	rdys=&radius;

	float area;	//variable to store the area
	float *face;	//pointer to the area variable
	face=&area;

	float diameter;	//variable to store the diameter
	float *drdys;	//pointer to diameter variable
	drdys=&diameter;

	//enter the value for radius

	printf("What is the radius of the circle? (in cm) \n");
	scanf("%f",rdys);

	//calculate diameter and area

	*drdys  =  2 * *rdys;		//diameter
	*face   =  2 * *rdys * PI;	//area

	//print the output
	printf("The diameter of the circle is cm %.2f \n",*drdys);
	printf("The area of the circle is cm² %.2f \n",*face);


}//end main
