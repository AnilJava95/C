/*
  Name: Letter Count (25.1-14)
  Copyright: 
  Author: This is not mine
  Date: 06.09.15 22:20
  Description: Counts letters in strings. This one is counting a-z right now but it can easily be changed to count any character.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

  char string[100];
  int c = 0, count[26] = {0};
 
  printf("Enter a string\n");
  gets(string);
 
  while (string[c] != '\0')
  {
   if (string[c] >= 97 && string[c] <= 122) 
     count[string[c]-97]++; // we decrase 97 to get to the range of 0-26 from 97-122. because count array is 26 integers long.
   c++;
  }
  for (c = 0; c < 26; c++)
  {
   if (count[c] != 0)
     printf("%c occurs %d times in the entered string.\n",c + 97,count[c]); // the reason we are adding 97 is c starts from 0 so in order to get to a-z we need to add 97
  }

getch();
return 0;
}
