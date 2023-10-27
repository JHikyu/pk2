#include <stdio.h>

void printAscii(int from, int to, int columns) {
  int count = 1;
  for(int i = from ; i < to ; i++) {
    printf("%c", i);
    if(count++ % columns == 0) printf("\n");
  }
}

int main() {
  printAscii(65, 90, 5);
}