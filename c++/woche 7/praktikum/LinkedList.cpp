#include "LinkedList.h"

LinkedList::LinkedList() { };
int LinkedList::append(const char* text) {
  Item newItem;
  newItem.value = text;

  if(firstItem == nullptr) {
    firstItem = &newItem;
    return 1;
  }

  // Loop to the end
  Item *currentItem = firstItem;
  while(currentItem->next != nullptr) currentItem = currentItem->next;

  // Add next
  currentItem->next = &newItem;

  return 1;
}

// int insert(const char* text, int p);
// int remove(int p);
// const char* get(int p);
// int index_of(const char* text);
// const char* first();
// const char* last();
// void visit_all(void (*work)(const char* t));