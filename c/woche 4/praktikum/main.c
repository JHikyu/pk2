#include <stdio.h>

#define SIZE 10

enum status {
  FREE = 0,
  OCCUPIED = 1
};

struct cell {
  int value;
  enum status status;
};

struct cell dictionary[SIZE];

void insert(int x) {
  struct cell *currentCell = &dictionary[x % SIZE];

  if(currentCell->status == FREE) {
    currentCell->status = OCCUPIED;
    currentCell->value = x;

    printf("%d in %d gespeichert\n", x, x % SIZE);
    return;
  }


  //* Collision
  // printf("%d mit %d belegt, suche freie cell fuer %d\n", x % SIZE, currentCell->value, x);

  struct cell *searchCell;
  for(int i = x+1 ; i < x+SIZE ; i++) {
    searchCell = &dictionary[i % SIZE];

    if(searchCell->status == FREE) {
      searchCell->status = OCCUPIED;
      searchCell->value = x;

      printf("%d in %d gespeichert\n", x, i % SIZE);
      return;
    }

    // printf("%d: %d\n", i % SIZE, searchCell->status);
  }
  
  printf("Keine Zelle fuer %d gefunden..\n", x);
}

int main() {
  insert(2);
  insert(2);
  insert(2);
  insert(2);
  insert(7);
  insert(0);
  insert(2);
  insert(2);
  insert(2);
  insert(2);
  insert(2);
  insert(2);
  // insert(2);
  // insert(2);
  // insert(2);
  // insert(7);
  // insert(12);

  // printf("%d\n", dictionary[0]);

  return 0;
}