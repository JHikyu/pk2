public class ArrayList {
  private double[] feld;
  public int Capacity { private set; get; }
  public int Count { private set; get; }

  public ArrayList() {
    Capacity = 1;
    feld = new double[Capacity];
  }

  private void Resize() {
    Capacity *= 2;
    double[] newFeld = new double[Capacity];
    for(int i = 0 ; i < Count ; i++) {
      newFeld[i] = feld[i];
    }
    feld = newFeld;
  }

  public void Set(int index, double value) {
    if(index < 0 || index > Capacity) throw new Exception("Out of bounds");

    if(index == Capacity) Resize(); // Double it and give it to the next heap
    if(index == Count) Count++;

    feld[index] = value;
  }

  public void Push(double value) {
    Set(Count, value);
  }

  public double Get(int index) {
    if(index < 0 || index >= Capacity) throw new Exception("Out of bounds");

    return feld[index];
  }

}