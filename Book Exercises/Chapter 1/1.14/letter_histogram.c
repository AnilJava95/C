/*
 * Author's name and email: Michael
 * Program description: You can use the current version or you
 *  can uncomment the mark1s and comment the mark2 to use
 *  asterisks instead of numbers.
 * Latest version: 10:00 PM, 2/2/2017.
 * Older versions:
 */

#include<stdio.h>

int main()
{
	char c;
	unsigned short i;
	int characterHistogram[256] = { 0 };

	while ((c = getchar()) != EOF)
	{
		++characterHistogram[c];
	}

	for (i = 0; i < 256; i++)
	{
		printf("%3hu - %3d\n", i, characterHistogram[i]);   // mark 2
		/*printf("Ascii %3d - ", i);   // mark1
		for (int j = 0; j < characterHistogram[i]; j++)
		{
			printf("*");
			printf("*");
		}
		printf("\n");*/
	}

	getch();
	return 0;
}
