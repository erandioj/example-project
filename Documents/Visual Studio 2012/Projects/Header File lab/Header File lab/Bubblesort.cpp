#include "arraytools.h"

int main()
{
	const int arraysize = 100;
	int myarray[arraysize] = { 0 };

	
	create_array(myarray, arraysize);

	print_array(myarray, arraysize);

	bubblesort(myarray, arraysize);

	print_array(myarray, arraysize);



	system("PAUSE");
	return 0;
}