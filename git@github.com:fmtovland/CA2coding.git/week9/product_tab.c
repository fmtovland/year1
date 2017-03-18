/*
Program Dicription: Input 10 numbers into two arrays and multiply the corrosponding values of each array together
Program Author: Liam Mc Cormick
Date: 19-11-2016
OS: Gentoo linux
Kernel: 4.8.7
GCC: 4.9.3
*/

#include <stdio.h>
#define NUMNO 5	//number of elemnts in each array

int main()
{
	int set1[NUMNO],set2[NUMNO];	//the two arrays
	int product[NUMNO];		//an array to hold the product of the two arrays
	int i;	//a counter for loops

	for(i=0; i<NUMNO; i++)	//fill the first array
	{
		printf("Enter a value for set1[%d] \n",i);
		scanf("%d",&set1[i]);

	}//end for to fill first array

	printf("\n");

	for(i=0; i<NUMNO; i++)	//fill the second array
	{
		printf("Enter a value for set1[%d]. This will be multiplied by %d \n",i,set1[i]);
		scanf("%d",&set2[i]);
	}//end for to fill second array

	printf("\n");

	for(i=0; i<NUMNO; i++) //for to multiply the two together and display the results
	{
		product[i]=set1[i]*set2[i];
		printf("%dx%d=%d \n",set1[i],set2[i],product[i]);

	}//end for to multiply two together and print results

}//end main
