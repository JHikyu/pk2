#include "Dictionary.h"
#define MAX 10

hashTable table[MAX];

void init() {
  for(int i = 0 ; i < MAX ; i++) {
    table[i].status = FREE;
  }
}

int insert(int num) {
  int index = num % MAX;
  int startingIndex = index;

  do {
    if(table[index].status != OCCUPIED) {
      table[index].status = OCCUPIED;
      table[index].value = num;
      return 1;
    }
    index = (index + 1) % MAX;
  } while(index != startingIndex);

  return 0;
}

int delete(int num) {
  int index = num % MAX;
  int startingIndex = index;

  int deleted = 0;

  do {
    if(table[index].status == OCCUPIED && table[index].value == num) {
      table[index].status = DELETED;
      deleted = 1;
    }
    index = (index + 1) % MAX;
  } while(index != startingIndex);

  return deleted;
}

int member(int num) {
  int index = num % MAX;
  int startingIndex = index;

  do {
    if(table[index].status == OCCUPIED && table[index].value == num) {
      return 1;
    }
  } while(index != startingIndex);

  return 0;
}