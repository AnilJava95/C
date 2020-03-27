/*
 * Author's name and email: Michael
 * Program description: Counts the number of ' ', '\t' and '\n'
 *  characters.
 * Latest version: 10:07 PM, 3/22/2020. Changed the if else statement
 *  to a switch statement to make it more efficient.
 * Older versions: 4:38 AM, 2/1/2017.
 */

#include <stdio.h>

int main()
{
	char c;
	int blankCounter = 0, tabCounter = 0, newlineCounter = 0;

	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
		case ' ':
			++blankCounter;
			break;
		case '\t':
			++tabCounter;
			break;
		case '\n':
			++newlineCounter;
		}
	}

	printf("blankCounter:%d, tabCounter: %d, newlineCounter: %d",
		blankCounter, tabCounter, newlineCounter);

	getchar();
	return 0;
}
