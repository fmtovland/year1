/*
Program Discription:enter a number. if the number is even, halve it; if it is odd, multiply by 3 and add 1. Repeat until number is one.

Program Author: Liam McCormick.
Date: 17-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	unsigned int num,odd;
	printf("Enter an initial value \n");
	scanf("%u",&num);	
	printf("\nInitial value is %u \n \n",num);	
	
	while(num!=1)
	{
		odd=num%2;
		
		switch(odd)
		{
			case 1:
			{
				num=(num*3)+1;
				break;
			}

/*
do not use single quotes or it will be treated as a character
*/			
			case 0:
			{
				num=num/2;
				break;
			}
			
			default:
			{
				printf("Error in switch odd even \n");
			}	
		
		}//end switch
		
		printf("Next value is %u \n",num);
		
	}//end while	
}//end main	
