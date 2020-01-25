/*
 * Author's name and email: Michael
 * Program description: Deletes each character in s1
 *  that matches any character in the string s2.
 * Latest version: 12:19 PM, 9/27/2019.
 * Older versions: 
 */

#include <stdio.h>

int getline(char line[], int maxline);
void squeeze(char s1[], char s2[]);

int main(void)
{
	char s1[50];
	char s2[50];

	getline(s1, 50);
	getline(s2, 50);

	squeeze(s1, s2);

	printf("s1: %s\ns2: %s", s1, s2);

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

void squeeze(char s1[], char s2[])
{
	char equalFlag = 0;
	short position = 0;

	for (int i = 0; s1[i] != '\0'; i++)
	{
		for (int j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				equalFlag = 1;
				break;
			}
		}
		if (equalFlag == 0)
			s1[position++] = s1[i];

		equalFlag = 0; // Reset
	}
	s1[position] = '\0';
}