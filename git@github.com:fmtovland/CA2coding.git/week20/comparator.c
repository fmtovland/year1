/*
Write a program that allows a user to input two words. Compare these words to see if
they are the same. Display appropriate messages whether or not the two words are the
same.

Author: Liam Mc Cormick
Date: 12-03-17
OS: Gentoo
Kernel: Linux 4.10
Compiler: GCC 5.4
*/

#include <stdio.h>
#include <string.h>
#include <lminput.h>
#define NUMNO 20	//max number of chars per string

int main()
{
	int same;
	char string1[NUMNO+1];
	char string2[NUMNO+1];

	//get user input
	printf("Enter two strings on seperate lines\n");
	wordget(string1,NUMNO);
	wordget(string2,NUMNO);

	//tell user the result
	if(strcmp(string1,string2)==0)
	printf("Strings are the same\n");
	else
	printf("Strings are different\n");
}
