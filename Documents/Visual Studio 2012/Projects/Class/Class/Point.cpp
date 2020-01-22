#include "Point.h"


Point::Point(int a, int b)
{
	x = (a >= -20)&& (a<=20) ? a: 0;
	y = (b >= -20)&& (b<=20) ? b:0;
}

void Point::print_point() const
{
	cout << "(" << x << "," << y << ")" << endl;
}

Point::~Point(void)
{
}
