/*
 * Author's name and email: Michael
 * Program description: Replaces the tabs, backspaces and 
 *  backslashes in text stream with \t, \b and \\.
 * Latest version: 02/02/2017 01:16.
 * Older versions: 
 */

#include <stdio.h>

int main(void)
{
	char c;

	while ( (c = getchar()) != EOF )
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
