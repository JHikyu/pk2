struct cell {
  int value;
  struct cell* previousCell;
};

void push(int value);
int pop();