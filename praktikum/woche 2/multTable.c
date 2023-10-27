#include "multTable.h"
#include <stdio.h>

void multTable() {
  int min, max;
  printf("Einmaleins:\nVon: ");
  scanf("%d", &min);

  printf("Bis: ");
  scanf("%d", &max);

  int i, c;
  for(c = 1 ; c <= 10 ; c++) {
    for(i = min ; i <= max ; i++) {
      int num = i * c;
      printf("%4d", num);
    }
    printf("\n");
  }

}