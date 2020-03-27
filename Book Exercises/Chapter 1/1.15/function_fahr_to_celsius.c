/*
 * Author's name and email: Michael
 * Program description: Uses a function to calculate celsuius
 *  equivalent of fahrtenheit value.
 * Latest version: 4:55 AM, 2/5/2017.
 * Older versions:
 */

#include <stdio.h>

float fahrenheitToCelsius(float fahr);

int main()
{
	int lower = 0, upper = 300, step = 20;
	float fahr = lower;

	printf("%3s%6s\n\n", "F", "C");
	while (fahr <= upper)
	{
		printf("%3.0f %6.1f\n", fahr, fahrenheitToCelsius(fahr));
		fahr += step;
	}

	getchar();
	return 0;
}

float fahrenheitToCelsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}
