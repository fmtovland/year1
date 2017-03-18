/*
Program Requirements:
Write a program that uses 2 float variables called input1 and input2. Enter values
for these variables. Using pointers (called ptr1 and ptr2), your program should do
the following:
a) Print the address of input1 and input2 (on separate lines).
b) Print the address of ptr1 and ptr2 (on separate lines) - Remember, even though
these are pointers, they are still variables. Therefore, each will also have their
own address in memory.
c) Make ptr1 and ptr2 point to input1 and input2 respectively. Print the contents of
ptr1 and ptr2. (The output should be the same as the addresses of input1 and
input1 above).
d) Using the dereference operator, print the contents of the address stored in ptr1
and ptr2

Program Author: Liam McCormick
Date: 21-11-16
OS: Gentoo
kernel: 4.8.7
GCC: 4.9.3
*/

#include <stdio.h>

int main()
{
	float input1,input2;
	input1=22.0/7.0;
	input2=10.0/3.0;
	float *ptr1,*ptr2;

	printf("The address of input1 is %p \n",&input1);
	printf("The address of input2 is %p \n",&input2);

	printf("The address of ptr1 is %p \n",&ptr1);
	printf("The address of ptr2 is %p \n",&ptr2);

	ptr1=&input1;
	ptr2=&input2;

	printf("ptr1 points to %p \n",ptr1);
	printf("ptr2 points to %p \n",ptr2);

	printf("%p contains %f \n",ptr1,*ptr1);
	printf("%p contains %f \n",ptr2,*ptr2);

}//end main
