
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int feet;


	cout << "Please enter the number of feet" << endl;
	cin >> feet;
	cout << endl;
		int inches = feet*12;
	cout << inches;
	cout << feet << "is " << inches;
	cout << endl;

	system("pause");
	return 0;
}

