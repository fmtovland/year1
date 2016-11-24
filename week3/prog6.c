/*
Author: Liam McCormick
Discription: An excercise in arithmatic
Date: 26-09-16
OS: Linux mint 17.2 (kernel 4.4.0-36 x86_64)
*/

#include <stdio.h>
int main()
{
	int x=15;
	int y=10;
	int z=3;

	int a,b,c,e;
	float d;

	a=x+y;
	b=x-y;
	c=x*y;
	d=(float)x / (float)y;
	e=x % y;

	printf("The answers are: %d, %d, %d, %f and %d \n",a,b,c,d,e);

return (0);
}
//end main
