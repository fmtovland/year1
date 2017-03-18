/*
Program Discription:  read in 5 numbers. Copy the contents of this
array into another array (using only a loop remember!!)

Author: Liam McCormick
Date: 24-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 5
//NUMNO is the number of numbers to be read in

int main()
{
	int set1[NUMNO];
	int set2[NUMNO];
	int i,j;	//i and j will be used as counters later.

	for(i=0; i<NUMNO; i++)
	{
		j=i+1;
		//this idiot proofs it so set1[0] is read in human terms as 1.
		printf("enter number %d \n",j);
		scanf("%d",&set1[i]);

	}//end for to fill the array set 1

	for(i=0; i<NUMNO; i++)
	{
		set2[i]=set1[i];

	}//end for to fill the array set 2

	for(i=0; i<NUMNO; i++);
	{
		j=i+1;
		printf("Element %d of set2 is %d \n",j,set2[i]);

	}//end code to read the contents of set 2

}//end main
