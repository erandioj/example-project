#pragma once
#include <iostream>
#include <string>

using namespace std;
class Date
{
public:
	Date(int=1, int=1, int=1900);
	void print_date() const;
	void print_military_date();
	void print_full_date();
	void yesterday();
	void tomorrow();

	~Date(void);
private:
	bool leapyear(int);
	void get_day_of_week();
	void calc_dow();
	int month, day, year, dow;
	string day_string, month_string;
};
