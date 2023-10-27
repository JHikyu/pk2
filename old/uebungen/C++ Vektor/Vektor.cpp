#include "Vektor.h"

Vektor::Vektor(int x, int y, int z) {
  this->x = x;
  this->y = y;
  this->z = z;
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

int Vektor::getX() {
  return this->x;
}

int Vektor::getY() {
  return this->y;
}

int Vektor::getZ() {
  return this->z;
}

Vektor Vektor::operator+(const Vektor& r) {
  Vektor newVektor(this->x + r.x, this->y + r.y, this->z + r.z);
  return newVektor;
}

std::ostream& operator<<(std::ostream& out, const Vektor& r) {
  out << "(" << r.x << ", " << r.y << ", " << r.z << ")";
  return out;
}