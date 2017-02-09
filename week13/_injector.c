/*
Program requirements: given an array such as char chars[] = {'a',' ','b',' ','c',' ',' ','d'}; write a program that replaces all the blank elements in the character array with the underline character '_'. use a pointer rater than subscript to access the elements of the array.
Program author: Liam Mc Cormick
Date: 26-01-17
OS: Gentoo
Kernel: Linux 4.9.5
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#define NUMNO 8		//the number of elements in the array chars

int main()
{
	char chars[NUMNO] = {'a',' ','b',' ','c',' ',' ','d'};
	char *pntr=chars;
	int i;		//a pointer to control loops

	for(i=0; i<NUMNO; i++)
	{
		if(*(pntr+i) == ' ')
		{
			*(pntr+i) = '_';

		}//end if

	}//end for

	for(i=0; i<NUMNO; i++)
	{
		printf("'%c', ",*(pntr+i));

	}//emd for

	printf("\n");

}//end main
