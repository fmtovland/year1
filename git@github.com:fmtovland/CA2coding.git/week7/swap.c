/*
Discription: Define an intager array with five elements. input values for this
array. make a second array and copy the values from the first array to the
second in reverse order.

Author: Liam McCormick
Date: 30-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 5		//number of intagers per array

int main()
{
	int array1[NUMNO];
	int array2[NUMNO];
	int i;	//for counters

	printf("Enter the elements of the first array \n");

	for(i=0; i<NUMNO; i++)
	{
		scanf("%d",&array1[i]);		//input the values
		array2[NUMNO-(i+1)]=array1[i];	//swap them around
	}//end for

	//debugging
/*
	for(i=0; i<NUMNO; i++)
	{
		printf("array1[%d] is %d \n",i,array1[i]);
	}//end for

	for(i=0; i<NUMNO; i++)
	{
		printf("array2[%d] is %d \n",i,array2[i]);
	}//end for
*/

}//end main
