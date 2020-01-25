/*
 * Author's name and email: Michael
 * Program description: Show a comparison can only take values of 0 or 1.
 * Latest version: 31/01/2017 23:02.
 * Older versions: 
 */

#include <stdio.h>

int main(void)
{
	int c;
	c = (getchar() != EOF);
	printf("%d", c);
	
	//printf("%d", getchar() != EOF);
	
	getchar();
	return 0;
}
