/*
 * Author's name and email: Michael
 * Program description: Replaces multiples spaces in a row with a 
 *  single space. Marker 1 means last char was not a blank.
 * Latest version: 01/02/2017 23:48.
 * Older versions: 
 */

#include <stdio.h>

int main(void)
{
	int c, lastc = '-';

	while ( (c = getchar()) != EOF )
	{
    	if(c == ' ')
    	{
    		if (lastc != ' ')
        		putchar(c);
    	}
    	else
      		putchar(c);

    	lastc = c;
	}

	
	// I have no idea how this implementation below works but it does.
	/*
	char c, marker = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			if (marker == 1)
			{
				printf(" %c", c);
			}
			else
			{
				putchar(c);
			}
			marker = 0;
		}
		else
		{
			marker = 1;
		}
	}
	*/

	getchar();
	return 0;
}
