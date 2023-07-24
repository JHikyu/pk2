#ifndef vektorH
#define vektorH
#include <iostream>

class Vektor {
  private:
    int* values;

  public:
    Vektor(int dimension);
    ~Vektor();
    Vektor(const Vektor& orig);
    int setDimension(int n, int value) const;
    int getDimension(int n) const;

    Vektor operator*(const Vektor& r) const;
    friend std::ostream& operator<<(std::ostream& out, const Vektor& r);
};

#endif