#include <iostream>
using namespace std;

#pragma once
class Triangle
{
public:
	Triangle(double=0.0,double=0.0, double=0.0); //default constructo
	double calc_distance() const;
	bool isEquilateral();
	bool isIsosceles();
	~Triangle(void);



private: 
	double x1, x2, y1, y2;
};


