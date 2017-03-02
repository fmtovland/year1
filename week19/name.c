/*
Program Requirements:
Write a program to read in your name and display it with a space between each letter

Author: Liam Mc Cormick
Date: 02-03-17
OS: Gentoo
Kernel: Linux 4.10
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#define NAMESIZE 60	//maximum length of a name
			//scanf at getname in main

int main()
{
	register int i=0;	//for loops
	char name[NAMESIZE];	//hold a name

	//get name
	printf("Enter your name\n");
	scanf("%59s",name);

	//print with spaces
	while(name[i] != '\0')
	{
		printf("%c ",name[i]);
		i++;

	}//end while

	printf("\n");
	return 0;

}//end main
