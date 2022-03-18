import java.util.Scanner;
class arraysumavg
{
  public static void main(String[] args)
  {
     Scanner a=new Scanner(System.in);
     int ar[]=new int [10];
  
     int i,n,sum=0,avg;
     //int ar[10];
     System.out.print("Enter the number of elements u wish to enter: ");
     n=a.nextInt();
     System.out.println("Enter the Integer elements: ");
     for(i=0;i<n;i++)
     {  
         ar[i]=a.nextInt();
         sum= sum +ar[i];    
     }
     avg=sum/n;
     System.out.println();
     System.out.println("Sum of the elements is: "+sum);
     System.out.println("Average of the elements is: "+avg); 

  
  }

}
