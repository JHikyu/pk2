#ifndef CHARACTER_H
#define CHARACTER_H

#include "Inventory.h"

class Character {
  private:
    int level;
    const char* name;
    Inventory* inventory;

  public:
    Character(int l, const char* n);

    int getLevel();

    const char* getName();

    void print();
};

#endif