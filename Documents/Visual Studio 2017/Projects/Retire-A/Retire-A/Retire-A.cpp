// Retire-A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//constant and variables
	string name;
	int retireAge;
	int currentAge;
	const int RETIREMENT_AGE = 67;
	
	//input
	
	cout << "What is your name? ";
	cin >> name;
	cout << "How old are you? ";
	cin >> currentAge;

	//calculations

	retireAge = RETIREMENT_AGE - currentAge;

	//results
	
	cout << name;
	cout << " can retire in ";
		cout << retireAge;
		cout << " years.";




	//freeze

		string junk; 
		cout << "\n\Press any other key to continue...\n";
		cin >> junk;

	
	return (0);
}
