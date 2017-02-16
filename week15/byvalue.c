/*
Program Requirements:
Write a program to demonstrate the use of Pass by Value with a
function. Begin by creating an integer variable in your main() and initialise it to 1.
Print this value here. Next, call your function and pass this variable as a parameter to
the function. Increment the parameter in your function by 2 and print this value. Your
function should end here and control passed back to your main(). Print the value of
the variable in your main() again and see if it has changed value. Did the function
increment the variable in your main()?

Author: Liam Mc Cormick
Date: 10-02-17
OS: gentoo
Kernel: linux 4.9.9
Compiler: GCC 5.4.0
*/

#include <stdio.h>

//prototype
int function(int);

int main()
{
	int clowns=1;

	function(clowns);

	printf("Clowns = %d \n",clowns);

}//end main

int function(int pigs)
{
	pigs++;
	printf("Pigs = %d \n",pigs);
	return pigs;

}//end function
