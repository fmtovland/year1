/*
can a read character automatically convert to the relitive intager
*/

#include <stdio.h>
#define LENGTH 10

int main()
{

	int array[LENGTH]={0};
	int i;
	char choice='1';

	do
	{
		choice=getchar();

		for(i=0; i<LENGTH; i++)
		{
			scanf("%c",&array[i]);
		}

		for(i=0; i<LENGTH; i++)
		{
			printf("%c",array[i]);
		}

		printf("\n");

		for(i=0;i<LENGTH; i++)
		{
			printf("%d ",array[i]);
		}

		printf("\n");
	}//end do
	while(choice!='0');

}//end main
