#include "Medium.h"

int Medium::id = -1;

Medium::Medium(const char* titel, int jahr) {
  this->titel = titel;
  this->jahr = jahr;
  this->id = ++id;
}

int Medium::alter() {
  return 2023 - this->jahr;
}

const char* Medium::getTitel() {
  return this->titel;
}

void Medium::druckeDaten() {
  // Provide the implementation for druckeDaten() in Medium.cpp
}

int Medium::getId() {
  return this->id;
}

int Medium::getJahr() {
  return this->jahr;
}