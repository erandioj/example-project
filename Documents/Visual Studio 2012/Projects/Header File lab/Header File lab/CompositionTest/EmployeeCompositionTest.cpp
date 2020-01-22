#include "Employee.h"
#include "Date.h"

int main ()
{
	Employee e1("Elmer","Flopshingle", 1234,1,1,2000);
	Employee e2("Bolivar","Shagnasty",1235,7,18,1492);

	e1.print_employee();
	e2.print_employee();

	system("pause");
	return 0;
}