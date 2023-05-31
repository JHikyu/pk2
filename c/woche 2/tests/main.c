#include <stdio.h>
#include "math.h"
#include "stringManipulation.h"

#define min(a, b) a > b ? a : b

int main() {
  // int a = 0;
  // scanf("%d", &a);

  // printBits(a);
  // printf("\n");


  // printf("* 2 = %d\n", bitMult(a, 2));
  // printf("* 3 = %d\n\n", bitMult(a, 3));

  // printf("Pos Bits = %d\n", positiveBits(a));

  // int arr[5] = {0};
  // printf("%d\n", arr[0]);

  char input[] = "Hello world!";
  toLowercase(input);
  printf("%s\n", input);

  toUppercase(input);
  printf("%s\n", input);

  char* result = toUppercaseCopy(input);
  printf("%s\n", result);

  return 0;
}