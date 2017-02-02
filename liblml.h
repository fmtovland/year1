//calculate exponential functions
//performs the operation factor^power
int exponent(int factor,int power)
{
        int i;
        int result=1; //value to return

        for(i=0; i<power; i++)
        {
                result=result*factor;

        }//end for

        return result;

}//end exponent

//calculate an arithmetic series where a is the first term, d is the common difference and n is the nth and final term
//eg 1+2+3...+n
int arit_series(int a, int d, int n)
{
	int total;

	total=((float)n/2)*((2*a)+((n-1)*d));

	return total;

}//end arit_series


//find the average of the contents of an array
//santax: mean_average(address_of_array,number_of_elements)

float mean_average(int *numbers, int size)
{
	float total=0;
	int i;
	float result;

	for(i=0; i<size; i++)
	{
		total = total + *(numbers+i);

	}//end for

	result = total/size;

	return result;

}//end average
