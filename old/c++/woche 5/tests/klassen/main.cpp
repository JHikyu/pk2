#include <iostream>
using namespace std;

#include "Character.h"

int main() {
  cout << "Characters: " << endl;

  Character hikyu(3, "Hikyu");
  hikyu.print();

  Character abdu(2, "Abdu");
  abdu.print();

  Character hallo43(99, "Hallo43");
  hallo43.print();

  Character felix(34, "Felix");
  felix.print();


  return 0;
}