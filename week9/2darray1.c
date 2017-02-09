/*
Program Discription:
Write a program that uses a 3x2 (2-D) array. Your program must do the following:
a) Enter values into the array
b) Display the values in the array
c) Find the smallest & largest value and display these
d) Calculate the average of the values and display this

Program Author: Liam McCormick
Date: 07-11-2016
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define ROWS 	3	//The number of rows in our array
#define COLUMNS 2	//The number of columns in our array
#define LIMIT	32769	//the largest value of an intager in C

int main()
{
	int array[ROWS][COLUMNS]={0};	//our 2d array
	int i,j;			//for for loops
	int biggest;			//largest value
	int smallest;			//smallest value
	int total;			//total number of values
	float average;			//average of all values


	for(i=0; i<ROWS; i++)
	{
		for(j=0; j<COLUMNS; j++)
		{
			printf("enter value for array[%d][%d] \n",i,j);
			scanf("%d",&array[i][j]);
		}//end for(j)

	}//end for(i)
	//fill the array

	printf("\n");	//a space between the input and output lines for neatness

	for(i=0; i<ROWS; i++)
	{
		for(j=0; j<COLUMNS; j++)
		{
			printf("The of array[%d][%d] is %d     ",i,j,array[i][j]);
		}//end for(j)

		printf("\n");	//organise the output in a grid

	}//end for(i)

	printf("\n");	//neatness space

	biggest=0;	//preparation to find the largest
	smallest=LIMIT;	//and the smallest
	total=0;	//not to mention the total

	for(i=0; i<ROWS; i++)
	{
		for(j=0; j<COLUMNS; j++)
		{
			if(array[i][j]>biggest)//contest the biggest
			{
				biggest=array[i][j];
			}//end if

			else if(array[i][j]<smallest)//contest the smallest
			{
				smallest=array[i][j];
			}//end if

			total=total+array[i][j];//add to the total

		}//end for(j)

	}//end for(i)

	average=(float)total/(ROWS*COLUMNS);	//calculate the mean
	printf("The smallest number is %d \n",smallest);	//print the smallest
	printf("The Largest number is %d \n",biggest);		//print the largest
	printf("The average is %.2f \n",average);			//print the average

}//end main
