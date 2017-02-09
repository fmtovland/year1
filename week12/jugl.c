/*
Program Requirements:
Write a program that reads 3 integers into an integer array and copies these numbers
to a different integer array. Display the contents of each array side by side. You must
use pointer notation only to read the numbers into the array, copying the numbers,
and displaying the contents of both arrays.

Author: Liam McCormick
Date: 28-11-16
OS: Gentoo
Kernel: 4.8.11
GCC: 4.9.3
*/

#include <stdio.h>
#define NUMNO 3

int main()
{
	int array1[NUMNO],array2[NUMNO];
	int i;

	//fill first array and copy to second array
	for(i=0; i<NUMNO; i++)
	{
		printf("Enter a value for %d \n",i);
		scanf("%d",array1+i);

		*(array2+i) = *(array1+i);
		
	}//end for
	
	//output
	for(i=0; i<NUMNO; i++)
	{
		printf("array1[%d] contains %d    AND    array2[%d] contains %d",*(array1+i),i,*(array2+i),i);
		printf("\n");

	}//end for

}//end main
