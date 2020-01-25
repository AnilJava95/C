/*
 * Author's name and email: Michael
 * Program description: Counts the number of ' ', '\t' and '\n' 
 *  characters.
 * Latest version: 01/02/2017. 04:38.
 * Older versions: 
 */

#include <stdio.h>

int main(void)
{
	char c;
	int blankCounter = 0, tabCounter = 0, newlineCounter = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++blankCounter;
		}
		else if (c == '\t')
		{
			++tabCounter;
		}
		else if (c == '\n')
		{
			++newlineCounter;
		}
	}

	printf("blankCounter:%d, tabCounter: %d, newlineCounter: %d", 
	   blankCounter, tabCounter, newlineCounter);

	getchar();
	return 0;
}
