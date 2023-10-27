#include "Rational.h"
#include <iostream>
#include <stdexcept>

Rational::Rational(double zaehler, double nenner) {
  this->zaehler = zaehler;
  this->nenner = nenner;
}

Rational Rational::operator*(const Rational& r) {
  Rational newRational(this->zaehler*r.zaehler, this->nenner*r.nenner);
  return newRational;
}

Rational Rational::operator+(const Rational& r) {
  if(this->nenner != r.nenner) throw std::invalid_argument("Nenner stimmen nicht ueberein");

  Rational newRational(this->zaehler+r.zaehler, this->nenner);
  return newRational;
}

std::ostream& operator<<(std::ostream& l, const Rational& r) {
  l << "(" << r.zaehler << "/" << r.nenner << ")";
  return l;
}