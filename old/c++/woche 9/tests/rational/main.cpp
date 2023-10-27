#include "Rational.h"
#include <iostream>

int main() {
  Rational r1(5, 4);
  Rational r2(2, 4);
  std::cout << r1 << " * " << r2 << " = " << r1*r2 << std::endl;
  std::cout << r1 << " + " << r2 << " = " << r1+r2 << std::endl;


  return 0;
}