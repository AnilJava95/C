// Changes spaces into minimum amount of tabs and spaces. page 36 exercise 1-21. Be careful the EOF is "X".

#include<stdio.h>
#include<conio.h>

#define OUTSIDE 0
#define INSIDE 1

int main() {

int y = 0, x = OUTSIDE, c; // y is space counter, x tells us where we are in the row and c is the current character

do{
 c = getchar();
 if(c != ' ' && y != 0){
  while(y >= 7){
   printf("\t");
   y -= 7;        
  }
  while(y > 0){
   printf(" ");
   y -= 1;
  }
  printf("%c", c);
 }
 if(c != ' ' && y == 0)
  printf("%c", c);
 if(c == ' ')
  y += 1;
 if(c = '\n' && y != 0){
  while(y >= 7){
   printf("\t");
   y -= 7;        
  }
  while(y > 0){
   printf(" ");
   y -= 1;
} 
 }
} while(c != 'X');


getch(); 
return 0; }
