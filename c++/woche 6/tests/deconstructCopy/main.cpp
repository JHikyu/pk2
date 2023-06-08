#include <iostream>
#include "Auto.h"

int main() {
  // Add auto and remove auto :)
  Auto a1(4, 10, 200); // Stack
  Auto *a2 = new Auto(4, 12, 300); // Heap :)

  a1.print();
  a2->print();

  delete a2;

  return 0;
}