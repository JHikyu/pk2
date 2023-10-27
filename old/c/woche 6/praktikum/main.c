#include <stdio.h>
#include <stdlib.h>

int countspace(char s[]) {
  int c = 0;
  for(int i = 0 ; s[i] != '\0' ; i++) {
    if(s[i] == ' ') c++;
  }
  return c;
}

double min(double a[], int n) {
  if(n <= 0) return 0.0;

  double m = a[0];
  for(int i = 1 ; i < n ; i++) {
    if(a[i] < m) m = a[i];
  }

  return m;
}

char *stringcat (const char *str1, const char *str2) {
  int len1 = 0;
  while (str1[len1] != '\0') {
    len1++;
  }

  int len2 = 0;
  while (str2[len2] != '\0') {
    len2++;
  }

  char *newStr = malloc((len1 + len2) * sizeof(char));

  printf("%d und %d\n", len1, len2);

  for(int i = 0 ; i < len1 ; i++) {
    newStr[i] = str1[i];
  }
  for(int i = 0 ; i < len2 ; i++) {
    newStr[i + len1] = str2[i];
  }

  return newStr;
}

int fak(int n) {
  if(n == 0) return 1;

  int sum = 1;
  for(int i = 1 ; i <= n ; i++) {
    sum *= i;
  }

  return sum;
}

int binominal(int n, int k) {
  if(k > n) return 0;

  int nFak = fak(n);
  int kFak = fak(k);
  int nMinusKFak = fak(n - k);
  
  if(kFak == 0 || nMinusKFak == 0) return 0;

  return nFak / (kFak * nMinusKFak);
}

int main() {
  char* newStr = stringcat("Hallo", " Welt!!");
  printf("%s\n", newStr);

  printf("Fak 2 = %i\n", fak(10));

  printf("Binominal 10 und 0 = %d\n", binominal(10, 0));
  printf("Binominal 10 und 1 = %d\n", binominal(10, 1));
  printf("Binominal 10 und 10 = %d\n", binominal(10, 10));
  printf("Binominal 49 und 6 = %d\n", binominal(49, 6));

  return 0;
}