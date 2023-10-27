#include <iostream>
#include "Angestellter.h"
#include "Manager.h"


int main() {
  Angestellter a1("Hikyu", 1234.1);
  Manager m1("Safe", 1234.2, 10);

  std::cout << "A1: " << a1.getName() << std::endl;
  std::cout << "M1: " << m1.getName() << std::endl;

  return 0;
}