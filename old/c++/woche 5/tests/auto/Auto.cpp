#include "Auto.h"
#include <iostream>

Auto::Auto(int r, int p) {
  reifen = r;
  ps = p;
}

int Auto::getReifen() {
  return reifen;
}

int Auto::getPs() {
  return ps;
}

void Auto::druckeDaten() {
  std::cout << "Auto hat " << reifen << " Reifen." << std::endl;
}