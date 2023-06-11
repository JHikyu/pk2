#include "Audio.h"
#include "Medium.h"
#include <iostream>

Audio::Audio(const char* titel, int jahr, const char* interpret, int dauer) : Medium(titel, jahr) {
  this->interpret = interpret;
  this->dauer = dauer;
}

void Audio::druckeDaten() {
  std::cout << "ID = " <<  this->getId() << " \"" << this->getTitel() << "\" von " << this->interpret << " aus " << this->alter() << " Spieldauer: " << this->dauer << " sek." << std::endl;
}