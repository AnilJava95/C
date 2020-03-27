/*
 * Author's name and email: Michael
 * Program description: Transforms F to C table in the book to
 *  C to F.
 * Latest version: 2:50 AM, 1/31/2017.
 * Older versions:
 */

#include <stdio.h>

int main()
{
	int lower = 0, upper = 300, step = 20;
	float fahr, celsius = lower;

	printf("%3s%6s\n\n", "C", "F");
	while (celsius <= upper)
	{
		fahr = (9.0 / 5.0 * celsius) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}

	getchar();
	return 0;
}
