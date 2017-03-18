/*
Author: Liam McCormick
Discription: one big scanf
Date: 05-10-16
OS: linux mint 17.2 (kernel 3.16.0-38)

Note: Terrible Idea, never use such a long scanf or printf. bad code. too hard to debug. only did it because said to in assignment.
*/

#include <stdio.h>

int main()
{
	int first,second,third,forth,i;
	char keyval1,keyval2,c;
	float principal,rate,time,f;
	double	 d;

	printf("enter four intergers, three floats, three characters, another intager, another float and a double");
	//without this line the program would be completely unusable

	scanf("%d %d %d %d %f %f %f %c %c %c %i %f %lf",&first,&second,&third,&forth,&principal,&rate,&time,&keyval1,&keyval2,&c,&i,&f,&d);

	printf("%d %d %d %d %f %f %f %c %c %c %i %f %lf",first,second,third,forth,principal,rate,time,keyval1,keyval2,c,i,f,d);

}


