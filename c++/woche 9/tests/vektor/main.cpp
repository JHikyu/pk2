#include <iostream>
#include "Vektor.h"

int main() {
  Vektor v1(3);
  v1.setValue(0, 1);
  v1.setValue(1, 5);
  v1.setValue(2, 6);

  Vektor v2(3);
  v2.setValue(0, 6);
  v2.setValue(1, 1);
  v2.setValue(2, 2);

  std::cout << v1 << " + " << v2 << " = " << v1+v2 << std::endl;

  return 0;
}