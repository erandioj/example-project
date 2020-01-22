#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void format();
void print_array(int[], const int&);

double array_average(int[], const int&s);


int main()
{
	const int arraysize = 10;
	srand(unsigned(time(0)));
	int numbers[arraysize] = { 0 };

	for (int i = 0; i < arraysize; i++)
		numbers[i] = rand() % 100 + 1;
	double avarage = 0.0;
	print_array(numbers, arraysize);

	average = array_average(numbers, arraysize);

	cout << "The average = " << average << endl;

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
double array_avarage(int  n[], const int &s)
{
	int sum = 0;
	for (int i = 0; i < s; i++)
		sum += n[i];

	return sum / double(s);
}
void format()
{
	cout << setprecision(2);
	cout << 
}