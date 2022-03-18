import java.util.Scanner; 
  class Employ
{
  String name;
  int deptID;
  
   Employ()
  {
    this.name="coded";
    this.deptID=20;
  }
   Employ(String n, int id)
  {
    this.name=n;
    this.deptID=id;
  }
   Employ(Employ e)
  {
    this.name=e.name;
    this.deptID=e.deptID;
  }

  void print()  
  {
    System.out.println("name is: "+name);
    System.out.println("id: "+deptID);
  }

  public static void main(String[] args)
  {
    int d;
    String n;
    Scanner scan=new Scanner(System.in);
    Employ e1=new Employ();
    Employ e2=new Employ(e1);
    System.out.print("Enter your name: ");
    n=scan.nextLine();
    System.out.print("Enter your Id: ");
    d=scan.nextInt();
    System.out.println(); 
    Employ e3=new Employ(n,d);
    System.out.println();
    System.out.println("Default Constructor: ");
    e1.print();
    System.out.println();
    System.out.println("Parameterized constructor:");
    e2.print();
    System.out.println();
    System.out.println("Copy Constructor: ");
    e3.print(); 
   }
}
