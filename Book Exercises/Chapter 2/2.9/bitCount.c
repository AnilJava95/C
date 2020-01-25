/*
 * Author's name and email: Michael
 * Program description: Faster version of 
 *  bitCount that uses "x &= (x - 1)".
 * Latest version: 11:38 AM, 9/28/2019.
 * Older versions: 
 */

#include <stdio.h>

int main(void)
{
	int x = 255;
	int b = 0;

	for (; x != 0; x &= (x - 1))
		b++;
	printf("b: %d", b);

	return 0;
}