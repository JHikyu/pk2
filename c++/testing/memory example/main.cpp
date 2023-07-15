#include <iostream>
#include <stdlib.h>
#define MAX 5

int main() {
  int* arr = (int*) std::malloc(sizeof(int) * MAX);
  *arr = 5;
  *(arr+1) = 2;
  *(arr+2) = 9;
  std::cout << *arr << " in (" << arr << ")" << std::endl;
  std::cout << *(arr+1) << " in (" << arr+1 << ")" << std::endl;
  std::cout << *(arr+2) << " in (" << arr+2 << ")" << std::endl;
  delete[] arr;

  int *a = new int(5);
  std::cout << *a << " in (" << a << ")" << std::endl;
  delete a;

  return 0;
}