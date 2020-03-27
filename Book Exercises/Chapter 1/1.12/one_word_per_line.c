/*
 * Author's name and email: Michael
 * Program description: Prints one word per row.
 * Latest version: 2:47 AM, 2/2/2017.
 * Older versions:
 */

#include<stdio.h>
#include<conio.h>

#define OUTSIDE 0
#define INSIDE 1

int main()
{
	int p, c; // p is placement and c is character.

	p = OUTSIDE;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ' || c == '\t' || c == '\n') && p == INSIDE) {
			printf("\n");
			p = OUTSIDE;
		}
		/* else if(c == ' '|| c == '\t' ||c == '\n' && p == OUTSIDE)  // Unnecessary part.
		continue; */
		else if (c != ' ' && c != '\n' && c != '\t')
		{
			printf("%c", c);
			p = INSIDE;
		}
	}

	return 0;
}
