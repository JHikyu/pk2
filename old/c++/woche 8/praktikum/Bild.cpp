#include "Bild.h"
#include "Medium.h"
#include <iostream>

Bild::Bild(const char* titel, int jahr, const char* ort) : Medium(titel, jahr) {
  this->ort = ort;
}

void Bild::druckeDaten() {
  std::cout << "ID = " << this->getId() << " \"" << this->getTitel() << "\" aufgenommen im Jahr " << this->getJahr() << " in " << this->ort << std::endl;
}




// class Bild : public Medium {
//   private:
//     const char* ort;

//   public:
//     Bild(const char* titel, int jahr, const char* ort);
//     virtual void druckeDaten();
// }

// #endif