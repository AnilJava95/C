/*
 * Author's name and email: Michael
 * Program description: Changes spaces into minimum amount of tabs
 *  and spaces. page 36 exercise 1-21. Be careful the EOF is "X".
 * Latest version: 5:20 PM, 3/21/2020. Got rid of unnecessary parts
 *  and parts that were not needed.
 * Older versions: 1:43 PM, 9/3/2015
 */

#include<stdio.h>
#include<conio.h>

#define OUTSIDE 0
#define INSIDE 1

int main() {

	// y is space counter, x tells us where we are in the row and c 
	//  is the current character
	int y = 0, x = OUTSIDE, c;

	do {
		c = getchar();

		// c is not space and space counter is not zero
		if (c != ' ' && y != 0)
		{
			while (y >= 7)
			{
				printf("\t");
				y -= 7;
			}
			while (y > 0)
			{
				printf(" ");
				y -= 1;
			}
			//printf("%c", c); // Was not needed and caused repetition.
		}

		// c is not space and space counter is zero
		if (c != ' ' && y == 0)
			printf("%c", c);

		// c is space
		if (c == ' ')
			y += 1;

		/* // was not needed
		if (c == '\n' && y != 0)
		{
			while (y >= 7)
			{
				printf("\t");
				y -= 7;
			}
			while (y > 0)
			{
				printf(" ");
				y -= 1;
			}
		}*/
	} while (c != 'X');

	return 0;
}
