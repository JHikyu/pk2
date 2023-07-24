#ifndef queueH
#define queueH

#define MAX 2

struct Queue {
  int list[MAX];
  int current;
};
void enqueue(int num);
int dequeue();

#endif