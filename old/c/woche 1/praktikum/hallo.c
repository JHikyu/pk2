#include <stdio.h>
#include "ggt.h"

int main() {
  printf("Hallo Dortmund.\n");

  printf("GGT von 9 und 21 ist %d\n", ggt(9, 21));
  printf("GGT von 27 und 9 ist %d\n", ggt(27, 9));
  printf("GGT von 45252 und 123 ist %d\n", ggt(45252, 123));
  
  return 0;
}