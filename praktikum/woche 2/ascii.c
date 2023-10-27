#include "acsii.h"
#include <stdio.h>

void ascii(int s) {
  int i = 0;
  int a;
  for(a = 32 ; a < 127 ; a++) {
    printf("%3d %.2c ", a, a);

    if(++i >= s) {
      printf("\n");
      i = 0;
    }
  }
  printf("\n");
}
