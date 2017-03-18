/*
program requirements: Write a program that uses a function to print 10 stars (*) on a single line. Ensure you declare your function prototype and include adequate comments
author: Liam McCormick
Date: 02-02-17
OS: Gentoo
Kernel: linux 4.9.6-r1
Compiler: gcc 4.9.4
*/

#include <stdio.h>
#define NUMNO 10	//number of stars to print

//prototypes
void stars(int);

int main()
{
	stars(NUMNO);
	printf("\n");
	return 0;
}//end main

void stars(int numno)
{
	int i;

	for(i=0; i<numno; i++)
	{
		printf("*");

	}//end for

}//end stars
