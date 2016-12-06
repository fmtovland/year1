/*
Program Discription: My first lab test. The job is to check that
a four digit number is a leap year.

Program Author: Liam McCormick
Date: 24-10-16
OS: 24-10-16
*/

#include <stdio.h>
#define EARLIEST 1000
#define LATEST 9999

int main()
{
	int year=0;	//this will be the year we wish to test
	int test1,test2,test3;	//these will store the results of the calculations required to determine whether or not it is a leap year

	printf("Please enter a year between %d and %d AD \n",EARLIEST,LATEST);
	scanf("%d",&year);


	if(year<EARLIEST || year>LATEST)
	{
		printf("\nThere seems to be a problem. That number is not within the required range. Please restart the program and try again \n");
		return 0;

	}//This was going to be a while loop, but it became perpetual if a character was entered.

	//test1 will be whether the number divided by 4 has a remainder. if not, the test is a sucess.
	test1=year%4;

	//test2 will check if it is evenly divisable by 100.  if the remainder is zero this test is a failure only redeemable by the results of the next test.
	test2=year%100;

	//test3 will check if it is evenly divisable by 400. If not, and if it is evenly divisable by 100 then the number is NOT a leap year.
	test3=year%400;


	//and it all comes together
	if(test1 == 0 && test2 != 0)
	{
		printf("%d is a leap year \n",year);
	}

	else if(test1 == 0 && test2 == 0 && test3 == 0)
	{
		printf("%d is a leap year \n",year);
	}


	else
	{
		printf("%d is not a leap year \n",year);
	}
	//end logic to print results of test

	return 0;

}//end main
