/*
Author: Liam McCormick
Program Discription: A repeat of prog2 using putchar and getchar
Date: 03-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	char char1,char2;
	char1=char2=0;
	
	printf("Enter two characters \n");

	char1 = getchar();
	char2 = getchar();

	printf("\nYour characters are ");

	putchar(char1);
	putchar(char2);

	printf("\n");

	return 0;
}
