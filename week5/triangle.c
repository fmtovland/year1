/*
Program Discription: Input three numbers to see if they form a valid triangle.
Author: Liam McCormick
Date: 10-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int side1,side2,side3;
	printf("Enter three Numbers \n");
	scanf("%d %d %d",&side1,&side2,&side3);
	
	if( (side1+side2)<side3 || (side1+side3)<side2 || (side2+side3)<side1 )
	// This decides if any one side is bigger than the other two. 
	// In a triangle no one side can be bigger than the other two combined.
	{
		printf("These values cannot be the lengths of the sides of a triangle. \n");
	}//end if
	
	else
	{
		printf("These values could be the lengths of the sides of a triangle. \n");
	}//end else
	
}//end main
