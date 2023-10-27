#include "LinkedList.h"

LinkedList::LinkedList() { };
int LinkedList::append(const char* text) {
  Item* newItem = new Item;
  newItem->value = text;

  if(firstItem == nullptr) {
    firstItem = newItem;
    return 1;
  }

  // Loop to the end
  Item *currentItem = firstItem;
  while(currentItem->next != nullptr) currentItem = currentItem->next;

  // Add next
  currentItem->next = newItem;

  return 1;
}

int LinkedList::insert(const char* text, int p) {
  if(p < 0) return 0;

  Item* newItem = new Item;
  newItem->value = text;

  // If list empty and p == 0, set first element
  if(firstItem == nullptr) {
    if(p != 0) return 0;

    firstItem = newItem;
    return 1;
  }

  Item* currentItem = firstItem;
  while(currentItem->next != nullptr) {
    currentItem = currentItem->next;
    p--;
  }

  if(p > 0) return 0;

  currentItem->next = newItem;
  return 1;
}

int LinkedList::remove(int p) {
  Item* currentItem = firstItem;
  while(currentItem->next != nullptr) {
    currentItem = currentItem->next;
    if(--p == 1) break;
  }

  if(p > 1) return 0;

  currentItem->next = currentItem->next->next;
  return 1;
}

const char* LinkedList::get(int p) {
  if(p < 0) return "";
  if(firstItem == nullptr) return "";

  Item* currentItem = firstItem;
  while(currentItem->next != nullptr) {
    currentItem = currentItem->next;
    if(--p == 0) break;
  }
  if(p > 0) return 0;

  return currentItem->value;
}

int LinkedList::index_of(const char* text) {
  if(firstItem == nullptr) return -1;

  int i = 0;

  if(firstItem->value == text) return i;

  Item* currentItem = firstItem->next;
  while(currentItem->next != nullptr) {
    currentItem = currentItem->next;
    i++;
    if(currentItem->value == text) return i;
  }

  return 0;
}

const char* LinkedList::first() {
  return firstItem->value;
}

const char* LinkedList::last() {
  if(firstItem == nullptr) return "";

  Item* currentItem = firstItem->next;
  while(currentItem->next != nullptr) {
    currentItem = currentItem->next;
  }

  return currentItem->value;
}

void LinkedList::visit_all(void(*work)(const char* t)) {
  if(firstItem == nullptr) return;

  Item* currentItem = firstItem->next;
  work(currentItem->value);

  while(currentItem->next != nullptr) {
    currentItem = currentItem->next;
    work(currentItem->value);
  }
}