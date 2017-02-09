/*
Discription: complete the given code
for (i = 0; i < 10; i++)
 {
 a[i] = 9 - i;
 }
 for (i = 0; i < 10; i++)
 {
 a[i] = a[ a[i] ];
 }

Program Author: Liam McCormick
Date: 07-11-2016
OS: Linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NUMNO 10

int main()
{
	int i;
	int a[NUMNO];

	for (i = 0; i < NUMNO; i++)
	{
		a[i] = 9 - i;
	}//end for

	for (i = 0; i < NUMNO; i++)
	{
		a[i] = a[ a[i] ];
	}//end for

	for(i=0; i<NUMNO; i++)
	{
		printf("a[%d] is %d \n",i,a[i]);
	}

}//end main
