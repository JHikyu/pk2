#ifndef VEKTORH
#define VEKTORH

#include <iostream>

class Vektor {
  private:
    double x;
    double y;
    double z;

  public:
    Vektor(double x, double y, double z);

    // Ueberladen stuff here
    Vektor operator+(const Vektor& right);
    Vektor operator*(const Vektor& right);
    Vektor operator-(const Vektor& right);
    friend std::ostream& operator<<(std::ostream& left, const Vektor& right);

};

#endif