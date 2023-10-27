#ifndef ManagerH
#define ManagerH

#include "Angestellter.h"

class Manager : public Angestellter {
  private:
    double bonus;

  public:
    Manager(const char *name, double gehalt, double bonus);
    double getBonus();
    void setBonus(double bonus);
};

#endif