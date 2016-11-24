/*
Discription: Write a program to read in two intagers and check if the first is divisable by the second.
Author: Liam Mc Cormick
Date: 10-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int number1,number2,remainder;
	printf("Enter two numbers on seperate lines \n");
	scanf("%d %d",&number1,&number2);
	remainder = number1 % number2;
	
	if(remainder==0)
	{
		printf("%d is evenly divisable by %d \n",number1,number2);
	}//end if
	
	else
	{
		printf("%d is not evenly divisable by %d \n",number1,number2);
	}//end else
	
}//end main
