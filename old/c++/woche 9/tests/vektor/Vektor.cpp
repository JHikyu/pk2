#include <iostream>
#include <stdexcept>
#include "Vektor.h"

Vektor::Vektor(int dim) {
  this->digits = new double[dim];
  this->dim = dim;
}

void Vektor::setValue(int dim, double value) {
  if(dim < 0 || dim > this->dim) throw std::out_of_range("The Dimension is out of bounds");

  *(this->digits+dim) = value;
}

Vektor Vektor::operator+(const Vektor& r) {
  Vektor newVektor(this->dim < r.dim ? this->dim : r.dim);

  int i = 0;
  while(i < newVektor.dim) {
    newVektor.setValue(i, *(this->digits+i) + *(r.digits+i));
    i++;
  }

  return newVektor;
}

Vektor Vektor::operator*(const Vektor& r) {
  Vektor newVektor(this->dim < r.dim ? this->dim : r.dim);

  int i = 0;
  while(i < newVektor.dim) {
    newVektor.setValue(i, *(this->digits+i) * *(r.digits+i));
    i++;
  }

  return newVektor;
}

Vektor Vektor::operator-(const Vektor& r) {
  Vektor newVektor(this->dim < r.dim ? this->dim : r.dim);

  int i = 0;
  while(i < newVektor.dim) {
    newVektor.setValue(i, *(this->digits+i) - *(r.digits+i));
    i++;
  }

  return newVektor;
}

Vektor Vektor::operator/(const Vektor& r) {
  Vektor newVektor(this->dim < r.dim ? this->dim : r.dim);

  int i = 0;
  while(i < newVektor.dim) {
    newVektor.setValue(i, *(this->digits+i) / *(r.digits+i));
    i++;
  }

  return newVektor;
}

std::ostream& operator<<(std::ostream& l, const Vektor& r) {
  l << "(" << *(r.digits);

  int i = 1;
  while(*(r.digits+i) != '\0' && i < r.dim) {
    l << ", " << *(r.digits+i);
    i++;
  }

  l << ")";

  return l;
}