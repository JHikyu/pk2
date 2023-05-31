#include <stdio.h>
#include "stack.h"
#include "swap.h"

int main() {
  // push(5);
  // push(2);
  // push(6);
  
  // printf("%i\n", pop()); //! 6
  // printf("%i\n", pop()); //! 2
  // printf("%i\n", pop()); //! 5

  // int a = 2;
  // int b = 5;
  // printf("Swap(%d, %d)\n", a, b);
  // swap(&a, &b);
  // printf("%d %d\n", a, b);

  // int arr[100];
  // printf("arr[100] size: %d\n", sizeof(arr));

  // int* pArr;
  // pArr = &arr[0];
  // printf("*pArr size: %d\n", pArr);

  int arr[100];
  for(int i = 0 ; i < (sizeof(arr) / sizeof(arr[0])) ; i++) {
    arr[i] = i*i;
  }

  int* ptr = arr;
  printf("%d\n", *(ptr + 5));

  return 0;
}