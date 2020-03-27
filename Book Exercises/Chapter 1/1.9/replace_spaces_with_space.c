/*
 * Author's name and email: Michael
 * Program description: Replaces multiples spaces in a row with a
 *  single space.
 * Latest version: 10:22 PM, 3/22/2020. How second implementation 
 *  worked was forgotten. Figured out how it works and commented it.
 * Older versions: 11:48 PM, 2/1/2017.
 */

#include <stdio.h>

int main()
{
	int c, lastc = '-';

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (lastc != ' ')
				putchar(c);
		}
		else
			putchar(c);

		lastc = c;
	}

	/* This implementation doesnt do anything when it reads a 
	 space. When it reads a non-space, if last character was 
	 a space then prints a space and then the current character. 
	 If last character was not a space, then prints the current 
	 character.
	 */
	 /*
	char c, marker = 0;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			if (marker == 1)
			{
				printf(" %c", c);
			}
			else
			{
				putchar(c);
			}
			marker = 0;
		}
		else
		{
			marker = 1;
		}
	}
	*/
	getchar();
	return 0;
}
