#include <iostream>
#include "Vektor.h"

int main() {
  Vektor v1(1, 2, 3);
  Vektor v2(0, 1, 0);

  std::cout << v1 << " + " << v2 << " = " << v1+v2 << std::endl;
  std::cout << v1 << " * " << v2 << " = " << v1*v2 << std::endl;
  std::cout << v1 << " - " << v2 << " = " << v1-v2 << std::endl;

  return 0;
}