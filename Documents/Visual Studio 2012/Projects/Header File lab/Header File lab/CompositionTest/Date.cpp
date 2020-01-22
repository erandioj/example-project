#include "Date.h"
// implementation of the methods

Date::Date(int m, int d, int y)
{
	switch(m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if((d <= 31) && (d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}
	case 4: case 6: case 9: case 11:
		if((d <= 30) && (d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}

	case 2: // February
		if((leapyear(y)) && (d <= 29 && d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}
		else if ((!(leapyear(y))) && (d <= 28) && (d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}
	default:
		cerr << "Invalid Date! ";
		month = m;
		day = d;
		year = y;
		print_date();
		break;
	} // end switch
}

void Date::print_date() const
{
	cout << month << "-" << day << "-" << year << endl;
}

void Date::print_military_date()
{
	// 4-January-2016


	string monthname;
	monthname = (month);

	if (month == 1)
		monthname = "January";
	if (month == 2)
		monthname = "February";
	if (month == 3)
		monthname = "March";
	if (month == 4)
		monthname = "April";
	if (month == 5)
		monthname = "May";
	if (month == 6)
		monthname = "June";
	if (month == 7)
		monthname = "July";
	if (month == 8)
		monthname = "August";
	if (month == 9)
		monthname = "September";
	if (month == 10)
		monthname = "October";
	if (month == 11)
		monthname = "November";
	if (month == 12)
		monthname = "December";
	
	cout << day << "-" << monthname << "-" << year;
}

void Date::print_full_date()
{

}

void Date::calc_dow()
{
	int m = month, d = day, y = year; //preserve orignal values
	dow = (d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7;
	// dow is an integer value from 0 - 6, 0 = Sunday, 1 = Monday, etc...
}

void Date::get_day_of_week()
{
	if(dow == 0)
		day_string = "Sunday";
	else if (dow == 1)
		day_string = "Monday";
	else if (dow == 2)
		day_string = "Tuesday";
	else if (dow == 3)
		day_string = "Wednesday";
	else if (dow == 4)
		day_string = "Thursday";
	else if (dow == 5)
		day_string = "Friday";
	else
	     day_string = "Saturday";

}




void Date::yesterday()
{
	// HELP HERE
}





void Date::tomorrow()
{
	// HELP HERE 
}




bool Date::leapyear(int y)
{
	if(y % 100 == 0)
		return (y % 400 == 0);
	else
	    return (y % 4 == 0);
}
void Date::start_date()
{

}
Date::~Date(void)
{
}