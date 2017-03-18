/*
Program Requirements:
Write a program that uses a function to find the highest number in
an array containing 5 numbers. In the main(), you must ask the user to enter 5
numbers and store these in the array. Pass the array to a function and your function
must find the highest number. Return this number to your main() and display it

Program Author: Liam McCormick
Date: 16-02-17
OS: Gentoo
Kernel: 4.9.9
Compiler: 4.9.4
*/

#include <stdio.h>
#include <liblml.h>
#define NUMNO 5

int main()
{
	int highest;		//highest number will be returned to this value
	int array[NUMNO];	//an array of 5 numbers
	register int i;		//for loops

	for(i=0; i<NUMNO; i++)
	{
		printf("Enter number %d:  ",i+1);
		scanf("%d",array+i);

	}//end for

	highest=biggest_num(array,NUMNO);

	printf("\nThe Highest Number is %d\n",highest);

}//end main
