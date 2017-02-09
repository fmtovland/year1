/*
Program Requirements:
Using pointer notation only, write a program that uses 2 floating-point arrays with 3
elements in each. Enter values into the 1st array. Copy the contents of this array into
the 2nd array. Display the contents of both arrays.

Program Author: Liam Mc Cormick
Date: 28-11-2016
OS: Gentoo
Kernel: 4.8.11
GCC: 4.9.3
*/

#include <stdio.h>
#define NUMNO 3 //the number of elements per array

int main()
{
	int array1[NUMNO],array2[NUMNO];	//the two arrays
	int i;					//the counter

	//fill first array
	for(i=0; i<NUMNO; i++)
	{
		printf("Enter a value for array1[%d]	",i);
		scanf("%d",array1+i);

	}//end for to fill first array
	printf("\n");

	//copy first array to second
	for(i=0; i<NUMNO; i++)
	{
		*(array2+i)=*(array1+i);

	}//end for to fill second array (from first)

	//print contents of both arrays
	for(i=0; i<NUMNO; i++)
	{
		printf("array1[%d] = %d		array2[%d] = %d \n",i,*(array1+i),i,*(array2+i));

	}//end for print contents of both arrays

}//end main
