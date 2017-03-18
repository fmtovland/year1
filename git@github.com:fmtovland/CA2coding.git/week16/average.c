/*
Program Requirements:
Write a program that uses a function to calculate the average of 5
numbers in an array. In the main(), you must ask the user to enter 5 numbers and store
these in the array. Pass the array to a function and calculate the average of these 5
numbers. Return the average to your main() and display this

Program Author: Liam McCormick
Date: 16-02-17
OS: Gentoo
Kernel: Linux 4.9.9
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <liblml.h>
#define NUMNO 5

int main()
{
	int array[NUMNO];
	float average;
	register int i;

	for(i=0; i<NUMNO; i++)
	{
		printf("Enter a value for %d:  ",i+1);
		scanf("%d",array+i);

	}//end for

	average=mean_average(array,NUMNO);
	printf("\nAverage of the numbers is %.2f \n",average);

}//end main
