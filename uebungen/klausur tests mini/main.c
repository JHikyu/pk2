#include "stdio.h"

// Liefert die Adresse auf einen initialisierten
// Speicherbereich von size double-Zahlen
double* init(double c, int size) {
  double* speicher = malloc(sizeof(double) * size);

  for(int i = 0 ; i < size ; i++) {
    *(speicher+i) = c;
  }

  return speicher;
}

int main() {



  return 0;
}