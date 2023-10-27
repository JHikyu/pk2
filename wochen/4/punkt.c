#include <stdio.h>

struct punkt {
	int x;
	int y;
};

struct rechteck {
	struct punkt ol;
	struct punkt ur;
};

struct rechteck makeRechteck(int x, int y, int b, int h) {
	struct rechteck neu;
	neu.ol.x = x;
	neu.ol.y = y;
	neu.ur.x = x + b;
	neu.ur.y = y - h;

	return neu;
}

int flaeche(struct rechteck r) {
	return (r.ur.x - r.ol.x) * (r.ol.y - r.ur.y);
}

int main() {
	struct rechteck r = makeRechteck(10, 20, 10, 10);
	int size = flaeche(r);

	printf("Fläche von r: %d\n", size);

	return 0;
}
