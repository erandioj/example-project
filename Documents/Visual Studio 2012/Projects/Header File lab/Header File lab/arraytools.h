#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;



void print_array(int[], const int);

void bubblesort(int myarray[], int size);

void create_array(int [], const int&);

void create_array(int n[], const int &s)
{
	srand(unsigned(time(0)));
	for(int i=0;i<s;i++)
		n[i] = rand() % 100 + 1;
}


void print_array(int n[], const int s)
{
	int count = 0;
	for(int i=0;i<s;i++)
	{
		cout << setw(6) << n[i];
		count += 6;
		if(count % 72 == 0)
			cout << endl;
	}
	cout << endl;
}

void swap(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

void bubblesort(int myarray[], int size) {
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement > 0; maxElement--) //this loop will iterate once for each element in the array.
		//it causes the maxElement variable to take on all of the array's substcripts, from the 
		//highest subscript down to 0 . After each iteration, maxElement is decremented by one.
	{
		for (index = 0; index < maxElement; index++) // This loop iterates once for each of the unsorted array elements. It starts index at 0 and increments it up through maxElement -1. 
			// During Each iteration, the comparison in the line 42 is performed.
		{
			if (myarray[index] > myarray[index + 1])
			{
				swap(myarray[index], myarray[index + 1]);
			}
		}
	}
}

