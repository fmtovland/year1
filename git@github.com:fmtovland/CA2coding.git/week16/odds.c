/*
Program Requirements:
Write a program that passes an array to a function containing 5 numbers and checks
each number if it is even or odd. Use your function to display each number and
whether it is even or odd. Calculate the total number of even numbers and return this
number to your main() and display it.

Program Author: Liam McCormick
Date: 16-02-17
OS: Gentoo
Kernel: Linux 4.9.9
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#define NUMNO 5		//number of numbers in the array

//prototypes
int evens(int*, int);


int main()
{
	register int i;		//for loops
	int total;		//the total of all the even numbers
	int array[NUMNO];	//array to hold 5 numbers

	for(i=0; i<NUMNO; i++)
	{
		printf("Enter value %d:   ",i+1);
		scanf("%d",array+i);

	}//end for
	printf("\n");	//add a neatness line

	total=evens(array,NUMNO);

	printf("\nThe total of all even numbers is %d \n",total);

}//end main

int evens(int *numbers, int size)
{
	register int i;
	int total=0;		//sum of even numbers

	for(i=0; i<size; i++)
	{
		if( *(numbers+i) % 2 == 0)
		{
			printf("%d is even \n",*(numbers+i));
			total= total + *(numbers+i);
		}

		else
		{
			printf("%d is odd \n",*(numbers+i));

		}//end else

	}//end for

	return total;

}//end evens
