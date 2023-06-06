#include <iostream>
#define SIZE 10

//* Element
class Element {
  private:
    int value;
    Element* next;
  public:
    Element(int value);
    int getValue();
    Element* getNext();
    void setNext(Element* element);
};
Element::Element(int value) {
  this->value = value;
}
int Element::getValue() {
  return value;
}
Element* Element::getNext() {
  return next;
}
void Element::setNext(Element* element) {
  next = element;
}

//* List
Element *list[SIZE];

int insert(int value) {
  int position = value % SIZE;

  // No list yet
  if(list[position] == nullptr) {
    list[position] = new Element(value);
    // std::cout << "Fuege an " << position << ": " << value << " ein." << std::endl;
    return 1;
  }

  // Loop and set at end
  Element *currentElement = list[position];

  while(currentElement->getNext() != nullptr) {
    currentElement = currentElement->getNext();
  }

  currentElement->setNext(new Element(value));

  return 1;
}

int member(int value) {
  int position = value % SIZE;

  // No list yet
  if(list[position] == nullptr) {
    return 0;
  }

  Element *currentElement = list[position];
  while(currentElement->getValue() != value && currentElement->getNext() != nullptr) { 
    currentElement = currentElement->getNext();
  }

  if(currentElement->getValue() == value) return 1;
  return 0;
}

int remove(int value) {
  int position = value % SIZE;

  // No list yet
  if(list[position] == nullptr) {
    return 0;
  }

  // First element
  if(list[position]->getValue() == value) {
    list[position] = list[position]->getNext();
    return 1;
  }

  // Search for the previous element
  Element *currentElement = list[position];
  while(currentElement->getNext() != nullptr) {
    if(currentElement->getNext()->getValue() == value) break;
    currentElement = currentElement->getNext();
  }
  if(currentElement->getNext() == nullptr) return 0;

  // Skip next element
  currentElement->setNext(currentElement->getNext()->getNext());

  return 1;
}


int main() {
  insert(5);
  insert(15);
  insert(12);
  insert(1);
  insert(2);

  remove(12);
  remove(15);
  remove(1);
  remove(5);

  for (int i = 1; i <= 20; i++) {
    if (member(i)) {
      std::cout << i << std::endl;
    }
  }

  return 0;
}