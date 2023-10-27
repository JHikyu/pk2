#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("__Argument list__\n");

  for(int i = 0 ; i < argc ; i++) {
    printf("%s\n", argv[i]);
  }

}