#include "Queue.h"

struct Queue queue;

void enqueue(int num) {
  if(queue.current == MAX) {
    queue.list[MAX-1] = num;
    return;
  }

  queue.list[queue.current++] = num;
}

int dequeue() {
  if(queue.current == 0) return -1;
  return queue.list[--queue.current];
}