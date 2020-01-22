#include <iostream>
#include <iomanip>
#include "NumberList.h"

using namespace std;

int main ()
{
	NumberList list;

	list.appendNode(5.5);
	list.appendNode(6.9);
	list.appendNode(13.4);

	list.displayList();

	system("pause");
	return 0;
}