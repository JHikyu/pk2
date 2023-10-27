void swapInt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// int a = 5;
// int b = 10;
// printf("A %d, B %d\n", a, b);
// swapInt(&a, &b);
// printf("A %d, B %d\n", a, b);