import letmecalculate.Calculator;
import java.util.Scanner;
public class Calculate
{  public static void main(String args[])
   {
	int a,b;
        Scanner scan=new Scanner(System.in);
        Calculator obj=new Calculator();
        System.out.print("Enter 1st value: ");
        a=scan.nextInt();
        System.out.print("Enter 2nd value: ");
        b=scan.nextInt();
        
        System.out.println("Sum of "+a+" & "+b+"[User Input]: "+obj.add(a,b));
   }
}
