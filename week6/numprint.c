/*
Program discription: print "10,9,8,7,6,5,4,3,2,1" using a loop.
Program Author: Liam McCormick
Date: 17-10-16
OS: Linux mint 17.2 (kernel version 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int i;	
	
	for(i=10; i>0; i--)
	{
		if(i!=1)
		{
			printf("%d,",i);
		}

		else
		{
			printf("%d",i);
		}
	}
	//end for
	
	printf("\n");
	
}//end main
