/*
Author: Liam McCormick
Program Discription: 	Input 3 floats and print them back out to 4, 3 and 0 decimal 
			places on seperate lines.
Date: 03-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	float curly,larry,mo;
	curly=larry=mo=0;

	printf("exactly how old is curly?\n");
	scanf ("%f",&curly);
	printf("and how old is larry percisely?\n");
	scanf ("%f",&larry);
	printf("and what about mo?\n");
	scanf ("%f",&mo);

	printf("\nso:\ncurly is %.4f \nlarry is %.2f, \nmo is %.0f \n",curly,larry,mo);
}
//end main
