#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void quickSort(int, int, int);

int main()
{
}
void quickSort(int arr[], int left, int right)
{
	int i = left, j = right;
	int pivot = arr[(left + right) /2];

	/* partition  */
	while (i<=j) {
		while (arr[i]<pivot)
			i++;
		while  (arr[j]>pivot)
			j--;
		if (i<=j)
		{
			arr[i] ^= arr[j];
			arr[j] ^= arr[i];
			arr[i] ^= arr[j];

		i++;
		j--;
		}

	};
	if (left<j)
		quickSort(arr, left, j);
	if (i<right)
		quickSort(arr,i,right);

}
