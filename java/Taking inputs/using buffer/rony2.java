import java.io.*;

class rony2
{
	public static void main(String args[]) throws IOException
	{
       	  int a;
	  float b;
	  String s;
	  BufferedReader r= new BufferedReader( new InputStreamReader(System.in));
	  System.out.println("Enter the string ");
	  s= r.readLine();
	  System.out.println("You Entered String "+s);
	  System.out.println("Enter the Integer ");
	  a= Integer.parseInt(r.readLine());
	  System.out.println("You Entered Integer "+a);
	  System.out.println("Enter the float ");
	  b= Integer.parseInt(r.readLine());
	  System.out.println("You Entered float "+b);

	} 

}
