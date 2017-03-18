/*
Program requirements: Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result.

Author: Liam McCormick
Date: 09-02-17
OS: Gentoo
Kernel: Linux 4.9.8
Compiler: GCC 4.9.4
*/

#include <stdio.h>

//protorype
short is_even(int);

int main()
{
	int subject;	//number to check whether odd or even
	short result;	//where to return the reults of is_even to. 1 means odd, 0 even

	printf("Enter a whole number \n");
	scanf("%d",&subject);

	result=is_even(subject);

	if(result == 0)
	{
		printf("%d is even \n",subject);

	}//end if

	else
	{
		printf("%d is odd \n",subject);

	}//end else

}//end main

short is_even(int number)
{
	short finding;	//will be returned at end of function

	finding = number % 2;

	return finding;

}//end is_even
