/*
Program Requirements: Write a program that uses a function with 2 parameters (a character and an integer,
e.g. function_name(char, int). Your function must display the character parameter a
certain number of times on one line where this number is the integer parameter. For
example, if your function is function_name(*,5) it will display
*****

Program Author: Liam Mc Cormick
Date: 02-02-2016
OS: Gentoo
Kernel: 4.9.6-r1, 4.9.7(concurrently compiling)
Compiler: GCC 4.9.4
*/

#include <stdio.h>

//prototypes
void function_name(char,int);

int main()
{
	char rinse;
	int repeat;

	printf("enter a character \n");
	scanf("%c",&rinse);

	printf("how many times do you wish it printed \n");
	scanf("%d",&repeat);

	function_name(rinse,repeat);

	printf("\n");
	return 0;

}//end main


void function_name(char stamp, int times)
{
	int i;

	for(i=0; i<times; i++)
	{
		printf("%c",stamp);

	}//end for

}//end function_name
