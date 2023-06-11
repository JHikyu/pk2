#include "Audio.h"
#include "Bild.h"
#include <iostream>

int main() {
  Bild b1("Hallo Mama", 2010, "Zuhause");
  b1.druckeDaten();

  Bild b2("Hallo Mama", 2010, "Zuhause");
  b2.druckeDaten();

  Audio a1("Wie gehts", 2019, "Justin", 102);
  a1.druckeDaten();

  return 0;
}