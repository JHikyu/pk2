#include <iostream>
using namespace std;

#include "Farbe.h"

int main() {
  cout << "Farbcreator.exe" << endl;

  Farbe turquoise(64, 224, 208);
  turquoise.print();

  Farbe yellow(255, 255, 0);
  yellow.print();

  return 0;
}