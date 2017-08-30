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
	int *tmp;		//for swapping list1 and list2
	int numno;		//number of numbers to sort
	int actno;		//actual size of memory
	int sortsize;		//present size of block to be sorted
	int block;		//the first of the two blocks currently being merged
	int element1,element2;	//a pointer within each block
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
	blockno=actno;
	sortsize=1;	//size of first block to sort

	//sort the data
	while(sortsize<actno)
	{
		//copy list1 into list 2 while sorting
		block=0;
		i=0;
		while(block<actno)
		{
			element1=element2=0;
			while(element1<sortsize && element2<sortsize)	//merge 2 blocks together
			{
				if( *(list1+block+element1) > *(list1+block+sortsize+element2) )
				{
					*(list2+i) = *(list1+(block)+sortsize+element2);
					element2++;

				}//end if

				else
				{
					*(list2+i) = *(list1+block+element1);
					element1++;

				}//end else

				i++;	//increment pointer to last written element on list 2

			}//end while

			//copy any remaining elements in the block to list 2

			while(element1<sortsize)
			{
				*(list2+i) = *(list1+block+element1);
				element1++;
				i++;

			}//end while

			while(element2<sortsize)
			{
				*(list2+i) = *(list1+(block)+sortsize+element2);
				element2++;
				i++;

			}//end while

			block=block+(2*sortsize);	//move pointer to next block

		}//end while

		//swap list1 and list2
		tmp=list1;
		list1=list2;
		list2=tmp;

		//increment loop
		blockno=blockno/2;
		sortsize=sortsize*2;
	}

	//print output
	printf("\n");
	for(i=0; i<numno; i++)
		printf("%d\n",*(list1+i));

	//free memory
	free(list1);
	free(list2);

}//end main
