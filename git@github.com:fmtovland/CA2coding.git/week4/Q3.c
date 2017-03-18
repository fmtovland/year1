/*
Author: Liam McCormick
Discription: Reads in four numbers and prints them in reverse order.
Date: 05-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int one,two,three,four;
	printf("enter four whole numbers on seperate lines \n");
	scanf("%d %d %d %d",&one,&two,&three,&four);
	printf("\n %d %d %d %d \n",four,three,two,one);
	
}
