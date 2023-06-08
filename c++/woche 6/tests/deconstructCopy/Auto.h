class Auto {
  private:
    int reifen;
    int fenster;
    int ps;
  
  public:
    Auto(int reifen, int fenster, int ps);
    ~Auto(); // Deconstructor


    int getReifen();
    int getFenster();
    int getPs();
    void setReifen(int reifen);
    void setFenster(int fenster);
    void setPs(int ps);
    void print();
};