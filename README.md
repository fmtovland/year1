#my development librarys

a repository for headers that contain algorithms I believe will be useful in the future \n

#functions provided

this is an exhaustive list of all functions provided by liblml.h. \n
#general
exponent(a,b): this multiplys a by itself b times. I do not believe it is the most efficient algorithm for the job, but if I ever find a more efficient one, I will implement it in with support for the original santax.\n
arit_series(a,d,n): this calculates an arithmetic series where a is the first term, d is the common difference and n is the nth and final term. This can be used to efficiently solve sums like 1+2+3+4+5+6+7...+100 \n
#statistics
all of these depend on biggest_num() and smallest_num()
mean_average(array,number_of_elements_in_array): This calculates the mean value of all elements of an array. The mean is the sum of all numbers divided by the number of numbers. \n
mode_average(array,number_of_elements_in_array): This calculates the mode value, or the value that occurs most often in the array. At time of writing, multiple modes have yet to be implemented. \n
median_average(array,number_of_elements_in_array): This calculates the median or middle value. As well as biggest_num() and smallest_num() this function also depends on the order function. \n
#sorting
order(array,ordered_array,number_of_elements_in_array): This takes the elements in array and writes them to ordered_array in assending order of size \n
highest_num(array,number_of_elements_in_array): This returns the higest value in the array \n
lowest_num(array,number_of_elements_in_array):This returns the lowest value in the array \n
