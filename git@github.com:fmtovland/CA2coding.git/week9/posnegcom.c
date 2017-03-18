/*
Program requirements: Write a program to input values to a 4 by 5 intager array, search the array for values that are less than 0 and display these values along with their row and column indices.
Program Author: Liam Mc Cormick
Date: 19-11-16
OS: Gentoo
Kernel: 4.8.7
GCC: 4.9.3
*/

#include <stdio.h>
#define HEIGHT 4
#define WIDTH 5

int main()
{
	int array[HEIGHT][WIDTH];	//the 4x5 array
	int i,j;	//counters for for loops

	for(i=0; i<HEIGHT; i++) //fill the array
	{
		for(j=0; j<WIDTH; j++)
		{
			printf("Enter a value for row %d column %d \n",i,j);
			scanf("%d",&array[i][j]);
		}//end for j

	}//end for i

	printf("\n");
	
	for(i=0; i<HEIGHT; i++)	//print the ones less than 0
	{
		for (j=0; j<WIDTH; j++)
		{
			if(array[i][j]<0)
			{
				printf("Row %d Column %d is less than zero. Value is %d \n",i,j,array[i][j]);
			}//end if
		
		}//end for j
	
	}//end for i

}//end main
