#ifndef vektorH
#define vektorH

#include <iostream>

class Vektor {
  private:
    int x;
    int y;
    int z;
  
  public:
    Vektor();
    Vektor(int x, int y, int z);
    int getX();
    int getY();
    int getZ();
    void setX(int num);
    void setY(int num);
    void setZ(int num);

    Vektor operator+(Vektor& r);
    friend std::ostream& operator<<(std::ostream& out, Vektor& r);
};

#endif