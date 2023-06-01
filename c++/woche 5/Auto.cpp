#include "Auto.h"
#include <iostream>

Auto::Auto(int r) {
  reifen = r;
}

int Auto::getReifen() {
  return reifen;
}

void Auto::druckeDaten() {
  std::cout << "Auto hat " << reifen << " Reifen." << std::endl;
}