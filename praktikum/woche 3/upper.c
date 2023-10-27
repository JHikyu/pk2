#include <stdio.h>

char toUpperCase(char c) {
  if(c >= 'a' && c <= 'z') return c -= 32;
  return c;
}

void upper(char text[]) {
  int i = 0;
  while(text[i]) {
    printf("%c", toUpperCase(text[i++]));
  }
  printf("\n");
}