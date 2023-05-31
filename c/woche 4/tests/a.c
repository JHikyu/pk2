#include <stdio.h>

int main() {
  int x, y; // rand, rand
  int z[] = {4,2,1}; // 4, 2, 1
  int *ptra, *ptrb; // none, none
  ptra = &z[2]; // address z[2] = 1
  x = *ptra - 2; // -1
  y = *(ptra - 1) - 2; // 2 -2 = 0
  ptrb = ptra - 1; // &z[1] = 1
  *ptrb = 0; // [1] = 0
  *(z+2) = 2; // [2] = 2
  z[0] = 2; // [0] = 2

  printf("%d, %d, %d, %d, %d\n ",z[0],z[1],z[2],x,y); // 2, 0, 2, -1, 0

  return 0;
}