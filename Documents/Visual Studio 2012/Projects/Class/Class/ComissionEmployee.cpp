#include <iostream>
#include "ComissionEmployee.h"
using namespace std;


Employee::Employee(const string &first, const string &last, const string &ssn)
{
	firstname = first;
	lastname = last;
	SocialSecurityNumber = ssn;
}
void Employee::setFirstname( const string &first)
{
	firstname = first; // should validate
}
string Employee::getFirstname() const
{
	return firstname;
}
void Employee::setLastname( const string &last)
{
	lastname = last; // should validate
}
string Employee::getLastname() const
{
	return lastname;
}

void Employee::setSocialSecurityNumber(const string &ssn)
{
	SocialSecurityNumber = ssn;
}

void CommissionEmployee::setGrossSales(double sales)
{
	grossSales = ( sales < 0.0 ) ? 0.0: sales;
} // end fuction
double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}	// end function
void CommissionEmployee::setCommissionRate( double rate)
{
	commissionRate = ( rate > 0.0 && rate <1.0 ) ? rate : 0.0;
} // end function
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
} // emd function

//CALCULATE EARNINGS
double CommissionEmployee::earnigs() const
{
	return commissionRate * grossSales;
} // end function
void CommissionEmployee::print() const
{
	cout << "Commission Employee: " << firstname << ' ' << lastname
		<< "\nsocial security number: " << SocialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
} // end function print


Employee::~Employee(void)
{
}
