#include <stdio.h>
//putchar: writes a character to the standard input(stdout)
//printf is a generic function. 100 diff format specifiers. string
//putchar is for character only. much faster. 


int main(){
  char c;
  for(c = 'A'; c <= 'Z' ; c++) putchar(c);
  return 0;

}
