/*
Discription: Read in three numbers and sort them in assending order.
Author: Liam McCormick
Date: 30-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 3

int main()
{
	int unsorted[NUMNO];	//the array to hold the numbers till they're sorted
	int sorted[NUMNO];	//the array to hold the numbers after sorting them
	int i,j;		//for for loops
	int rank;		//will hold the order of the numbers

	printf("Enter %d numbers on seperate lines \n",NUMNO);

	for(i=0; i<NUMNO; i++)
	{
		scanf("%d",&unsorted[i]);
	}//end for

	printf("\n");	//sepperate input from output

	for(i=0; i<NUMNO; i++)	//put in order of size
	{

		rank=0;
		for(j=0; j<NUMNO; j++)
		{
			if(unsorted[i]>unsorted[j])
			{
				rank++;
			}//end if

		}//end for

		sorted[rank]=unsorted[i];

	}//end for

	for(i=0; i<NUMNO; i++)
	{
		printf("%d \n",sorted[i]);
	}//end for

}//end main
