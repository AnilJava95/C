/*
 * Author's name and email: Michael
 * Program description: gets "length" amount bits starting from 
 *  position "position" and alligns them to the right.
 * Latest version: 
 * Older versions: 
 */

#include <stdio.h>

char setBits(char, char, char);

int main(void)
{
	char number = 6;
	char position = 1;
	char length = 3;

	number = setBits(number, position, length);

	printf("x: %d", number);

	return 0;
}

char setBits(char number, char position, char length)
{
	char gapToTLeft = 8 - (position + length);
	number << gapToTLeft;
	number >> gapToTLeft + position;
	return number;
}