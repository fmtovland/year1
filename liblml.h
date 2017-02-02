#include <limits.h>

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


//find the mean of the contents of an array
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

}//end mean_average

//find the mode of the contents of an array
//cannot handle multiple modes properly (yet)
//santax: mean_average(address_of_array,number_of_elements) same as above

int mode_average(int *numbers, int size)
{
	int i;
	int biggest,smallest;	//the biggest and smallest number in the array, and the limits of the for loop
	int mode=0;		//the output of the function
	int highscore=0;	//the highest number of times a number has recurred thus far
	int mode_counter;	//the number of times the value currently being tested has occured
	int subject;		//the value currently being tested

	biggest=biggest_num(numbers,size);
	smallest=smallest_num(numbers,size);

	subject=smallest;
	do
	{
		mode_counter=0;

		for(i=0; i<size; i++)
		{
			if(subject == *(numbers+i))
			{
				mode_counter=mode_counter+1;

			}//end if

		}//end for

		if(mode_counter>highscore)
		{
			mode = subject;
			highscore = mode_counter;
		}//end if

		subject++;
	}
	while(subject <= biggest);

	return mode;

}//end mode_average

//calculate the median of the contents of an array
//same santax as above

float median_average(int *numbers, int size)
{
	int ordered[size];	//the contents of numbers will be copied into this array from smallest to largest
	int bookmark=0;		//remembers the next element of the array that will be written to
	int biggest;		//the largest element of the array
	int smallest;		//the smallest element of the array
	int subject;		//the value currently being counted and sorted
	int i;			//for loops
	float median;		//the result
	int half;		//the medians location in the ordered array
	

	biggest=biggest_num(numbers,size);
	smallest=smallest_num(numbers,size);

	//put the array in order

	subject=smallest;
	do
	{
		for(i=0; i<size; i++)
		{
			if(subject == *(numbers+i))
			{
				ordered[bookmark] = *(numbers+i);
				bookmark++;

			}//end if

		}//end for

		subject++;

	}
	while(subject <= biggest);

	if(size%2 == 1)
	{
		half=((size-1)/2)+1;
		median=(float)ordered[half-1];
	}//end if

	else
	{
		half=(size/2);
		median=((float)ordered[half] + (float)ordered[half-1]) /2;	//if the number of elements in the array even this gives the mode of the two medians
	}//end else

	return median;

}//end median_average




//find the highest number in an array

int biggest_num(int *numbers, int size)
{
	int i;
	int biggest=INT_MIN;

	for(i=0; i<size; i++)
	{
		if( *(numbers+i)>biggest )
		{
			biggest = *(numbers+i);

		}//end if

	}//end for

	return biggest;

}//end biggest_num

int smallest_num(int *numbers, int size)
{
	int i;
	int smallest=INT_MAX;

	for(i=0; i<size; i++)
	{
		if( *(numbers+i)<smallest )
		{
			smallest = *(numbers+i);

		}//end if

	}//end for

	return smallest;

}//end biggest_num
