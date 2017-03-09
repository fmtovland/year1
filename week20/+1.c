/*
Enter a string. if all numbers then convert to int and add 1. else print error message
Program Author: Liam McCormick
Date: 09-03-17
OS: Gentoo
Kernel: Linux 4.9.6
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <string.h>
#define CODELEN 4	//scanf at ask user to enter number

//prototype
int isnum(char*);

int main()
{
	char code[5];		//the 4 character string
	int numcode;		//the code as an intager
	int isint;		//whether the code is numeric

	//ask user to enter a number
	printf("Enter a four character number\n");
	scanf("%4s",code);

	//verify string is number
	isint=isnum(code);

	if(isint!=0)
	{
		printf("Thats not a number!\n");
		return 1;
	}

	//convert to an intager
	numcode=atoi(code);

	//add 1
	numcode++;

	//print result
	printf("%d\n",numcode);

}//end main


int isnum(char *code)
{
	register int i;
	int result=0;

	for(i=0; i<CODELEN; i++)
	{
		if( *(code+i) < '0' || *(code+i) > '9' )
		result=1;

	}//end for

	return result;

}
