#ifndef dictionaryH
#define dictionaryH

typedef enum { FREE, OCCUPIED, DELETED } Status;

typedef struct {
  int value;
  Status status; 
} hashTable;

void init();
int insert(int num);
int delete(int num);
int member(int num);

#endif