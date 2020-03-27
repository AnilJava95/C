/*
 * Author's name and email: Michael
 * Program description: Changes tabs with spaces while keeping same
 *  spacing. Page 36, 1-20. Be careful the EOF is "X".
 * Latest version: 7:43 PM, 3/21/2020. Format edits.
 * Older versions: 1:43 PM, 9/3/2015.
*/

#include<stdio.h>
#include<conio.h>

int main() {

	int c; // x is the current character.

	do {
		c = getchar(); // you can use tab to enter \t from keyboard.
		if (c != '\t') {
			printf("%c", c);
		}
		else
			printf("       ");
	} while (c != 'X');

	return 0;
}
