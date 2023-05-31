float daysAsWeeks(int in) {
  float weeks = (float) in / 7;

  return weeks;
}

float daysAsMonths(int in) {
  float months = (float) in / 30;

  return months;
}




struct timed {
  int days;
  int weeks;
  int months;
};

struct timed daysToTimed(int in) {
  int months = in / 30;
  int remainingDays = in % 30;
  int weeks = remainingDays / 7;
  int days = remainingDays % 7;

  struct timed time;
  time.days = days;
  time.weeks = weeks;
  time.months = months;

  return time;
}