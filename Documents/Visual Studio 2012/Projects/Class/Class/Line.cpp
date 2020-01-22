#include "Line.h"


Line::Line(int x1, int y1, int x2, int y2) : a(x1,y1), b(x2,y2)
{

}
Line::Line(Point x, Point y)
{
	a = x;
	b = y;
}

double Line::Distance() const
{
	return sqrt((pow(double(b.x - a.x),2)) + (pow(double(b.y - a.y),2)));
}

const Line& Line::operator=(const Line &right)
{
	
}

Line::~Line(void)
{
}
