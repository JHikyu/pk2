#include "Dictionary.h"
#include <stdio.h>

#define MAX 10

HashEntry table[MAX];

int hashFunction(int num) {
  return num % MAX;
}

void initializeDictionary() {
  for(int i = 0 ; i < MAX ; i++) {
    table[i].status = FREE;
  }
}

int insert(int num) {
  int index = hashFunction(num);
  int startingIndex = index;

  do {
    if(table[index].status != OCCUPIED) {
      table[index].value = num;
      table[index].status = OCCUPIED;
      return 1;
    }

    index = hashFunction(index + 1);
  } while(index != startingIndex);

  return 0;
}

int member(int num) {
  int index, startingIndex = hashFunction(num);

  do {
    if(table[index].status == OCCUPIED && table[index].value == num) return 1;
    index = hashFunction(index + 1);
  } while(index != startingIndex);
  
  return 0;
}

int delete(int num) {
  int index, startingIndex = hashFunction(num);

  int deleted = 0;

  do {
    if(table[index].status == OCCUPIED && table[index].value == num) {
      table[index].status == DELETED;
      deleted = 1;
    }

    index = hashFunction(index + 1);
  } while(index != startingIndex);
  
  return deleted;
}
