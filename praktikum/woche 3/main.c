#include <stdio.h>
#include "upper.h"
#include "queue.h"

int main() {
  // char text[15] = "Hallo Mama\0";
  // upper(text);

  enqueue(1);
  enqueue(2);
  enqueue(2);
  printf("%i ", dequeue());
  enqueue(3);
  printf("%i ", dequeue());
  printf("%i ", dequeue());
  printf("%i ", dequeue());
  enqueue(4);
  enqueue(5);
  printf("%i ", dequeue());
  printf("%i \n", dequeue());



  return 0;
}