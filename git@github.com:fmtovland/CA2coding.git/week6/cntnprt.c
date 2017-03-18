/*
Program Discription:
Write a program that counts from one to ten, prints the values on a separate line for
each, and prints a message stating "This number is three" and "This number is seven"
when the count is 3 and when the count is 7 respectively.

Program Author: Liam Mc Cormick
Date: 17-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int i;
	for(i=1; i<11; i++)
	{
		printf("%d. ",i);
		
		switch(i)
		{
			case 3:
			{
				printf("This number is three");
				break;
			}
			
			case 7:
			{
				printf("This number is seven");
			}
		}//end switch
		
		printf("\n");
		
	}//end for
	
}//end main
