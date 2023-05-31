#include <stdio.h>

int bitMult(int x, int n) {
  int result = 0;
  int len = sizeof(n) * 8;  // Number of bits in n

  for (int i = 0; i < len; i++) {
    int currentBit = (n >> i) & 1;   // Extract the i-th bit of n
    int partialProduct = x * currentBit;  // Partial product for the i-th bit
    
    result = result | (partialProduct << i);  // Accumulate the partial product
  }

  return result;
}

int positiveBits(int a) {
  int sum = 0;
  int len = sizeof(a) * 8;

  for(int i = 0 ; i < len ; i++) {
    sum += (a >> i) & 1;
  }

  return sum;
}
void printBits(int a) {
  int len = sizeof(a) * 8;

  for(int i = len-1 ; i >= 0 ; i--) {
    int bit = (a >> i) & 1;
    printf("%d", bit);
  }

  printf("\n");
}