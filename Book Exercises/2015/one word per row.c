// Makes it so there is only one word per row. EOF is 'X'. Page 23, exercise 1-12.

#include<stdio.h>
#include<conio.h>

#define OUTSIDE 0
#define INSIDE 1

int main() {

int p, c; // p is placement and c is character.

p = OUTSIDE;

do{
 c = getchar();
 if((c == ' '|| c == '\t' ||c == '\n') && p == INSIDE){
  printf("\n");
  p = OUTSIDE;
 }
 /* else if(c == ' '|| c == '\t' ||c == '\n' && p == OUTSIDE)  // Unnecessary part.
  continue; */
 else if(c != ' ' && c != '\t' && c != '\n'){
  printf("%c", c);
  p = INSIDE;     
 }
}while(c != 'X');

getch();
return 0; }
