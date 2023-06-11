#ifndef MEDIUMH
#define MEDIUMH

class Medium {
  private:
    static int id;
    const char* titel;
    int jahr;

  public:
    Medium(const char* titel, int jahr);
    int alter();
    virtual void druckeDaten();
    const char* getTitel();
    int getId();
    int getJahr();
};

#endif