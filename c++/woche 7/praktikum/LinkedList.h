#ifndef LINKEDLISTH
#define LINKEDLISTH

class LinkedList {
  private:
    struct Item {
      const char* value;
      Item* next;
    };

    Item* firstItem;

  public:
    LinkedList();
    int append(const char* text);
    int insert(const char* text, int p);
    int remove(int p);
    const char* get(int p);
    int index_of(const char* text);
    const char* first();
    const char* last();
    void visit_all(void (*work)(const char* t));
};

#endif