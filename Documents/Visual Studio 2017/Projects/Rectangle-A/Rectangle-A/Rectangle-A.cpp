// Triangle-A.cpp : Defines the entry point for the console application.
// Program to calculate the area of rectangle.

#include "windows.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <tchar.h>


using namespace std;


int _tmain()
{
	//declare constants and variables
	double width;
	double length;
	double area;


	//get input from user
	cout << "What is the width? ";
	cin >> width;

	cout << "What is the length? ";
	cin >> length;

	//perform calculations
	area = length * width;

	//display results
	cout << "A rectangle of width ";
	cout << width;
	cout << "and length ";
	cout << length;
	cout << " has area ";
	cout << area;
	cout << ".";

	//freeze screan
	string junk;
	cout << "\n\Press any keys and hit enter to continue...";
	cin >> junk;

	return (0);
}