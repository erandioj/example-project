#include "Line.h"


Line::Line(double X1,double Y1, double X2, double Y2)
{
	x1 = X1;
	y1 = Y1;
	x2 = X2;
	y2 = Y2;
}
void Line::setX1(double X1)
{
	x1 = X1;
}

void Line::setY1(double Y1)
{
   y1 = Y1;
}

void Line::setX2(double X2)
{
   x2 = X2;
}

void Line::setY2(double Y2)
{
   y2 = Y2;
}

double Line::getX1() const
{
	return x1;
}

double Line::getY1() const
{
	return y1;
}

double Line::getX2() const
{
	return x2;
}

double Line::getY2() const
{
	return y2;
}

double Line::calc_distance() const
{
	return sqrt((pow((x2-x1),2.0) + (pow((y2-y1),2.0))));
}

Line::~Line(void)
{
}
