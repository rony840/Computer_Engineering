import Stringops.Stgops;
import java.util.Scanner;

class String_ops
{  
   public static void main(String args[])
   {
	String s;
        Scanner scan=new Scanner(System.in);
        Stgops obj = new Stgops();
        System.out.print("Enter a string: ");
        s=scan.nextLine();
	System.out.print("Length of the string [length]: ");
        System.out.println(obj.size(s));
        System.out.print("Input String in lower case [toLowerCase]: ");
        System.out.println(obj.lowercase(s));
        System.out.print("Subtracting 5 position of input string from beginning [Substring]: ");
        System.out.println(obj.substg(s));
        System.out.print("Joining ' & Icecream' to input string [concat]: ");
        System.out.println(obj.join(s));
        System.out.print("Replacing 'Cupcakes' with 'Icecream' [replace]: ");
        System.out.println(obj.replace(s));
        System.out.print("Removing spaces at start and at end of input string [trim]: ");
        System.out.println(obj.trim(s));
        System.out.print("Character at position 6 in input string [charAt]: ");
        System.out.println(obj.charatpos(s));
        System.out.print("Checking whether input string is equal with 'I hate Cupcakes' [equals]: ");
        System.out.println(obj.equal(s));
        System.out.print("Checking whether input string Starts with 'Icecream' [startsWith]: ");
        System.out.println(obj.startwith(s));
        System.out.print("Compares input string length with '   I Love Cupcakes' (returns 0 if equal) [compareTo]: ");
        System.out.println(obj.compareStgLength(s));
        System.out.print("Position of 'L' in input string [indexOf]: ");
        System.out.println(obj.posof(s));
   }
}
