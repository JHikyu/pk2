#define SIZE 2

int queue[SIZE];
int top = -1;
int bottom = -1;
// Enqueue to top, dequeue from bottom

int isEmpty() {
  return (bottom == top == -1);
}

void enqueue(int digit) {
  // Full
  if((top+1) % SIZE == bottom) return;

  if(isEmpty()) bottom = 0;

  queue[(++top) % SIZE] = digit;
}

int dequeue() {
  if(isEmpty()) return -1;
  if(bottom == top) {
    int index = top;
    bottom = top = -1;
    return queue[index];
  }

  return queue[(bottom++) % SIZE];
}