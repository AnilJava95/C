/*
 * Author's name and email: learntosolveit.com
 * Program description: 
 * Latest version: 
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

	while (low < high)
	{
		mid = (low + high) / 2;

		if (x > v[mid])
			low = mid + 1;
		else if (x < v[mid])
			high = mid - 1;
		else
			return mid;
	}

	return -1;
}