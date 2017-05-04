/*
program description: sort an unknown number of numbers using the merge sort algorithm
author: Liam mc cormick
Date: 04-05-17
OS: Gentoo
Kernel: Linux 4.9.24
Compiler: GCC 5.4.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	//variables
	register int i; 	//for loops
	int *list1,*list2;	//the array will be stored in 1 while sorted into the other (many times)
	int numno;		//number of numbers to sort
	int actno;		//actual size of memory
	int sortsize;		//present size of block to be sorted
	int block;		//the block currently being sorted
	int blockno;		//number of blocks to sort

	//ask user for number of numbers
	printf("Enter number of numbers to be sorted: ");
	scanf("%d",&numno);

	//find actual number of numbers (will be a power of 2)
	actno=2;
	while(actno<numno)
		actno=2*actno;

	//allocate memory. a lot is wasted, but the algorithm will always work
	list1=malloc(sizeof(int)*actno);
	list2=malloc(sizeof(int)*actno);

	//initialise all values outside of the range we want to sort to infinity
	for(i=numno; i<actno; i++)
		*(list1+i)=INT_MAX;

	//get list of numbers from user
	printf("Enter %d numbers, on separate lines:\n",numno);
	for(i=0; i<numno; i++)
		scanf("%d",list1+i);	//write to list1 as if it were an array

	//calculate the initial number of sort blocks
	blockno=actno/2;
	sortsize=2;	//size of first block to sort

	//sort the data
	

	//free memory
	free(list1);
	free(list2);

}//end main
