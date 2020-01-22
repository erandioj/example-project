#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			cout << "FizzBuzz" << endl; //print FizzBuzz when a number is divisible by 3 and 5

		else if ((i % 3) == 0) // print Fizz when it's only divisible by 3

			cout << "Fizz" << endl;
		else if ((i % 5) == 0) // print Fizz when it's only divisible by 5

			cout << "Buzz" << endl;
		else
			cout << i << endl; //print the number if it's not divisible by both
	}
		return 0;
	}

