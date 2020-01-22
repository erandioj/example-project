#include "Line.h"
#include "Point.h"

int main ()
{
	Point A(2,1), B(5,4), C(7,2), D(4,-1);

	Line L1(0,0,5,0), L2(A,B);

	cout << "The distance = " << L1.Distance() << endl;
	cout << "The distance = " << L2.Distance() << endl;

	return 0;
}