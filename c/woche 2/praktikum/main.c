#include <stdio.h>

void printAscii(int start, int end, int s);
void printMultTable();
void intToDual(int x);

int main() {
  // printAscii(32, 126, 10);
  // printMultTable();
  // intToDual(347594858);
  return 0;
}

void printAscii(int start, int end, int s) {
  int col = 0;

  for(int i = start ; i <= end ; i++) {
    printf("%3.d %c ", i, (char) i);
    if(++col % s == 0) printf("\n");
  }

  printf("\n");
}

void printMultTable() {
  int from, to;

  printf("Einmaleins\nVon: ");
  scanf("%d", &from);

  printf("Bis: ");
  scanf("%d", &to);

  int nthRow = 1;

  for(int row = from ; row <= (from*from) ; row += from) {

    for(int column = row ; column <= (row*2) ; column += nthRow) {
      printf("%3.d ", column);
    }

    nthRow++;

    printf("\n");
  }

}

void intToDual(int x) {
  char hexCode[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  char str[100] = "";
  int index = 0;

  while(x > 0) {
    int remainder = x % 16;

    if(remainder < 10) str[index++] = hexCode[remainder];
    else str[index++] = 'A' + (remainder - 10);

    x /= 16;
  }

  printf("%s", str);
}