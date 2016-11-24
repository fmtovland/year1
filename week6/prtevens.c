/*
Program Discription: Using a loop, print out all the evennumbers from 1 - 100, separated by commas.
Program Author: Liam McCormick
Date: 17-10-16
OS: Linux Mint 17.2 (Kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int i;
	for(i=2; i<100; i=i+2)
	{
		printf("%d,",i);
	}//end for
	
	printf("%d\n",i);
}//end main
