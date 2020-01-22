#include "Cylinder.h"

int main()
{
	Cylinder c1(6,2);
	
	cout << "The volume = " << c1.calc_volume() << endl;
	cout << "The surface area= " << c1.calc_surface_area() << endl;

	system("pause");
	return 0;
}