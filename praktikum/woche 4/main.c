#include <stdio.h>
#define SIZE 5

typedef enum status {
  FREE,
  OCCUPIED,
  DELETED
} status;

typedef struct entry {
  status status;
  int value;
} entry;

entry hashTable[SIZE];

int hash(int a) {
  return a % SIZE;
}

int insert(int a) {
  int index = hash(a);

  if(hashTable[index].status == FREE) {
    hashTable[index].status = OCCUPIED;
    hashTable[index].value = a;
    return 1;
  }

  int c = 0;
  do {
    index = hash(index + 1);
  } while(hashTable[index].status == OCCUPIED && ++c < SIZE);

  if(hashTable[index].status != OCCUPIED) {
    hashTable[index].status = OCCUPIED;
    hashTable[index].value = a;
    return 1;
  }

  return 0;
}

int delete(int a) {
  int index = hash(a);

  if(hashTable[index].status == FREE)
    return 0;

  if(hashTable[index].status == OCCUPIED && hashTable[index].value == a) {
    hashTable[index].status = DELETED;
    return 1;
  }

  int c = 0;
  do {
    index = hash(index + 1);
    if(hashTable[index].value == a) {
      hashTable[index].status = DELETED;
      return 1;
    }
  } while(hashTable[index].status != FREE && ++c < SIZE);

  return 0;
}

int member(int a) {
  int index = hash(a);
  
  if(hashTable[index].status == OCCUPIED && hashTable[index].value == a)
    return 1;
  
  if(hashTable[index].status == FREE)
    return 0;

  int c = 0;
  do {
    index = hash(index + 1);
  } while(hashTable[index].value != a && ++c < SIZE);

  if(hashTable[index].value == a)
    return 1;

  return 0;
}

void print() {
  int i = 0;
  for(i ; i < SIZE ; i++) {
    if(hashTable[i].status == DELETED)
      printf("_ ");
    else
      printf("%d ", hashTable[i].value);
  }
  printf("\n");
}

int main() {
  print();

  printf("insert 1: %d\n", insert(1));
  print();

  printf("insert 7: %d\n", insert(7));
  print();

  printf("insert 2: %d\n", insert(2));
  print();

  printf("insert 1: %d\n", insert(1));
  print();

  printf("insert 15: %d\n", insert(15));
  print();

  printf("insert 3: %d\n", insert(3));
  print();

  printf("insert 15: %d\n", insert(15));
  print();

  printf("member 5: %d\n", member(5));
  printf("member 1: %d\n", member(1));
  printf("member 15: %d\n", member(15));
  printf("member 6: %d\n", member(6));
  printf("member 7: %d\n", member(7));
  printf("member 2: %d\n", member(2));

  print();

  delete(15);
  print();

  delete(2);
  print();

  printf("insert 15: %d\n", insert(15));
  print();

  printf("insert 2: %d\n", insert(2));
  print();

  delete(2);
  print();

  delete(1);
  print();

  delete(15);
  print();

  delete(7);
  print();

  delete(1);
  print();



  printf("insert 141: %d\n", insert(141));
  print();

  delete(141);
  print();

  return 0;
}