/*
program requirements: Enter current time, then display current time plus 1 second
author: Liam McCormick
Date: 30-03-17
OS: Gentoo
Kernel: Linux 4.9.17
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <lminput.h>

struct time_rec
{
	int hours;
	int mins;
	int secs;
};

int main()
{
	struct time_rec current_time;
	register int i;

	//ask user for input
	printf("Please enter the current time, sepperated by :s\n");
	scanf("%2d %*c %2d %*c %2d",&current_time.hours,&current_time.mins,&current_time.secs);
	overflow();

	//add 1 second
	current_time.secs=current_time.secs+1;
	current_time.mins=current_time.mins+(current_time.secs/60);
	current_time.secs=current_time.secs%60;
	current_time.hours=current_time.hours+(current_time.mins/60);
	current_time.mins=current_time.mins%60;
	current_time.hours=current_time.hours%24;

	//print current time
	printf("time is ");
	for(i=0; i<3; i++)
	{
		printf("%2d",*(&current_time.hours+i));
		if(i==2)
		printf("\n");
		else
		printf(":");
	}

}//end main
