/*
 * Author's name and email: Michael, learntosolveit.com
 * Program description: Converts a string of hexadecimal 
 *  digits (including an optinal 0x or 0X) into its 
 *  equivalent integer value.
 * Latest version: 10:55 AM, 9/27/2019.
 * Older versions: 
 */
 
#include <stdio.h>

int getline(char line[], int maxline);
int htoi(char s[]);

int main(void)
{
	char line[50];
	int value;

	getline(line, 50);
	value = htoi(line);

	printf("The value of %s is %d", line, value);

	return 0;
}

int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF 
		&& c != '\n'; ++i)
		s[i] = c;
	/*
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	*/
	s[i] = '\0';

	return i;
}

int htoi(char s[])
{
	int hexdigit, i, inhex, n;
	i = 0;
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}

	n = 0;
	inhex = 1;

	for (; inhex == 1; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;
		else
			inhex = 0;

		if (inhex == 1)
			n = 16 * n + hexdigit;
	}
	return n;
}
