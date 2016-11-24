/*
Author: Liam McCormick
Discription:Convert fahrenheit to celsius
Date: 06-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int fahr,cel;
	fahr,cel=0;
	printf("enter a tempreture in fahrenheit \n");
	scanf("%d",&fahr);
	cel=(fahr-32)*(5.0/9.0);	//this is a formula to convert between the two.
	printf("that would be %d degrees celsius \n",cel);	
	
} 	//end main
