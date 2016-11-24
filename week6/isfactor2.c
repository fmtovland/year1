/*
Program Discription:
Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number. You will need to use a loop.

Program Author: Liam McCormick
Date: 17-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int num,i;
	printf("Enter a number between one and five \n");
	scanf("%d",&num);
	while(num<1 || num>5)
	{
		printf("Error, that is not a number between one and five. Please try again. \n");
		scanf("%d",&num);
	}
	printf("The numbers between one and twenty evenly divisable by %d are: \n",num);
	
	for(i=1; i<21; i++)	//do not start at zero. any number divided by zero gives
				//an imaginary result.
	{	
		if(i%num==0)
		{
			printf("%d \n",i);	//print the tested number if
						//it is evenly divisable
						//by the entered number
		}

	}//end for

}//end main
