#ifndef matrixH
#define matrixH

#include "Vektor.h"
#include <iostream>

class Matrix {
  private:
    Vektor* vektors;

  public:
    Matrix();
    void addVektor(const Vektor& vektor);

    friend std::ostream& operator<<(std::ostream& out, const Vektor& r);
};

#endif