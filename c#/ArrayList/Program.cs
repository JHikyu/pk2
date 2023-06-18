class MainClass {
  public static void Main(string[] args) {
    Console.WriteLine("This is our ArrayList:");

    ArrayList list = new ArrayList();

    for(int i = 0 ; i < 100 ; i++) {
      list.Push(i * 11 % 512);
    }

    list.Set(2, 500);

    for(int i = 0 ; i < 10 ; i++) {
      Console.WriteLine("{0}: {1}", i, list.Get(i));
    }

  }
}