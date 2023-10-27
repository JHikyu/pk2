#ifndef BILDH
#define BILDH
#include "Medium.h"

class Bild : public Medium {
  private:
    const char* ort;

  public:
    Bild(const char* titel, int jahr, const char* ort);
    virtual void druckeDaten();
};

#endif