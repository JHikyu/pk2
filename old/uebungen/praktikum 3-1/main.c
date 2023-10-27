#include <stdio.h>

char* toUpperCase(char str[]) {
  int i = 0;
  while(str[i] != '\0') {
    if((char) str[i] >= 'a' && (char) str[i] <= 'z')
      str[i] -= 32;
    i++;
  }
  return str;
}

int main() {
  char str[] = "Hello world!";
  printf("%s", toUpperCase(str));
  return 0;
}
