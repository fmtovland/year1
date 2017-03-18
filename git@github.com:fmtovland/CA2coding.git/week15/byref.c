/*
Program Requirements:
Write a program similar to Q5 but this time use Pass by Reference
to modify the integer variable declared in main().

Author: Liam Mc Cormick
Date: 10-02-17
OS: gentoo
Kernel: linux 4.9.9
Compiler: GCC 5.4.0
*/

#include <stdio.h>

//prototype
void function(int*);

int main()
{
	int clowns=1;

	function(&clowns);

	printf("Clowns = %d \n",clowns);

}//end main

void function(int *pigs)
{
	*pigs=*pigs + 1;
	printf("Pigs = %d \n",*pigs);

}//end function
