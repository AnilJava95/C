/*
 * Author's name and email: Michael
 * Program description: Makes it so there is only one word per row.
 *  EOF is 'X'. Page 23, 1-12.
 * Latest version: 7:39 PM, 3/21/2020. Format edits.
 * Older versions: 7:39 AM, 9/4/2015.
 */

#include<stdio.h>
#include<conio.h>

#define OUTSIDE 0
#define INSIDE 1

int main() {

	int p, c; // p is placement and c is character.

	p = OUTSIDE;

	do {
		c = getchar();

		// Determine whether we switched from inside a word to outside a word.
		if ((c == ' ' || c == '\t' || c == '\n') && p == INSIDE)
		{
			printf("\n");
			p = OUTSIDE;
		}

		// Unnecessary part.
		/* else if (c == ' '|| c == '\t' ||c == '\n' && p == OUTSIDE)
			continue; */

		// Determine whether we switched from outside a word to inside a word.
		else if (c != ' ' && c != '\t' && c != '\n')
		{
			printf("%c", c);
			p = INSIDE;
		}
	} while (c != 'X');

	return 0;
}
