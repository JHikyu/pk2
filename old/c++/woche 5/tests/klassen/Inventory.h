#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory {
  private:
    const char* items[20];

  public:
    Inventory();
    void print();
};

#endif 