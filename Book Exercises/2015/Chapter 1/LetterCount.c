/*
 * Author's name and email: Not mine
 * Program description: Counts letters in strings. This one is counting a-z
 *  right now but it can easily be changed to count any character. Page 25, 1-14
 * Latest version: 7:30 PM, 3/21/2020. Format edits.
 * Older versions: 11:34 AM, 09/17/2015.
 */

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

	char string[100];
	int c = 0, count[26] = { 0 };

	printf("Enter a string\n");
	gets(string);

	while (string[c] != '\0')
	{
		if (string[c] >= 97 && string[c] <= 122)
			// We decrase 97 to get to the range of 0-26 from 97-122.
			//  because count array is 26 integers long.
			count[string[c] - 97]++;
		c++;
	}
	for (c = 0; c < 26; c++)
	{
		if (count[c] != 0)
			// The reason we are adding 97 is c starts from 0 so in
			//  order to get to a-z we need to add 97
			printf("%c occurs %d times in the entered string.\n",
				c + 97, count[c]);
	}

	return 0;
}
