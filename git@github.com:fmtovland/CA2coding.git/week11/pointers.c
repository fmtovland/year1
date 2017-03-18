/*
Program Requirements:
Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
that points to an integer and ptr2 that points to a character).
Initialise num1 and char1 to contain an integer and character. Initialise ptr1 to point to
num1 and ptr2 to point to char1. Your program should do the following:
a) Print the contents and address of num1 and char1 (on separate lines).
b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses
of num1 and char1 above).
c) Using the dereference operator (aka indirection operator), print the contents of
the addresses stored in ptr1 and ptr2.

Program Author: Liam McCormick
Date: 21-11-16
OS: Gentoo
Kernel: 4.8.7
GCC: 4.9.3
*/

#include <stdio.h>

int main()
{
	int num1=99;
	char char1='k';
	int *ptr1=&num1;
	char *ptr2=&char1;

	//Print the contents and address of num1 and char1 (on separate lines)

	printf("Num1 contains %d. It's address is %p \n",num1,&num1);
	printf("Char1 contains %c. It's address is %p \n",char1,&char1);

	//a neatness line
	printf("\n");

	//Print the contents of ptr1 and ptr2.
	//The output should be the same as the addresses of num1 and char1 above.

	printf("prt1 contains %p. prt2 contains %p. \n",ptr1,ptr2);

	//Using the dereference operator (aka indirection operator), print the contents of
	//the addresses stored in ptr1 and ptr2.

	printf("The contents of %p is %d. The contents of %p is %c \n",ptr1,*ptr1,ptr2,*ptr2);

}//end main
