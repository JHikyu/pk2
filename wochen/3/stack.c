#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int len = 0;

int pop() {
	if(!len) return -1;
	return stack[--len];
}

int push(int digit) {
	if(len > SIZE) return 0;

	stak[len++] = digit;

	return 1;
}

int main() {ş
	return 0;
}
