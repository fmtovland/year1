/*
Discription: define and intager with four elements. read four numbers and
display on screen in the order they were entered. swap the first with the
second, and the third with the forth. display them in this new order.

Author: Liam McCormick
Date: 30-10-16
OS: Linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 4

int main()
{
	int intager[NUMNO];	//define the intager
	int number[NUMNO];	//holds the intager during the swapup logic
	int i;			//for loops

	for(i=0; i<NUMNO; i++)	//enter the intagers
	{
		printf("Enter a value for intager[%d] \n",i);
		scanf("%d",&intager[i]);
	}//end for

	printf("\n");	//seperate input form output1

	for(i=0; i<NUMNO; i++)	//print in order
	{
		printf("The value of intager[%d] is % d \n",i,intager[i]);
	}//end for

	printf("\n");	//seperate output1 from output2

	for(i=0; i<NUMNO; i=i+2)	//play swapup with the numbers
	{
		number[i]=intager[i+1];
		number[i+1]=intager[i];
	}//end for

	for(i=0; i<NUMNO; i++)	//print in the new order
	{
		printf("The value of number[%d] is %d \n",i,number[i]);
	}//end for

}//end main
