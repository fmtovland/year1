/*
program requirements:
. Write a program that uses 2 functions (1 function to calculate the
area of a Square, another function to calculate the area of a Circle). Declare a variable
in your main for the length of a side of the Square and another variable for the Radius
of the Circle. Ask the user to enter these values. Using Pass by Reference, pass these
as parameters to the separate functions, calculate the areas of the Square and Circle in
their separate function, and display the results in your main(). Remember, you must
use Pass by Reference. Do not forget to declare 2 prototypes for your 2 functions.

Author: Liam McCormick
Date: 16-02-17
OS: Gentoo
Kernel: 4.9.9
Compiler: 4.9.4
*/

#include <stdio.h>
#define PI 3.14159265359

//prototypes
float circle_area(int*);
int square_area(int*);

int main()
{
	int length;	//the length of one side of the square
	int radius;	//the radius of the circle
	float carea;	//area of circle
	int sarea;	//area of square

	printf("Enter the length of the side of a square \n");
	scanf("%d",&length);
	sarea=square_area(&length);
	printf("\nThe area of that square is %d \n\n\n",sarea);

	printf("Enter the radius of a circle \n");
	scanf("%d",&radius);
	carea=circle_area(&radius);
	printf("\nThe area of that circle is %.3f \n\n\n",carea);

}//end main

float circle_area(int *radius)
{
	float area;
	area= 2.0 * PI * *radius;
	return area;

}//end circle_area

int square_area(int *side)
{
	float area;
	area= *side * *side;
	return area;

}//end square area
