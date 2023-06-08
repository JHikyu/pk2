#ifndef AngestellterH
#define AngestellterH

class Angestellter {
  private:
    const char *name;
    double gehalt;

  public:
    Angestellter(const char *name, double gehalt);
    const char* getName();
    double getGehalt();
    void setName(const char *name);
    void setGehalt(double gehalt);
};

#endif