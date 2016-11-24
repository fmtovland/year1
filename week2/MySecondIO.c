/*
Program discription: a corrected version of a badly written code we had to make for an asignment.
Author: Liam McCormick
Date: 19/09/16
OS: Linux 3.16
*/

#include <stdio.h> // no semicolon needed here
main()	//wrong sort of brackets
{
//program to illustrate errors in a C program. 		this was a multi line comment with no end
	int num1, num2;
	float num3;

	num1=400;

	num2=600; //wrong way round. this would put a variable into a constant. this is not possible.

	printf("The value of num1 is %d \n",num1); //capitals, no coma. " not '
	printf("num2 is %d \n",num2); //again capitals, no num2, originally no f in printf
} //wrong bracket, forgot \n which annoys gcc
