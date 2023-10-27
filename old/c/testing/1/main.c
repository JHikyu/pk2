#include <stdio.h>
#define MAX 7

int dictionary[MAX];


int getHash(int num) {
  return (num * 2134 + 41) % MAX;
}
int insert(int num) {
  int index = getHash(num);

  if(dictionary[index] != 0) return 0;

  dictionary[index] = num;
  return 1;
}
int delete(int num) {
  int index = getHash(num);

  dictionary[index] = 0;

  return 1;
}
int member(int num) {
  int index = getHash(num);

  if(dictionary[index] == 0) return 0;

  return 1;
}


int main() {

  insert(5);
  insert(123);
  insert(88);
  insert(1);
  insert(7);

  printf("Das Dic:\n");
  for(int i = 0 ; i < MAX ; i++) {
    printf("%d\n", dictionary[i]);
  }


  printf("Member: %d - %d\n", 5, member(5));
  printf("Member: %d - %d\n", 123, member(123));
  printf("Member: %d - %d\n", 88, member(88));
  printf("Member: %d - %d\n", 1, member(1));


  return 0;
}