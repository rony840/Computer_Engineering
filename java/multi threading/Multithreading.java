import java.util.*;

class Multithreading extends Thread
{
  public void run()
  {
    try 
    {
      System.out.println("Thread "+Thread.currentThread().getId()+" is running...");
    }
    catch(Exception e)
    {
      System.out.println("Exception is caught");
    }
  }
}
class Multithread
{
   public static void main(String[]args)
   {
     int n=8;
     for(int i=0;i<8;i++)
     {
        Multithreading obj=new Multithreading();
        obj.start();   
     }
   }
    
}
