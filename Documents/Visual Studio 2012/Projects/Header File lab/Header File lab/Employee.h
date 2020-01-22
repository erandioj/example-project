#pragma once

#include "Date.h"

using namespace std;

class Employee
{
public: 
	Employee(string, string, unsigned int, int, int, int);
	void calc_probationary_date(); // 90 days from start date
	void print_employee() const;

	~Employee(void);
private:
	Date start_date;
	unsigned int emp_id;
	string first_name, last_name;
};