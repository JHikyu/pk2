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

int member(int x) {
  struct cell *currentCell = &dictionary[x % SIZE];

  // First cell match
  if(currentCell->status == OCCUPIED && currentCell->value == x) return 1;
  
  for(int i = x+1 ; i < x+1+SIZE ; i++) {
    currentCell = &dictionary[i % SIZE];
    if(currentCell->status == OCCUPIED && currentCell->value == x) return 1;
  }

  return 0;
}

void printDictionary() {
  for(int i = 0 ; i < SIZE ; i++) {
    printf("%5.d ", i);
  }
  printf("\n");

  for(int i = 0 ; i < SIZE ; i++) {
    struct cell currentCell = dictionary[i];
    printf("%5.d ", currentCell.value);
  }
  printf("\n");
}

int main() {
  insert(1);
  // insert(2);
  // insert(2);
  insert(7);
  insert(0);
  insert(2);
  insert(534);
  insert(1111);
  insert(2);
  // insert(2);
  // insert(2);
  insert(5234);
  // insert(12);

  printf("Member: %d? %d\n", 2, member(2));
  printf("Member: %d? %d\n", 534, member(534));
  printf("Member: %d? %d\n", 1111, member(1111));
  printf("Member: %d? %d\n", 124, member(124));

  printDictionary();

  // printf("%d\n", dictionary[0]);

  return 0;
}