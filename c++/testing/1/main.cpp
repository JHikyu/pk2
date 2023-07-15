#include <iostream>
#include "Vektor.h"

int main(int argc, char* argv[]) {
  // if(argc % 3 != 0) return 1;

  // Vektor allVektors[argc / 3];

  // for(int i = 0 ; i < argc ; i++) {
  //   std::cout << argv[i] << std::endl;
  // }

  std::cout << "Main file" << std::endl;


  Vektor a(4, 1, 9);
  Vektor b(1, 2, 1);

  std::cout << "Vektor a: " << a << std::endl;
  std::cout << "Vektor b: " << b << std::endl;

  std::cout << "a + b: " << (a + b) << std::endl;

  a++;
  std::cout << "Vektor a: " << a << std::endl;
  std::cout << "Vektor a: " << a + 5 << std::endl;


  return 0;
}