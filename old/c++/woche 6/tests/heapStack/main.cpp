#include <iostream>

int main() {
  int *i = new int(5);
  std::cout << "i: " << i << std::endl;
  std::cout << "*i: " << *i << std::endl;

  int y = 6;
  std::cout << "y: " << y << std::endl;

  int *intList[] = { i, &y };
  *intList[0] = 4;
  std::cout << "*intList[0]: " << *intList[0] << std::endl;
  std::cout << "intList[0]: " << intList[0] << std::endl;
  std::cout << "intList[1]: " << intList[1] << std::endl;

  std::cout << "*i: " << *i << std::endl;

  delete i; // Heap

  return 0;
}