import java.util.Scanner;
class rightshift
{
  public static void main(String [] args)
  {
    int x,y,a,b;
    Scanner scan=new Scanner(System.in);
    System.out.print("Enter a negative integer value: ");
    x=scan.nextInt();
    System.out.print("Enter a positive integer value: ");
    y=scan.nextInt();
    System.out.println();
    System.out.print("Enter number of bits to rightshift negative integer value: ");
    a=scan.nextInt();
    System.out.print("Enter number of bits to rightshift positive integer value: ");
    b=scan.nextInt();
    System.out.println();
    System.out.print("Rightshift of the negative integer value is: ");
    System.out.println(x>>a); 
    System.out.print("Rightshift of the positive integer value is: ");
    System.out.println(y>>b);
  }
}
