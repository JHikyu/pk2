#include <stdlib.h>
#include "stack.h"

struct cell* topCell;

void push(int value) {
  struct cell* c = malloc(sizeof(struct cell));
  c->value = value;
  c->previousCell = topCell;

  topCell = c;
}

int pop() {
  int value = topCell->value;
  struct cell* previousCell = topCell->previousCell;
  free(topCell);

  topCell = previousCell;

  return value;
}