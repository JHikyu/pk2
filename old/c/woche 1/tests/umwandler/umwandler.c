#include <stdio.h>
#include "datatypes.h"
#include "time.h"

int main() {
  int in = 74;

  printf("Wir wandeln die Zahl %d in einige Formate um.\n\n", in);

  printf("%d Dezimal in Float: %f\n", in, dezimalToFloat(in));
  printf("%d Dezimal in Double: %f\n\n", in, dezimalToDouble(in));

  printf("%d Tage in Wochen: %f\n", in, daysAsWeeks(in));

  struct timed time = daysToTimed(in);
  printf("%d Tage sind %d Monate, %d Wochen und %d Tage\n", in, time.months, time.weeks, time.days);

  return 0;
}
