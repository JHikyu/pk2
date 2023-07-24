#ifndef vektorH
#define vektorH
#include <iostream>

class Vektor {
  private:
    int x;
    int y;
    int z;

  public:
    Vektor(int x, int y, int z);
    void setX(int num);
    void setY(int num);
    void setZ(int num);
    int getX();
    int getY();
    int getZ();

    Vektor operator+(const Vektor& r);
    friend std::ostream& operator<<(std::ostream& out, const Vektor& r);
};

#endif