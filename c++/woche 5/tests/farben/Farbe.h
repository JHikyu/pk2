#ifndef HEADER_FARBE
#define HEADER_FARBE

class Farbe {
  private:
    int red;
    int green;
    int blue;
  public:
    Farbe(int red, int green, int blue);
    int getRed();
    int getGreen();
    int getBlue();
    void print();
};

#endif