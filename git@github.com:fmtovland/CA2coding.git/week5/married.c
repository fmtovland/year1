/*
Discription: Translating a given if else statment to a switch statment
Author: Liam Mc Cormick
Date: 10-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
int main()
{
	printf("Enter your maritial status in block capitals \n");
	char marriage_status;
	marriage_status=getchar();
	
	switch(marriage_status)
	{
		case('S'):
		{
			printf("single \n");
			break;
		}
		
		case('M'):
		{
			printf("married \n");
			break;
		}
		
		case('W'):
		{
			printf("widowed \n");
			break;
		}
		
		case('E'):
		{
			printf("sepperated \n");
			break;
		}
		
		case('D'):
		{
			printf("divorced \n");
			break;
		}
		
		default:
		{
		printf("error: invalid code \n");
		}//end default
		
	}//end switch
	
}//end main
