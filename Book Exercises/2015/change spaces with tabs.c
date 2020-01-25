// Changes tabs with spaces while keeping same spacing. page 36 exercise 1-20. Be careful the EOF is "X".

#include<stdio.h>
#include<conio.h>

int main() {

int c; // x is the current character.

do{
 c = getchar(); // you can use tab to enter \t from keyboard.
 if(c != '\t'){
  printf("%c",c);
  }
 else
  printf("       ");
}while(c != 'X');

getch();
return 0; }
