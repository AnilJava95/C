/*
 * Author's name and email: Michael
 * Program description: Prints lines that are longer than 80 characters.
 * Latest version: 6:26 PM, 2/8/2017.
 * Older versions:
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

main()
{
	int len; // Current line length.
	char line[MAXLINE]; // Current input line.

	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 80)
			printf("%s", line);

	getchar();
	return 0;
}

// Read a line into s. Return length.
int getline(char s[], int lim)
{
	int c, len;

	for (len = 0; len <= lim - 1 && (c = getchar()) != EOF
		&& c != '\n'; ++len)
		s[len] = c;

	// If last character of the line is a newline, add it to 
	//  the end of the string and increment line size.
	if (c == '\n') {
		s[len] = c;
		++len;
	}

	// Terminate the string with null.
	s[len] = '\0';

	return len;
}
