#include <iostream>
#include "Vektor.h"

Vektor::Vektor(int num) {
  this->values = new int[num];
}
Vektor::~Vektor() {
  delete[] this->values;
}
Vektor::Vektor(const Vektor& orig) {
  int size = sizeof(*this->values) / sizeof(this->values[0]);
  Vektor* newVektor = new Vektor(size);

  for(int i = 0 ; i < size ; i++) {
    newVektor->setDimension(i, orig.getDimension(i));
  }
}
int Vektor::setDimension(int n, int value) const {
  int size = sizeof(*this->values) / sizeof(this->values[0]);
  if(n >= size) throw std::invalid_argument("Invalid index");

  this->values[n] = value;
  return 1;
}
int Vektor::getDimension(int n) const {
  int size = sizeof(*this->values) / sizeof(this->values[0]);
  if(n >= size) throw std::invalid_argument("Invalid index");

  return this->values[n];
}

Vektor Vektor::operator*(const Vektor& r) const {
  int size = sizeof(*this->values) / sizeof(this->values[0]);
  Vektor newVektor(size);

  for(int i = 0 ; i < size ; i++) {
    newVektor.setDimension(i, this->getDimension(i) * r.getDimension(i));
  }

  return newVektor;
}
std::ostream& operator<<(std::ostream& out, const Vektor& r) {
  out << "(";

  int size = sizeof(*r.values) / sizeof(r.values[0]);
  for(int i = 0 ; i < size ; i++) {
    out << r.getDimension(i);
    if(i < size-1) out << ", ";
  }
  out << ")";

  return out;
}