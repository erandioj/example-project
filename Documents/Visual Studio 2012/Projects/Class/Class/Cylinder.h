#include <iostream>
using namespace std;

static const double PI = 3.14159;

#pragma once
class Cylinder
{
public:
	Cylinder(double=0.0, double=0.0); //default constructor
	double calc_volume() const;
	double calc_surface_area() const;
	~Cylinder(void);
private:
	double height, radius;
};

