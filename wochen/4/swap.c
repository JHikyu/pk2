#include <stdio.h>

void swap(int*a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int zahl = 5;
	int zahl2 = 2;
	swap(&zahl, &zahl2);

	printf("Zahl: %d, Zahl2: %d\n", zahl, zahl2);

	return 0;
}
