#include "dual.h"
#include <stdio.h>

void dual(int x) {
  if(x < 0 || x > 65535) return;

  printf("%lx\n", x);
}
