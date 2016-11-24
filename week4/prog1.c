/*
Author: Liam McCormick
Discription: Ask the user to enter three numbers, then print them to seperate lines
Date: 03-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int num1,num2,num3;
	num1=num2=num3=0;

	printf("Enter 3 whole numbers \n");
	scanf ("%d %d %d",&num1,&num2,&num3);
	printf("\n%d \n%d \n%d \n",num1,num2,num3);

	return 0;
} 
// end main
