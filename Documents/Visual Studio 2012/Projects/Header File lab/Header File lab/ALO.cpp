#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int even = 0;
int odd = 0;
int sum_of_even = 0;
int sum_of_odd = 0;

void arrayFunc(int myArray[], int size)
{
	for (int i = 0; i < size; ++i) {
		if (myArray[i] % 2 == 0) {
			cout << myArray[i] << " - even" << endl;
			even++;
			sum_of_even += myArray[i];


		}
		else {
			cout << myArray[i] << " - odd" << endl;
			odd++;
			sum_of_odd += myArray[i];
		}
	}

}

int main()
{

	int arrayList[7] = { 22,4,5,3,5,2,12 };
	int arraySize = sizeof(arrayList) / sizeof(arrayList[0]);

	cout << "Array list: ";
	for (int i = 0; i < arraySize; i++)
		cout << arrayList[i] << " ";

	cout << "\nArray even/odd demo: " << endl;
	arrayFunc(arrayList, arraySize);
	cout << "The total even numbers is " << even << endl;
	cout << "The total odd numbers is " << odd << endl;

	cout << "The total of odd numbers is " << sum_of_odd << endl;
	cout << "The total of even numbers is " << sum_of_even << endl;


	return 0;
}