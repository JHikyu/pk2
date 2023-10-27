#include <stdio.h>
#include <limits.h>

int main() {
	printf("Der Typ int benoetigt %d Byte\n", sizeof(int));
	printf("Wertebereich von int: %d, ... ,%d\n", INT_MIN, INT_MAX);

	return 0;
}
