#include <stdio.h>
#define queueSize 2

int queue[queueSize];
int currentIndex = -1;
int oldestIndex = -1;

int isFull() {
  return (currentIndex+1) % queueSize == oldestIndex;
}

void enqueue(int x) {
  if(oldestIndex == -1) oldestIndex = 0;

  if(currentIndex == -1) {
    queue[0] = x;
    currentIndex = 0;
    return;
  }

  if(isFull()) {
    queue[currentIndex % queueSize] = x;
    return;
  }

  queue[(++currentIndex) % queueSize] = x;
}

int dequeue() {
  if(oldestIndex == -1) return -1;
  int currValue = queue[oldestIndex % queueSize];

  queue[oldestIndex % queueSize] = 0;

  oldestIndex++; //! Check if next item exits

  return currValue;
}

void printQueue() {
  printf("Oldest: %d\n", oldestIndex);
  printf("Oldest Item: %d\n\n", queue[oldestIndex % queueSize]);

  printf("Current: %d\n", currentIndex % queueSize);
  printf("Newest Item: %d\n\n", queue[currentIndex % queueSize]);

  int x = 0;
  for(int i = oldestIndex ; x < queueSize ; i++) {
    printf("%d\n", queue[i % queueSize]);
    x++;
  }
}