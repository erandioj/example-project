#include <iostream>
#include <iomanip>
#include "ComissionEmployee.h"
using namespace std;

int main ()
{
	// instantiate a CommissionEmployee Obj
	Employee employee("Jacob","Jacob","123-45-6789");
	CommissionEmployee commission(1500000, 0.6);
	
	//floating-point output formatting
	cout << fixed << setprecision( 2 );

	//get commission employee date
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstname()
		<< "\nLast name is " << employee.getLastname()
		<< "\nSocial securrity number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sale is " << commission.getGrossSales()
		<< "\nCommision rate is " << commission.getCommissionRate() << endl;

	commission.setGrossSales( 8000); // set gross sales 
	commission.setCommissionRate( .1); // set commission rate

	cout << "\nUpdate employee information output by print function: \n"
		<< endl;
	commission.print();

	cout << "\n\nEmployee's earnings: $" << commission.earnigs() << endl;
	return 0;
	system("pause");

}