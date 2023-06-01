class Auto {
  private:
    int reifen;
    int ps;
    // char farbe[20];

  public:
    Auto(int r, int p);
    int getReifen();
    int getPs();
    // char* getFarbe();
    void druckeDaten();
};