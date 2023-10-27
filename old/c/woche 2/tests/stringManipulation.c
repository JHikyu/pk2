void toLowercase(char str[]) {
  // A 65 a 97
  // Z 90 z 122
  int Ztoa = 7;
  int oneCycle = 25;

  for(int i = 0 ; str[i] != '\0' ; i++) {
    if(str[i] >= 65 && str[i] <= 90) str[i] += Ztoa + oneCycle;
  }
}

void toUppercase(char str[]) {
  // A 65 a 97
  // Z 90 z 122
  int Ztoa = 7;
  int oneCycle = 25;

  for(int i = 0 ; str[i] != '\0' ; i++) {
    if(str[i] >= 97 && str[i] <= 122) str[i] -= (Ztoa + oneCycle);
  }
}


char* toUppercaseCopy(char str[]) {
  // A 65 a 97
  // Z 90 z 122
  int Ztoa = 7;
  int oneCycle = 25;

  // Make copy
  // int originalSize = sizeof(str) / sizeof(str[0]);
  static char copy[100];

  for(int i = 0 ; str[i] != '\0' ; i++) {
    if(str[i] >= 97 && str[i] <= 122) copy[i] = str[i] - (Ztoa + oneCycle);
    else copy[i] = str[i];
  }

  return copy;
}
