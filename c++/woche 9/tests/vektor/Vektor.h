#ifndef VektorH
#define VektorH

#include <iostream>

class Vektor {
  private:
    int dim;
    double *digits;

  public:
    Vektor(int dim);
    void setValue(int dim, double value);
    Vektor operator+(const Vektor& r);
    Vektor operator*(const Vektor& r);
    Vektor operator-(const Vektor& r);
    Vektor operator/(const Vektor& r);
    friend std::ostream& operator<<(std::ostream& l, const Vektor& r);
};

#endif