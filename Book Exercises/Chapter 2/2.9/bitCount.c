/*
 * Author's name and email: Michael
 * Program description: Faster version of bitCount that uses "x &= (x - 1)".
 *
 * "x &= x - 1" causes the right most 1 bit to be deleted because
 * the 0 bits we face until we get to the right most 1 bit will
 * turn to 1 and the right most 1 will turn to 0. Rest of the bits
 * will remain same.
 *
 *  1111     1110
 * &1110    &1101
 *  -----    -----
 *  1110     1100
 *
 * Latest version: 11:38 AM, 9/28/2019.
 * Older versions:
 */

#include <stdio.h>

int main()
{
	int x = 255;
	int b = 0;

	for (; x != 0; x &= (x - 1))
		b++;
	printf("b: %d", b);

	return 0;
}