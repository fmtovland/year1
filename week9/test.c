/*
a little test to decern can you perform arithmetic operations with #define values
apparantly you can
*/

#include <stdio.h>
#define NINE 9
#define EIGHT 8

int main()
{
	int s=0;
	int t=0;
	int i=0;	//for a for loop
	int j=0;	//for a counter

	s=NINE*EIGHT;
	t=NINE-EIGHT;

	for(i=0; i<NINE*NINE; i++)
	{
		i++;
	}//end for

	printf("%d %d %d \n",s,t,i);
}
