#ifndef RATIONALH
#define RATIONALH

#include <iostream>

class Rational {
  private:
    double zaehler;
    double nenner;
  public:
    Rational(double zaehler, double nenner);
    Rational operator*(const Rational& r);
    Rational operator+(const Rational& r);
    friend std::ostream& operator<<(std::ostream& l, const Rational& r);
};

#endif