#include <iostream>
#include "Vektor.h"

int main() {
  Vektor v1(1, 2, 3);
  Vektor v2(3, 3, 3);

  std::cout << v1 << std::endl;
  std::cout << v2 << std::endl;

  return 0;
}