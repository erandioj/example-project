#include "Cylinder.h"


Cylinder::Cylinder(double h, double r)
{
	height = h > 0? h : 0;
	radius = r > 0? h : 0;
}

double Cylinder::calc_volume() const
{
	return PI * radius * radius * height;
}
double Cylinder::calc_surface_area() const
{
	return (2*PI*radius*radius) + (2*PI*radius*radius);
}

Cylinder::~Cylinder(void)
{

}
