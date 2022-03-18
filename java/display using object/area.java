import java.util.Scanner;

class Rectangle
{
   double length,breadth;
   double area,perimeter;
   Rectangle(double l, double b )
   {
      length=l;
      breadth=b;
   }
   
   void get()
   {
      Scanner scan=new Scanner(System.in);
      System.out.print("Enter Length: ");
      length=scan.nextDouble();
      System.out.print("Enter Breadth: ");
      breadth=scan.nextDouble();
   }
   void area()
   { 
       area=length*breadth;
   }
   void perimeter()
   { 
       perimeter= 2*(length+breadth);
   }
   void show()
   {
      System.out.println("");
      System.out.println("Area of Rectangle: "+area);
      System.out.println("Perimeter of Rectangle: "+perimeter);
   }
}   
  class Sample 
 { 
   public static void main(String[] args)
   {
       Rectangle r=new Rectangle(10.5,11.6);
       r.get();
       r.area();
       r.perimeter();
       r.show();
   }
}
