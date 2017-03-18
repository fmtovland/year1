/*
Program Requirements: Using malloc() or calloc(), write a program to input a specified number of intager values into an array and to display the array and the sum of the elements in the array. Use pointers not subscripts in the program.
Author: Liam McCormick
Date: 26-01-17
OS: Gentoo
Kernel: Linux 4.9.5
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numno=0;	//number of numbers
	int *pntr;	//pointer to array created by malloc
	int ptrsize;	//size of memory to be allocated
	int i;		//loop counter
	int sum=0;	//sum of all values in the array

	printf("How many intager values should be entered? \n");
	scanf("%d",&numno);
	ptrsize = sizeof(int) * numno;

	pntr=malloc(ptrsize);
	
	if(pntr==NULL)
	{
		printf("Memory allocation error \n");
	}//end if

	for(i=0; i<numno; i++)
	{
		printf("Enter a number for the array \n");
//		printf("%p \n%p \n",pntr,(pntr+i));	//debugging code to find a specific problem
		scanf("%d",pntr+i);

	}//end for

	for(i=0; i<numno; i++)
	{
		sum = sum + *(pntr+i);
		printf("array[%d] is %d  \n",i,*(pntr+i));

	}//end for

	printf("the sum of all these numbers is %d \n",sum);

	free(pntr);

}//end main
