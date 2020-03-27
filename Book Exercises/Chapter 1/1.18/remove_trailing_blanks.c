/*
 * Author's name and email: Michael
 * Program description: Removes trailing blanks and tabs from each
 *  line of input and removes entirely blank lines.
 * Latest version: 5:53 PM, 9/17/2019.
 * Older versions:
 */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
int removeBlanks(char line[]);

main()
{
	int len; // Current line length.
	char line[MAXLINE]; // Current input line.

	while ((len = getline(line, MAXLINE)) > 0)
		if (removeBlanks(line) > 0)
			printf("%s", line);

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

int removeBlanks(char line[])
{
	int i;

	// Get the index of the last character before \n.
	for (i = 0; line[i] != '\n'; i++)
		;
	i--;

	// Going back to the index where trailing blank starts.
	while (line[i] == ' ' || line[i] == '\t')
		i--;

	if (i >= 0) // Ending the line where trailing blank starts.
	{
		++i;
		line[i] = '\n';
		++i;
		line[i] = '\0';
	}

	return i;
}
