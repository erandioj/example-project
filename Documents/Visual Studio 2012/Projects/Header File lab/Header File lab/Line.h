#include <iostream>
#include <cmath>
using namespace std;

#pragma once
class Line
{
public:
	Line(double=0,double=0,double=0,double=1);
	// define mutators
	void setX1(double);
	void setY1(double);
	void setX2(double);
	void setY2(double);

	// define accessors
	double getX1() const;
	double getY1() const;
	double getX2() const;
	double getY2() const;

	double calc_distance() const;

	~Line(void);
private:
	double x1,y1,x2,y2;
};

