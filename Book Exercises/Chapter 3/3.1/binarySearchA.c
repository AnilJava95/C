/*
 * Author's name and email: learntosolveit.com
 * Program description: 
 * Latest version: 10:44 AM, 10/7/2019.
 * Older versions: 
 */

#include <stdio.h>

int main(void)
{
	int arr[] = { 2,4,6,7,9,29,45,46,49,50,51 };
	printf("%d", binsearch(9, arr, 10));

	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;

	while (low < high && x != v[mid])
	{
		mid = (low + high) / 2;

		if (x > v[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	if (x == v[mid])
		return mid;
	else
		return -1;
}