// CelsioustoFahrenheit-A.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program to covert  C to F.

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <tchar.h>

using namespace std;

int main()
{

	//Constant and variables

	double celsious;
	double farenheight;

	// input

	cout << "Please enter Celsious. ";
	cin >> celsious;

	//calculations 

	farenheight = (celsious * 9 / 5) + 32;

	//results 

	cout << celsious;
	cout << " is ";
	cout << farenheight;
	cout << " farenheight.";

	//Freezy

	string junk;
	cout << "\n\Press any key to continue...";
	cin >> junk;


	return (0);
}