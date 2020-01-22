
#include <string>
using namespace std;

#pragma once
class Employee: 
{
public:
	Employee(const string &,const string &,const string &); // constructor

	void setFirstname (const string &); // sets first name
	string getFirstname() const; //return first name

	void setLastname(const string &); // set last name
	string getLastname() const; // return last name

	void setSocialSecurityNumber( const string & ); // getSSN
	string getSocialSecurityNumber () const; //return SSN

private: 
	string firstname;
	string lastname;
	string SocialSecurityNumber;

	friend class CommissionEmployee;



}; // end class CommissionEmployee

class CommissionEmployee
{
public: 
	CommissionEmployee(double=0.0,double=0.0);
	void setGrossSales (double); // set gross sales amount
	double getGrossSales() const; // return gross sales amount

	void setCommissionRate( double); // set commision rate(%)
	double getCommissionRate() const ; // return commission rate

	double earnigs() const; // calculate earnings
	void print() const; // print commissionEmployee object
private: 
		double grossSales; //gross weekly sales
	double commissionRate;
	friend class Employee;
	
};
