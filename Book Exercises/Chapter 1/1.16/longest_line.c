/*
 * Author's name and email: Michael
 * Program description: Prints the longest input line. The
 *  only change i made from book is increasing MAXLINE size.
 * Latest version: 9:25 PM, 2/7/2017.
 * Older versions:
*/

#include <stdio.h>
#define MAXLINE 10000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len; // Current line length.
	int max = 0; // Maximum length seen so far.
	char line[MAXLINE]; // Current input line.
	char longest[MAXLINE]; // Longest line.

	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) /* there was a line */
		printf("%s", longest);
	getchar();
	return 0;
}

// Read a line into s. Return length.
int getline(char s[], int lim)
{
	int c, len;

	for (len = 0; len <= lim - 1 && (c = getchar()) != EOF &&
		c != '\n'; ++len)
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

// Copy 'from' into 'to'. Assume 'to' is big enough.
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
