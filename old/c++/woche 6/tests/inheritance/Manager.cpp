#include "Manager.h"
#include "Angestellter.h"

Manager::Manager(const char *name, double gehalt, double bonus) : Angestellter(name, gehalt) {
  this->bonus = bonus;
}

double Manager::getBonus() {
  return bonus;
}

void Manager::setBonus(double bonus) {
  this->bonus = bonus;
}