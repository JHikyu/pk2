#include "Vektor.h"
#include <iostream>
Vektor::Vektor() {
  this->x = 0;
  this->y = 0;
  this->z = 0;
}
Vektor::Vektor(int x, int y, int z) {
  this->x = x;
  this->y = y;
  this->z = z;
}
int Vektor::getX() {
  return this->x;
}
int Vektor::getY() {
  return this->y;
}
int Vektor::getZ() {
  return this->z;
}
void Vektor::setX(int num) {
  this->x = num;
}
void Vektor::setY(int num) {
  this->y = num;
}
void Vektor::setZ(int num) {
  this->z = num;
}
Vektor Vektor::operator+(Vektor& r) {
  Vektor newVektor(this->x + r.x, this->y + r.y, this->z + r.z);
  return newVektor;
}

std::ostream& operator<<(std::ostream& out, Vektor& r) {
  out << "(" << r.x << ", " << r.y << ", " << r.z << ")";
  return out;
}