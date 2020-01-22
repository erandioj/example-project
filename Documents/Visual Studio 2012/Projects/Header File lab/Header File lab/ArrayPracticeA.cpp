// Array practice
// 2/4/2019

#include "toolsarrayA.h"
int main()
{
	const int arraySize = 100;
	int number_array[arraySize] = { 0 }, num_odds = 0, num_evens = 0;
	print_array(number_array, arraySize);
	prime(number_array);

	randomize_array(number_array, arraySize);
	print_array(number_array, arraySize);
	count_odds_evens(number_array, arraySize, num_evens, num_odds);
	return 0;
}

