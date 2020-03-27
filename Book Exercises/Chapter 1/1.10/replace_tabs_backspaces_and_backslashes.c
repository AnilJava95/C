/*
 * Author's name and email: Michael
 * Program description: Replaces the tabs, backspaces and
 *  backslashes in text stream with \t, \b and \\.
 * Latest version: 1:16 AM 2/2/2017.
 * Older versions:
 */

#include <stdio.h>

int main()
{
	char c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}

	getchar();
	return 0;
}
