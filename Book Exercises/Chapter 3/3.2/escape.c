/*
 * Author's name and email: learntosolveit.com
 * Program description: escape method converts escape sequences 
 *  to their string representation. '\n' becomes '\\' + 'n'.
 * Latest version: 1:24 PM, 10/7/2019.
 * Older versions: 
 */

#include <stdio.h>

void escape(char s[], char t[]);

int main(void)
{
	char s[] = "t\na\tb";
	char t[20];

	escape(s, t);

	printf("s: %s\n\nt: %s", s, t);

	return 0;
}

void escape(char s[], char t[])
{
	int i = 0; // Used to track which index we are writing to.
	int j = 0; // Used to track which character we are reading.

	while (s[j] != '\0')
	{
		switch (s[j])
		{
		case '\n':
				t[i++] = '\\';
				t[i++] = 'n';
				break;
		case '\t':
			t[i++] = '\\';
			t[i++] = 't';
			break;
		default:
			t[i++] = s[j];
			break;
		}

		j++;
	}

	t[i] = '\0';
}