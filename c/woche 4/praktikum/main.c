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


int hash(int x) {
  return x % SIZE;
}

void insert(int x) {
  struct cell *currentCell = &dictionary[hash(x)];

  if(currentCell->status == FREE) {
    currentCell->status = OCCUPIED;
    currentCell->value = x;

    printf("%d in %d gespeichert\n", x, hash(x));
    return;
  }


  //* Collision

  printf("%d mit %d belegt, suche freie cell fuer %d\n", hash(x), currentCell->value, x);

  int modifier;
  struct cell *searchCell = &dictionary[hash(x+modifier)];
  while((hash(x+ (modifier++)) != hash(x)) && searchCell->status == OCCUPIED) {
    searchCell = &dictionary[hash(x+modifier)];
    printf("%d mit %d belegt, suche freie cell fuer %d\n", hash(x+modifier), searchCell->value, x);
  }

  searchCell->status = OCCUPIED;
  searchCell->value = x;

  printf("%d in %d gespeichert\n", x, hash(x+modifier));
}

int main() {
  insert(2);
  insert(2);
  insert(2);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  insert(3);
  // insert(2);
  // insert(2);
  // insert(2);
  // insert(2);
  // insert(7);
  // insert(12);

  // printf("%d\n", dictionary[0]);

  return 0;
}