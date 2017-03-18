/*
Program Requirements:
Declare and initialise a floating-point array with 3 elements to contain 1.1, 2.2, and
3.3 respectively. Using pointer notation only, try to display the contents of the
addresses outside the bounds of this array, e.g. display the contents of the memory
address before the first element (1.1) and after the last element (3.3) in the array. 

Author: Liam McCormick
Date: 29-11-16
OS: Gentoo
Kernel: 4.8.11
GCC: 4.9.3

*/

#include <stdio.h>
#define NUMNO 3

int main()
{
	float point1[NUMNO]={1.1, 2.2, 3.3};	//the array, initialised.
	
	int i;	//will track the following for loop
	
	for(i=-1; i<=NUMNO; i++)	//will print the contents of the array point1, 
	{				//plus one address before and one address after
		printf("%f \n",*(point1+i));

	}//end for

}//end main
