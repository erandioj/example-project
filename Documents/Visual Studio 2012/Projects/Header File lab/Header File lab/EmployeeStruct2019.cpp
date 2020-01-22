// Example of a Employee structure

#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
	Date(int=0,int=0,int=0); // constructor
	void print_date() const;



	~Date(void); // destructor
private:
	int  month, day, year;
};

 Date::Date(int m, int d, int y)
{
month = m;
day = d;
year = y;
}


Date::~Date(void)
{
}
// END DATE CLASS
///////////////////////////////////////////////////////////////////////////////////////////////////////////
class Employee
{
public:
	Employee(string,string);
	void print_name(string, string) ;

private:
	string firstname, lastname;

}; 

Employee::Employee(string f,string l)
{
	firstname =  f;
	lastname = l;
}
void Employee::print_name(string f, string l)
{
	cout << "What is Employee's first name? ";
	cin >> f;
	cout << "What is Employee's last name? ";
	cin >> l;
}

