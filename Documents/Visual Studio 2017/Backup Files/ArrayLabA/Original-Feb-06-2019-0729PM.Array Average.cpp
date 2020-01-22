#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void print_array(int[], const int&);

int main()
{
	const int arraysize = 10;
	srand(unsigned(time(0)));
	int numbers[arraysize] = { 0 };

	for (int i = 0; i < arraysize; i++)
		numbers[i] = rand() % 100 + 1;
	print_array(numbers, arraysize);

	return 0;
}
void print_array(int n[], const int &s)
{
	int spaces = 0;
	for (int i = 0; i < s; i++)
	{
		cout << setw(4) << n[i] << " ";
		spaces += 6;

		if (spaces % 66 == 0)
			cout << endl;
	}
	cout << endl;
}
