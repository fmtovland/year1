/*
Program Requirements:
Returning a value from a function. Write a program that uses a function to calculate
the most commonly used character from a number of 3 characters entered by a user.
Your main() should read the 3 characters and these should be passed to your function.
Your function should calculate the most common character of the 3 (assume the user
enters more than one occurrence of any character). This character should then be
returned to the main(). Your main() should then display this character with an
appropriate message

Author: Liam McCormick
Date: 09-02-17
OS: Gentoo
Kernel: Linux 4.9.8
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <liblml.h>	//a library I wrote with a function for calculating mode (at present time multiple modes are not supported
#define NUMNO 3		//number of numbers in the array

//prototype
int mode_average(int*,int);

int main()
{
	int data[NUMNO];	//hold the 3 numbers
	int mode;		//hold the mode
	int i;			//for loops

	printf("Enter %d numbers \n",NUMNO);

	for(i=0; i<NUMNO; i++)
	{
		scanf("%d",data+i);

	}//end for

	mode=mode_average(data,NUMNO);

	printf("%d occurs the most \n",mode);

}//end main
