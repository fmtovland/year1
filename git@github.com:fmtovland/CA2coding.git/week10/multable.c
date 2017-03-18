/*
Program Discription:


Write a program that uses a 3x2 array. Your program must do the following:

	a) Enter in values for each element in the array.
	b) Calculate and display the sum of row 0, row 1, and row 2 separately.
	c) Calculate and display the sum of column 0 and column 1 separately.
	d) Find the highest number in the array and display it.

Author: Liam McCormick
Date: 14-11-16
OS: Linux 3.16.0-38
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 2

int main()
{
	int array[ROWS][COLUMNS];
	int sum_rows[COLUMNS]={0};
	int sum_columns[ROWS]={0};
	int highest=0;
	int i,j;	//counters

	for(i=0; i<ROWS; i++)	//enter the values
	{
		for(j=0; j<COLUMNS; j++)
		{
			printf("Enter a value for array[%d][%d] \n",i,j);
			scanf("%d",&array[i][j]);

		}//end for j

	}//end for i

	printf("\n");

	for(i=0; i<ROWS; i++)	//print a table of the values
	{
		for(j=0; j<COLUMNS; j++)
		{
			printf("%d	",array[i][j]);

		}//end for j

		printf("\n");

	}//end for i

	printf("\n");

	for(i=0; i<COLUMNS; i++)	//find the sums of the rows
	{
		for(j=0; j<ROWS; j++)
		{
			sum_rows[i]=sum_rows[i]+array[j][i];

		}//end for j

	}//end for i

	for(i=0; i<ROWS; i++)	//find the sum of the columns
	{
		for(j=0; j<COLUMNS; j++)
		{
			sum_columns[i]=sum_columns[i]+array[i][j];

		}//end for j

	}//end for i

	for(i=0; i<ROWS; i++)   //print a table of the values
	{
		for(j=0; j<COLUMNS; j++)
		{
			printf("%4d",array[i][j]);

		}//end for j

		printf("%4d",sum_columns[i]);
		printf("\n");

	}//end for i

	for(i=0; i<COLUMNS; i++)
	{
		printf("%4d",sum_rows[i]);
	}//end for
	
	printf("\n");

}//end main
