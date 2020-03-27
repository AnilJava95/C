/*
 * Author's name and email: Michael
 * Program description: Show that a comparison can only take
 *  values of 0 or 1.
 * Latest version: 11:02 PM, 1/31/2017.
 * Older versions:
 */

#include <stdio.h>

int main()
{
	int c;
	c = (getchar() != EOF);
	printf("%d", c);

	//printf("%d", getchar() != EOF);

	getchar();
	return 0;
}
