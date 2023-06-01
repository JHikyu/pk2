#include <iostream>
#include <iomanip>
// using namespace std;
#include "Auto.h"

int main() {
  int digit = 123;

  std::cout << "Hello world!\n";
  std::cout << "Digit: " << digit << std::endl;

  int a;
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Your a: " << std::setw(5) << std::endl;


  std::cout << std::setfill('~');
  for (int i = 1; i <= a; i++) {
    std::cout << std::left << std::setw(4) << i;
  }
  std::cout << std::endl;

  Auto a1(4);
  a1.druckeDaten();

  return 0;
}