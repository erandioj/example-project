// FeetInch-A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//Constant and variables
	double feet;
	double inches;
	
	//input
	cout << "How many feet? ";
	cin >> feet;

	//calculations

	inches = feet * 12;


	//results
	cout << feet;
	cout << " feet is ";
	cout << inches;
	cout << " inches.";

	//freeze
	string junk;
	cout << "\n\Press any other key to continue...\n";
	cin >> junk;

	return (0);
}

