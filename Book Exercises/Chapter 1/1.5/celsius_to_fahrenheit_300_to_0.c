/*
 * Author's name and email: Michael
 * Program description: C to F table from 300C to 0C.
 * Latest version: 04:03 AM, 1/31/2017.
 * Older versions:
 */

#include <stdio.h>

int main()
{
	int lower = 0, upper = 300, step = 20;
	float fahr, celsius = upper;

	printf("%3s%6s\n\n", "C", "F");
	while (celsius >= lower)
	{
		fahr = (9.0 / 5.0 * celsius) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius -= step;
	}

	getchar();
	return 0;
}
