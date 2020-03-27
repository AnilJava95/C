/*
 * Author's name and email: Michael
 * Program description: Count lines, words, and characters in input.
 *  Handles unicode characters and ascii characters.
 * Latest version: 11:15 PM, 3/22/2020.
 * Older versions: 12:11 AM, 9/17/2019.
 */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main()
{
	int c, nl = 0, nw = 0, nc = 0, state = OUT;

	while ((c = getchar()) != EOF)
	{
		++nc;

		if (c == '\n')
			++nl;

		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("Line: %d, Word: %d, Character: %d\n", nl, nw, nc);
}
