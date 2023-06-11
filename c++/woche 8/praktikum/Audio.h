#ifndef AUDIOH
#define AUDIOH

#include "Medium.h"

class Audio : public Medium {
  private:
    const char* interpret;
    int dauer;
  public:
    Audio(const char* titel, int jahr, const char* interpret, int dauer);
    virtual void druckeDaten();
};

#endif