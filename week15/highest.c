/*
Program Requirements:
Returning a value from a function. Write a program that uses a function to check for
the highest value of 3 numbers. You should enter the 3 numbers using main() and
these should be passed to your function. Your function should find the highest of
these numbers and return it back to main(). Your main() should then display this
highest number

Author: Liam McCormick
Date: 09-02-17
OS: Gentoo
Kernel: 4.9.8
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <liblml.h>	//contains a function for finding the highest number that I wrote previously
			//can be found in the repository mylibs
#define NUMNO 3		//number of numbers in array

//prototype
int biggest_num(int*,int);

int main()
{
	int tallest;		//the return value for the highest number
	int data[NUMNO];	//holds the array to add together
	int i;			//for loops

	printf("Enter %d numbers \n",NUMNO);

	for(i=0; i<NUMNO; i++)
	{
		scanf("%d",data+i);
	}

	tallest=biggest_num(data,NUMNO);

	printf("%d is the highest number \n",tallest);

}//end main
