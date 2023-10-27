#include <iostream>

#include "Character.h"
#include "Inventory.h"

Character::Character(int l, const char* n) {
  level = l;
  name = n;

  inventory = new Inventory();
}

int Character::getLevel() {
  return level;
}

const char* Character::getName() {
  return name;
}

void Character::print() {
  std::cout << name << " ist Level " << level << std::endl;
}