#include <iostream>
#include "Farbe.h"

Farbe::Farbe(int red, int green, int blue) {
  this->red = red;
  this->green = green;
  this->blue = blue;
}

int Farbe::getRed() {
  return red;
}

int Farbe::getGreen() {
  return green;
}

int Farbe::getBlue() {
  return blue;
}

void Farbe::print() {
  std::cout << "rgb(" << red << ", " << green << ", " << blue << ")" << std::endl;
}