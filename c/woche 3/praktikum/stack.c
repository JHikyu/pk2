int stack[10];
int count = 0;

void inStack(int x) {
  stack[count++] = x;
}

int fromStack() {
  return stack[--count];
}