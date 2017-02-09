/*
Discription: Read in 5 characters to an array and then output them.
Author: Liam Mc Cormick
Date: 30-10-16
OS: Linux Mint 17.2 (Kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 5	//the number of characters in the array

int main()
{
	int charray[NUMNO];	//the array to hold the characters
	int i;			//for for loops

	printf("Enter %d characters \n",NUMNO);

	for(i=0; i<NUMNO; i++)
	{
		charray[i]=getchar();
	}//end for

	for(i=0; i<NUMNO; i++)
	{
		printf("%c",charray[i]);
	}//end for

	printf("\n");

}//end main
