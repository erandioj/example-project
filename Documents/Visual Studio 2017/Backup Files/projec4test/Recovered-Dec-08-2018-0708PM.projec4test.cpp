#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
double GetPay(double);

double GetHrs(double);

double GetRate(double);

void PrintStub(string, double , double , double , double);

double  CalcFICA(double);

double CalcFedTax(double);

double CalcStateTax(double);	

int main()
{
	double hours, rate;
	double fica_tax, sedTax, stateTax, grossPay;

	string name;
	char input;
	cout << "Employee name? ";
	getline(cin, name);

	do {
		cout << "Hourly rate? ";
		cin >> rate;
		if (rate >= 5.50 && rate <= 200.0)
		{
			GetRate(rate);
			break;
		}
	} while (rate<5.50 && rate >200.00);

	do {
		cout << "Hours worked? ";
		cin >> hours;
		if (hours >= 0.0 && hours <= 60)
		{
			GetHrs(hours);
			break;
		}
		else if (hours > 60)
		{
			cout << "Override hour limit? [Y/N]";
			cin >> input;
			if (input == 'Y')
			{
				GetHrs(hours);
				break;
			}
		}
	} while (hours < 0.0 && hours >60);
}





	double GetPay(double x, double y)
	{
		if (x > 40.0)
		{
			return 40 * y + (x - 40)*y*1.5;
		}
		else
		{
			return x * y;
		}
	}

	double GetHrs(double x)
	{
		return x;
	}

	double GetRate(double x)
	{
		return x;
	}
	double  CalcFICA(double x)
	{
		return x * 7.65 / 100;
	}
	double CalcFedTax(double x)

	double CalcStateTax(double x)