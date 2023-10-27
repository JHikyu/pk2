#include <stdio.h>

#include <stdlib.h>

#define SIZE 2
int queue[SIZE];
int top = -1;
int bottom = -1;

int randomInt() {
  return rand() % 100;
}
int getIndex(int i) {
  return i % SIZE;
}
int isFull() {
  return getIndex(top + 1) == bottom;
}
int isEmpty() {
  return top == -1 && bottom == -1;
}

int enqueue(int x) {
  if(isFull()) return 0;

  if(isEmpty()) bottom = 0;

  top = getIndex(top + 1);

  queue[top] = x;
  return 1;
}
int dequeue() {
  if(isEmpty()) return -1;

  if(bottom == top) {
    int index = top;
    bottom = top = -1;
    return queue[index];
  }

  int index = bottom;
  bottom = getIndex(bottom + 1);

  return queue[index];
}

void print() {
  int i = 0;
  for(i ; i < SIZE ; i++) printf("%d ", queue[i]);
  printf("\n");
}

int main() {

  enqueue(1);
  enqueue(2);
  enqueue(2);
  printf("%i ", dequeue());
  enqueue(3);
  printf("%i ", dequeue());
  printf("%i ", dequeue());
  printf("%i ", dequeue());
  enqueue(4);
  enqueue(5);
  printf("%i ", dequeue());
  printf("%i \n", dequeue());


  return 0;
}