#include <stdio.h>

struct Auto {
  int anzReifen;
  char farbe[20];
  int horsePower;
  float maxFuel;
  float currentFuel;
  int hub;
};

void printAuto(struct Auto a) {
  printf("__Auto__\n");
  printf("%-17s %d\n", "Reifen:", a.anzReifen);
  printf("%-17s %s\n", "Farbe:", a.farbe);
  printf("%-17s %d\n", "PS:", a.horsePower);
  printf("%-17s %f\n", "Tank Max:", a.maxFuel);
  printf("%-17s %f\n", "Tank Jetzt:", a.currentFuel);
  printf("%-17s %f\n", "Tank Verbraucht:", a.maxFuel - a.currentFuel);
  printf("%-17s %d\n", "Hubraum:", a.hub);
}

void setCharArr(char arr[], char value[]) {
  for(int i = 0 ; value[i] != '\0' ; i++) {
    arr[i] = value[i];
  }
}

int main() {
  struct Auto a1;
  a1.anzReifen = 4;

  setCharArr(a1.farbe, "Orange");

  a1.horsePower = 5;
  a1.maxFuel = 60.126;
  a1.currentFuel = 23.84567;
  a1.hub = 1600;

  printAuto(a1);


  printf("\n\n__Eigenes Auto erstellen__\nReifen: ");
  int anzReifen;
  scanf("%d", &anzReifen);
  
  char farbe[20];
  printf("Farbe: ");
  scanf("%s", farbe);
  
  int horsepower;
  printf("PS: ");
  scanf("%d", &horsepower);
  
  float maxFuel;
  printf("Tank Max: ");
  scanf("%f", &maxFuel);
  
  float currentFuel;
  printf("Tank Jetzt: ");
  scanf("%f", &currentFuel);
  
  struct Auto a2;
  a2.anzReifen = anzReifen;

  setCharArr(a2.farbe, farbe);

  a2.horsePower = horsepower;
  a2.maxFuel = maxFuel;
  a2.currentFuel = currentFuel;
  a2.hub = 1234;

  printf("\n");
  printAuto(a2);

  return 0;
}