/*
Author: Liam Mc Cormick
Program Discription: 	Ask the user to display 2 characters then display them to the screen
			Then change the code to use a decimal delimiter to decode the output
Date: 03-10-16
OS: linux mint 17.2 (kernel version 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	char char1,char2;
	char1=char2=0;

	printf("Enter two characters \n");
	scanf ("%1s %1s",&char1,&char2);	//prevent blank space characters
//	scanf ("%c %c",&char1,&char2);

	printf("\n your letters read %c and %c \n",char1,char2);
//	printf("\n your letters read %d and %d \n",char1,char2);

}
//end main
