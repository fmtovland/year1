/*
Author: Liam Mc Cormick
Discription: Practice with the modulus 
Date: 26-09-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,num6;
	num1=2%2;
	num2=3%2;
	num3=5%2;
	num4=7%3;
	num5=100%33;
	num6=100%7;

	printf("The remainders are: \n %d %d %d %d %d %d \n",num1,num2,num3,num4,num5,num6);

return 0;
}
//main end
