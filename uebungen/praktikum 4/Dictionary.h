#ifndef dictionaryH
#define dictionaryH

typedef enum { FREE, OCCUPIED, DELETED } Status;

typedef struct {
  int value;
  Status status;
} HashEntry;

void initializeDictionary();
int insert(int num);
int delete(int num);
int member(int num);

#endif