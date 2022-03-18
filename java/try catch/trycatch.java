import java.lang.*;

class trycatch
{
  public static void main(String [] args)
  {
    int i=5, j=0;
    float k=2.5f;
    int l;
    try
    {
      l=i/j;
    }
    catch(ArithmeticException e)
    {
       System.out.println("Error1");
    }  
    catch(NumberFormatException e)
    {
    }
    finally
    {
       System.out.println("error2");
    }
  }
}
