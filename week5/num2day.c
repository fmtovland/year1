/*
Program Discription: Enter a number between one and seven and convert it to a day of the week
Author: Liam Mc Cormick
Date: 10-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	unsigned short int weekday;	//unsigned and short to practice using these data types
	printf("Enter an Number between one and seven \n");
	scanf("%hu",&weekday);
	
	switch(weekday)
	{
		case(1):
		{
			printf("Sunday \n");
			break;
		}
		
		case(2):
		{
			printf("Monday \n");
			break;
		}
		
		case(3):
		{
			printf("Tuesday \n");
			break;
		}
		
		case(4):
		{
			printf("Wednesday \n");
			break;
		}
		
		case(5):
		{
			printf("Thursday \n");
			break;
		}
		
		case(6):
		{
			printf("Friday \n");
			break;
		}
		
		case(7):
		{
			printf("Saturday \n");
			break;
		}
		
		default:
		{
			printf("That is not a number between one and seven \n");
			break;
		}
	
	}//end switch

}//end main
