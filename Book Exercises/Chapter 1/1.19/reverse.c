/*
 * Author's name and email: Michael
 * Program description: Reverses the string entered by user.
 * Latest version: 3:10 PM, 9/19/2019.
 * Older versions:
 */

#include <stdio.h>

int getline(char s[], int lim);
void reverse(char string[], int len);

int main()
{
	char string[20];
	int lim = 20;
	int len;

	len = getline(string, lim);
	printf("%s", string);

	reverse(string, len);
	printf("%s", string);

	getchar();
	return 0;
}

// Read a line into s, return length.
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i <= lim - 1 && (c = getchar()) != EOF 
		&& c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// Copy the line backwards to a temp string then copy it 
//  back to the original.
void reverse(char string[], int len)
{
	int j = 0;
	char stringTemp[20];

	for (int i = len - 2; i >= 0; i--, j++)
	{
		stringTemp[j] = string[i];
	}
	stringTemp[j] = '\0';

	for (j = 0; j < len; j++)
		string[j] = stringTemp[j];
}