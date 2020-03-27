/*
 * Author's name and email: Michael
 * Program description: Doesnt work right now. Will fix later.
 *  Page 36, 2-3.
 * Latest version: 8:03 PM, 3/21/2020.
 * Older versions: 1:30 PM, 10/11/2015.
 */

#include<stdio.h>
#include<conio.h>

int main()
{
	char string1[50];
	int i = 0, y;

	printf("Enter the string(Use upper case.): ");
	scanf("%s", &string1);

	while (string1[i] != '\0')
	{
		if (string1[i] == 0)
		{
			if (string1[i + 1] == 'x' || string1[i + 1] == 'X')
			{
				if (string1[i + 3] >= '0' && string1[i + 3] <= '9')
				{
					string1[i] = '\0', string1[i + 1] = '\0';
					i += 2;
				}
				else
					switch (string1[i + 3])
					{
					case 'A':
						string1[i] = 1;
						string1[i + 1] = 0;
						string1[i + 2] = '\0';
						i += 2;
					case 'B':
						string1[i] = 1;
						string1[i + 1] = 1;
						string1[i + 2] = '\0';
						i += 2;
					case 'C':
						string1[i] = 1;
						string1[i + 1] = 3;
						string1[i + 2] = '\0';
						i += 2;
					case 'D':
						string1[i] = 1;
						string1[i + 1] = 3;
						string1[i + 2] = '\0';
						i += 2;
					case 'E':
						string1[i] = 1;
						string1[i + 1] = 4;
						string1[i + 2] = '\0';
						i += 2;
					case 'F':
						string1[i] = 1;
						string1[i + 1] = 5;
						string1[i + 2] = '\0';
						i += 2;
					}
			}
		}
		else
			switch (string1[i])
			{
			case 'A':
				string1[i] = 1;
				string1[i + 1] = 0;
				i += 2;
				break;
			case 'B':
				string1[i] = 1;
				string1[i + 1] = 1;
				i += 2;
				break;
			case 'C':
				string1[i] = 1;
				string1[i + 1] = 3;
				i += 2;
			case 'D':
				string1[i] = 1;
				string1[i + 1] = 3;
				i += 2;
				break;
			case 'E':
				string1[i] = 1;
				string1[i + 1] = 4;
				i += 2;
				break;
			case 'F':
				string1[i] = 1;
				string1[i + 1] = 5;
				i += 2;
				break;
			}
		i++;
	}
	for (i = 0; i < 50; i++)
		if (string1[i] == '\0')
			continue;
		else
			printf("%d", string1[i]);

	return 0;
}
