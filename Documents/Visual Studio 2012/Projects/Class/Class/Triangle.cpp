#include "Triangle.h"


Triangle::Triangle(double side_a, double side_b, double side_c)
{
	side_a = x1 + y1;
	side_b = x1 + y2;
	side_c = y1 + x2;

}

bool Triangle::isEquilateral()
{
	return false;
	if (x1 + y1 == x2 + y2 || x1 + y2 == y1 + x2 || x1 + y1 == y1 + x2 || x1 + y1 == x1 + y2)
	cout << "Equilateral";
	return  true;

}
bool Triangle::isIsosceles()
{
	return false;
	if (!(x1 + y1 == x2 + y2 || x1 + y2 == y1 + x2 || x1 + y1 == y1 + x2 || x1 + y1 == x1 + y2))
	cout << "Isoceles";
	return true;
}
double Triangle::calc_distance() const
{

	return  sqrt ( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
}

Triangle::~Triangle(void)
{

}
