// project4e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	PrintStub();
}

void PrintStub()
{
	string EmpName;
	cout << "Employee name? ";
	 cin >> EmpName;
	cout << "Hourly rate? ";
	GetRate();
	cout << "Hours worked? ";
	GetHrs();

cout << EmpName << " earned";
		GetPay();
/*
	cout << "FICA $ "
		CalcFICA();

		cout << "Fed $ ";
		CalcFedTax();

		cout << "State $ "
		CalcStateTax();

		cout << "Net Pay $ "; 
		
		*/
}

int GetRate()
{
	double rate;
		cin >> rate;
	return (rate);
}
int GetHrs()
{
	double hours;
	cin >> hours;
	return (hours);
}
int GetPay()
{
	double result = GetRate() * GetHrs();
	return (result);
}



