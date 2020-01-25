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
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */

	while ((len = getline(line, MAXLINE)) > 0)
		if (removeBlanks(line) > 0) 
			printf("%s", line);

	getchar();
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i <= lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int removeBlanks(char line[])
{
	int i;
	
	for (i = 0; line[i] != '\n'; i++)
		;
	i--; // Doing this to get the index of the last character before \n.
	
	// Going back to the index where trailing blank starts.
	while (line[i] == ' ' || line[i] == '\t')
		i--;
	
	if( i >= 0) // Ending the line where trailing blank starts.
  	{
    	++i;
    	line[i] = '\n';
    	++i;
    	line[i] = '\0';
	}
	
  	return i;
}
