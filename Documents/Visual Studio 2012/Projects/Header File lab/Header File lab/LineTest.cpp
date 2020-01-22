#include "Line.h"

int main()
{
	Line l1, l2(0,0,0,8);
	l1.setX1(0);
	l1.setY1(0);
	l1.setX2(0);
	l1.setY2(4);

	cout << "The distance = " << l1.calc_distance() << endl;
	cout << "The distance = " << l2.calc_distance() << endl;

return 0;
}