#include <iostream>
#include "Vektor.h"

Vektor::Vektor(double x, double y, double z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

Vektor Vektor::operator+(const Vektor& right) {
  double newX = this->x + right.x;
  double newY = this->y + right.y;
  double newZ = this->z + right.z;
  return Vektor(newX, newY, newZ);
}

Vektor Vektor::operator*(const Vektor& right) {
  double newX = this->x * right.x;
  double newY = this->y * right.y;
  double newZ = this->z * right.z;
  return Vektor(newX, newY, newZ);
}

Vektor Vektor::operator-(const Vektor& right) {
  double newX = this->x - right.x;
  double newY = this->y - right.y;
  double newZ = this->z - right.z;
  return Vektor(newX, newY, newZ);
}

std::ostream& operator<<(std::ostream& left, const Vektor& right) {
  left << "(" << right.x << ", " << right.y << ", " << right.z << ")";
  return left;
}