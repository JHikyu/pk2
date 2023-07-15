#include <stdio.h>

void change(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {

  int a = 5;
  int b = 10;

  printf("From %d, %d\n", a, b);
  change(&a, &b);
  printf("To   %d, %d\n", a, b);

  return 0;
}