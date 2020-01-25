/*
 * Author's name and email: Michael
 * Program description: Rewrote the loop without using complex conditions.
 * Latest version: 5:39 PM, 9/20/2019.
 * Older versions: 
 */
 
 #include <stdio.h>

 int main()
 {
	 for (i = 0; i < lim - 1; ++i) {
		 c = getchar();
		 if (c == EOF)
			 break;
		 if (c == '\n')
			 break;
		 s[i] = c;
	 }


	 getchar();
	 return 0;
 }
 