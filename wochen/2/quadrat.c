#include <stdio.h>

double quadrat(double);

void ausgabe(){
	printf("5.0 hoch 2 ist %.1f\n", quadrat(5.0));
}

double quadrat(double x){
	return x*x;
}

int main(){
	ausgabe();
	return 0;
}
