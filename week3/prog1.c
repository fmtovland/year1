/*
Program Author: Liam Mc Cormick
Program Discription: some basic arithmatic series
Date: 26-09-16
OS: Linux Mint 17.2 (Kernel 3.16 x86_64)
*/
#include <stdio.h>
int main()
{
	int var1;
	float var2;
	var1= 6*(5/2);
	var2= (10/2)*((2*1.0)+((10-1)*0.1))/10;  //n/2(2a+(n-1)d)  as seen in log tables.

	printf("1+2+3+4+5=%d   1.0+1.1+1.2+1.3......+2.0=%f \n",var1,var2);
return 0;
}
//end main
