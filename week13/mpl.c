/*
Program Requirements:
	Given The following arrays:
	float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
	float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6};
	int mpl[5]; // miles per litre
	write a program to caluclate and display the value of each element of mpl. Use pointers, rather than subscripts, to access the elements of each array.

Program Author: Liam McCormick
Date: 27-01-17
OS: Gentoo
Kernel: Linux 4.9.5
Compiler: GCC 4.9.4
*/

int main()
{
	float litres[5] = {11.5, 11.21, 12.7, 12.6, 12.4};
       	float miles[5] = { 471.5, 358.72, 495.3, 453.6, 421.6};
       	int mpl[5]; 	// miles per litre
	int i;		//for loops

	for(i=0; i<5; i++)
	{
		*(mpl+i) = *(miles+i) / *(litres+i);
		printf("car %d does %d miles per litre \n",i+1,*(mpl+i));

	}//end for

}//end main
