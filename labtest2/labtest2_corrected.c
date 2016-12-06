/*
Program requirements: Create an array and fill it in certain predetermined ways
Program Author: Liam McCormick
Date: 05-12-16
OS: Gentoo
Kernel: Linux 4.8.11
GCC:4.9.3
*/

#include <stdio.h>
#define NUMNO 5 	//the number of elements per row/column in the array
#define COUNTERS 4	//the number of elements in the array to count how many of each 
			//value are in the final array

int main()
{
	int i,j,k;			//counters for loops
	int array[NUMNO][NUMNO];	//the array we will be playing with
	int counter[COUNTERS]={0};
	int values[COUNTERS]={2,1,5,0};			//hold the values to write to elements repeatedly

	for(i=0; i<NUMNO; i++)	//initialise array to 5
	{
		for(j=0; j<NUMNO; j++)
		{
			array[i][j]=values[2];

		}//end for j

	}//end for i to initialise array to 5

	for(i=0; i<NUMNO; i++)  //set diagonals to 0
	{
		for(j=0; j<NUMNO; j++)
		{
			if(i==(NUMNO-1-j) || i==j)	//each of the diagonals is a set of co-ordinates of the same x and y value
			{
				array[i][j]=values[3];
			}

		}//end for j

	}//end for i to set diagonals to 0
	
	for(i=0; i<NUMNO; i++)  //set all mid values to 1
	{
		for(j=0; j<NUMNO; j++)
		{
			if(i==(2) || j==(2))	//each of the diagonals is a set of co-ordinates of the same x and y value
			{		//NUMNO/2 gives us 2 which is the center of the row
				array[i][j]=values[1];
			}

		}//end for j

	}//end for i to set all mid values to 1

	for(i=0; i<NUMNO; i++)  //set the corners of the matrix to be 2
	{
		for(j=0; j<NUMNO; j++)
		{
			if(i%(NUMNO-1)==0 && j%(NUMNO-1)==0 ) //if the number is the top or bottom of the array
			{			//the minus 1 means the event is triggered at 4 not 5 since the array co-ordinates only go up to 5
				array[i][j]=values[0];
			}

		}//end for j

	}//end for i to set all mid values to 1

	for(i=0; i<NUMNO; i++)	//count how many of each variable were in the array
	{
		for(j=0; j<NUMNO; j++)
		{
			for(k=0; k<COUNTERS; k++)
			{
				if(array[i][j]==values[k])
				{
					counter[k]++;

				}//end if

			}//end for k
			
		}//end for j
	
	}//end for i to count how many of each variable were in the array
	
	//print a grid for debugging
/*	
	for(i=0; i<NUMNO; i++)
	{
		for(j=0; j<NUMNO; j++)
		{
			printf("%d",array[i][j]);
			
		}//end for
		
		printf("\n");

	}//end for
*/	
	for(i=0; i<COUNTERS; i++)	//print output
	{
		printf("there were %d %ds \n",counter[i],values[i]);
		
	}//end for

}//end main
