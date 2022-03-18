import java.lang.*;

class MyException extends Exception
{
  MyException(String msg)
  {
    super(msg);
  }
}
 
class exception
{
  public static void main(String [] args)
  {
    int a=5, b=1000;
    try
    {
      float c=a/b;
      if(c<0.1)
      {
        throw new MyException("Error1");
      }

    } 
    catch(Exception e)
    { 
       System.out.println("Error encountered!!"); 
    }
  }
}
