#ifndef classVektor
#define classVektor

#include <iostream>

class Vektor {
  private:
    int x;
    int y;
    int z;

  public:
    Vektor() {
      this->x = this->y = this->z = 0;
    }
    Vektor(int x, int y, int z) {
      this->x = x;
      this->y = y;
      this->z = z;
    }

    friend std::ostream& operator<<(std::ostream& out, const Vektor& r);

    Vektor operator+(const Vektor& r) {
      Vektor newVektor(x + r.x, y + r.y, z + r.z);
      return newVektor;
    }

    Vektor operator+(int r) {
      Vektor newVektor(x + r, y + r, z + r);
      return newVektor;
    }

    Vektor operator++() {
      x++; y++; z++;
      return *this;
    }

    Vektor operator++(int) {
      Vektor tempVektor(x, y, z);
      x++; y++; z++;
      return tempVektor;
    }


};

std::ostream& operator<<(std::ostream& out, const Vektor& r) {
  out << "(" << r.x << ", " << r.y << ", " << r.z << ")";
  return out;
}

#endif