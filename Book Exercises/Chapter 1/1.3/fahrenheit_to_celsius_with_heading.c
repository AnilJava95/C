/*
 * Author's name and email: Michael
 * Program description: Prints a heading before temperature
 *  conversion program.
 * Latest version: 2:43 AM, 1/31/2017.
 * Older versions:
 */

#include <stdio.h>

int main()
{
	int lower = 0, upper = 300, step = 20;
	float fahr = lower, celsius;

	printf("%3s%6s\n\n", "F", "C");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}

	getchar();
	return 0;
}
