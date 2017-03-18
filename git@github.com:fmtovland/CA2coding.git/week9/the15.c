/*
Program Discription: Read in 15 numbers  and display them in given ways
Program Author: Liam Mc Cormick
Date: 07-11-2016
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 15	//the number of numbers in the array

int main()
{
	int i;			//for the for loops
	int array[NUMNO];	//The array

	for(i=0; i<NUMNO; i++)	//lets fill the array
	{
		printf("enter a number \n");
		scanf("%d",&array[i]);
	}//end for


	printf("(a) \n");
	for(i=0; i<NUMNO; i++)
	{
		printf("%d \n",array[i]);
	}//end for

	printf("\n");

	printf("(b) \n");
	for(i=0; i<NUMNO; i++)
	{
		printf("%d ",array[i]);
	}//end for

	printf("\n \n");

	printf("(c) \n");
	for(i=NUMNO-1; i>=0; i--)
	{
		printf("%d ",array[i]);
	}//end for

	printf("\n");

}//end main
