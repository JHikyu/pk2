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

  do {
    index = hash(index + 1);
  } while(hashTable[index].status != FREE && index != a);

  if(hashTable[index].status == FREE) {
    hashTable[index].status = OCCUPIED;
    hashTable[index].value = a;
    return 1;
  }

  return 0;
}

// delete;

int member(int a) {
  int index = hash(a);
  entry current = hashTable[index];

  while(current.status != FREE) {
    current = hashTable[hash(++a)];
    if(current.value == a) return 1;
  }

  return 0;
}
// member;

void print() {
  int i = 0;
  for(i ; i < SIZE ; i++) {
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

  return 0;
}