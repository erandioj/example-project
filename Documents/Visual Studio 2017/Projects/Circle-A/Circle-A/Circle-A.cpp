// Circle-A.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program to calculate the area of a circle.

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	//Constants and Variables
	double pie;
	double radius;
	double area;
	const int PIE_CONSTANT = 3.14159;


	
	// results

	cout << "What is radius? ";
	cin >> radius;

	area = PIE_CONSTANT * (radius * radius);

	cout << "The circle with a radius of ";
	cout << radius;
	cout << " has an area of ";
	cout << area;



	cout << "\n\Press any other key to continue....\n";
	string junk;
	cin >> junk;

	return (0);



}