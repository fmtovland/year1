/*
Program Description:  Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4
columns in each) when they are declared. In your program, declare a 3rd 3x4 array.
Multiply each corresponding element in the 1st and 2nd array and store this product in
the corresponding element of the 3rd array. For example, array3[0][0] = array1[0][0] x
array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc.

Program Author: Liam McCormick
Date: 14-11-16
OS: Linux 3.16.0-48
*/

#include <stdio.h>
#define HEIGHT 4
#define WIDTH 3

int main()
{
	int array1[WIDTH][HEIGHT],array2[WIDTH][HEIGHT],array3[WIDTH][HEIGHT];	//this defines 3 arrays
	int i,j; //these are for counters

	printf("Enter %d values for array1 \n",(WIDTH * HEIGHT));

	for(i=0; i<WIDTH; i++)
	{
		for(j=0; j<HEIGHT; j++)
		{
			scanf("%d",&array1[i][j]);	//insert first set of numbers.
		}//end for j

	}//end for i

	printf("Enter %d values for array2 \n",(WIDTH * HEIGHT));

	for(i=0; i<WIDTH; i++)
	{
		for(j=0; j<HEIGHT; j++)
		{
			scanf("%d",&array2[i][j]);	//insert second set of numbers
		}//end for j

	}//end for j

	for(i=0; i<WIDTH; i++)
	{
		for(j=0; j<HEIGHT; j++)
		{
			array3[i][j]=array1[i][j] * array2[i][j];	//multiply  two sets of numbers in bulk
			printf("%d x %d = %d \n",array1[i][j],array2[i][j],array3[i][j]);	//print the results to the screen
		}//end for j

	}//end for i

}//end main
