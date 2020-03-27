/*
 * Author's name and email: Michael
 * Program description: You can either use current version or you
 *  can uncomment mark1s and comment mark2 to use asterisks instead 
 *  of numbers.
 * Latest version: 6:38 AM, 2/2/2017.
 * Older versions:
 */

#include <stdio.h>

int main(void)
{
	char c;
	int i, wordLength = 0;
	int lenghtHistorgram[50] = { 0 };

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (wordLength > 0)
			{
				++lenghtHistorgram[wordLength];
				wordLength = 0;
			}
		}
		else
			++wordLength;
	}

	for (i = 1; i < 50; i++)
	{
		printf("%2d - %3d\n", i, lenghtHistorgram[i]);   // mark 2
		/*printf("%2d - ", i);   // mark1
		for (int j = 0; j < lenghtHistorgram[i]; j++)
		{
			printf("*");
		}
		printf("\n");*/
	}

	getchar();
	return 0;
}
