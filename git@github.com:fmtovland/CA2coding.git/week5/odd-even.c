/*
Program Discription:

Write a program that asks the user to enter an integer between 1 and 100. Check
whether the integer is even or odd and print a message on the screen stating "Number
x is Even" or "Number y is Odd"

Author: Liam McCormick
Date: 10-10-16
OS: Linux Mint 17.2 (kernel version 3.16.0-38)
*/

#include <stdio.h>

int main()	//lack of brackets after main led to a compiler error.
{
	int intager,remainder;
	printf("Enter a number between 1 and 100 \n");
	scanf("%d",&intager);
	
	if(intager<100 && intager>1)
	{
	
		remainder = intager % 2;
	
		if(remainder==1)
		{
			printf("You entered an odd number \n");
		}//end if
	
		else if(remainder==0)
		{
			printf("You entered an even number \n");
		}//end else if
			
	}// end if intager not between 1 and 10
	
	else
		{
			printf("Error \n");
		}//end if else
}//end main
