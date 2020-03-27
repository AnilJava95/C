/*
 * Author's name and email: Michael
 * Program description: returns the first index in the first 
 *  string where any character from the second string occurs.
 *  Returns -1 if non exists.
 * Latest version: 12:41 PM, 9/27/2019.
 * Older versions: 
 */

#include <stdio.h>

int getline(char line[], int maxline);
short find(char s1[], char s2[]);

int main()
{
	char s1[50];
	char s2[50];

	getline(s1, 50);
	getline(s2, 50);

	printf("First index in the first string where any"
		"character from the second string occurs: %d\n", 
		find(s1, s2));

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

short find(char s1[], char s2[])
{
	for (int i = 0; s1[i] != '\0'; i++)
	{
		for (int j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				return i;
			}
		}
	}
	return -1;
}