#include "Angestellter.h"

Angestellter::Angestellter(const char *name, double gehalt) {
  this->name = name;
  this->gehalt = gehalt;
}

const char* Angestellter::getName() {
  return name;
}

double Angestellter::getGehalt() {
  return gehalt;
}

void Angestellter::setName(const char *name) {
  this->name = name;
}

void Angestellter::setGehalt(double gehalt) {
  this->gehalt = gehalt;
}