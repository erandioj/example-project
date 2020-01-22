#include <iostream>
#include <string>
using namespace std;



struct Employee
{
	int empID;
	string first;
	char middle;
	string last;
	double payrate;
	Date startdate;

};

	void get_list(Employee[], const int);
	void print_list(Employee[], const int);

int main()
{
	//Employee e1; {1234, "Elmer", 'P', "Flopshingle",12.50};
	const int arraysize = 3;
	Employee emp_list[arraysize];

	get_list(emp_list, arraysize);
	print_list(emp_list, arraysize);
	system("pause");

	return 0;
}

void get_list(Employee e1[], const int s)
{
	for (int i=0; i <s; i++)
	{
	cout << "Enter the Employee ID: ";
	cin >> e1[i].empID;
	cout << "Enter the first name: ";
	cin >> e1[i].first;
	cout << "Enter the middle initial: ";
	cin >> e1[i].middle;
	cout << "Enter the last name: ";
	cin >> e1[i].last;
	cout << "Enter the payrate: ";
	cin >> e1[i].payrate;
	cout << "Enter start month: ";
	cin >> e1[i].startdate.month;
	cout << "Enter start day: ";
	cin >> e1[i].startdate.day;
	cout << "Enter start year: ";
	cin >> e1[i].startdate.year;
	}
}

void print_list(Employee emp_list[], const int s)
{
	for( int i=0; i<s; i++)
	{
	cout << "Employee ID:    " << emp_list[i].empID << endl;
	cout << "First Name:     " << emp_list[i].first << endl;
	cout << "Middle initial: " << emp_list[i].middle << "." << endl;
	cout << "Last Name:      " << emp_list[i].last << endl;
	cout << "payrate:        " << emp_list[i].payrate << endl;
	cout << "Start month:    " << emp_list[i].startdate.month;
	cout << "Start day:      " << emp_list[i].startdate.day;
	cout << "Start year:     " << emp_list[i].startdate.year;
	}
}

