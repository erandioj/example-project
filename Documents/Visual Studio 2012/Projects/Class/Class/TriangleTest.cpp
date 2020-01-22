#include "Triangle.h"
#include <iostream>

using namespace std;

int main ()
{
	Triangle t1(3,3,3);
	cout << "The distance of the triangle is: " << cout << t1.calc_distance() << endl;
	cout << "The triangle type is: " << t1.isEquilateral() << t1.isIsosceles() << endl;


	system("pause");
	return 0;
}