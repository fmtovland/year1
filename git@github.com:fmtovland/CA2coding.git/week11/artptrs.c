/*
Program requirements:
Write a program that asks the user to enter 2 integer values. Store these in variables
called num1 and num2 respectively. Using pointers only, find the sum of these
numbers, store them in a third variable called sum, and display this value stored in
variable sum. (Hint: the indirection operator will be used to perform most of your
task). NB - don't forget that you will need 3 pointer variables.

Program Author: Liam Mc Cormick
Date: 28-11-2016
OS: Gentoo
Kernel: 4.8.11
GCC: 4.9.3
*/

#include <stdio.h>

int main()
{
	int num1,num2,sum;	//two to add together, one to hold the result
	int *ptr1,*ptr2,*ptrS;	//a pointer for each of the above

	//connect each pointer to it's respective variable

	ptr1=&num1;
	ptr2=&num2;
	ptrS=&sum;

	//read the user's input

	printf("Enter two numbers \n");
	scanf("%d %d",ptr1,ptr2);

	//do the math

	*ptrS = *ptr1 + *ptr2;
	printf("%d + %d = %d \n",*ptr1,*ptr2,*ptrS);


}//end main
