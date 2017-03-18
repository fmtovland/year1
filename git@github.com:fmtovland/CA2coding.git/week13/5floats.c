/*
Program Requirements:

Write a program that uses dynamic memory allocation to allocate memory for 5
floating-point numbers. You can use either malloc() or calloc().
After memory has been allocated for the 5 float numbers, enter these numbers.
Calculate the average of these numbers and store this average in another allocated
memory block. Display all of the 5 float values on the screen and the average. (Hint:
you will need to use 2 float pointers, one pointing to the block of memory storing the
5 floating-point numbers, and one pointing to the block of memory storing the
average of the 5 numbers).

Author: Liam Mc Cormick
Date: 30-01-2016
OS: Gentoo
Kernel: 4.9.5
Compiler: GCC 4.9.4
*/


#include <stdio.h>
#include <stdlib.h>

#define NUMNO 5		//number of numbers in the dynamically allocated array

int main()
{
	float *numbers;
	float *average;
	float total=0;	//sum of all numbers
	int i;		//for loops


	numbers = malloc(sizeof(float)*NUMNO);
	average = malloc(sizeof(float));


	printf("Enter 5 numbers \n");

	for(i=0; i<NUMNO; i++)
	{
		scanf("%f",numbers+i);
		total = total + *(numbers+i);
	}

	*(average) = total/NUMNO;


	printf("The numbers are ");

	for(i=0; i<NUMNO; i++)
	{
		printf("%.0f, ",*(numbers+i));

	}//end for

	printf("\nThe average is %.2f \n",*average);

	free(numbers);
	free(average);

}//end main
