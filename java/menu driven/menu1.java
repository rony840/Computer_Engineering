import java.io.*;
class menu1
{
   public static void main(String[] args)  throws IOException
   {
    BufferedReader rd= new BufferedReader(new InputStreamReader(System.in));
    char c=(char) rd.read();
    int n,i,j,k;
    //int op;
//    do
  //  {
    System.out.println("\n\tChoose anyone option from below:");
    System.out.println("\n\ta. Print odd nos upto 10.");
    System.out.println("\tb. Accept char input until 'q' is pressed.");
    System.out.println("\tc. To display a pattern.");
    System.out.println("\td. Print prime nos betwn 1 to 100.");
    System.out.println("\te. Exit");
    System.out.print("\n\n\tEnter your choice: ");
    char op=(char)rd.read();
    //op=Integer.parseInt(rd.readLine());
    switch(op)
    {  
      case 'a':
      {
        System.out.println("\tPrinting odd numbers from 1-10:");
        for(i=1;i<=10;i++)
        {
           if(i%2!=0)
           System.out.println("\t"+i);
        }
        break;
      }
      case 'b':
      {
        char in;
        System.out.println("\tReading user input until pressed 'q': ");
        do
         {in=(char)rd.read();}while(in!='q');
        break;
      }
      case 'c':
      {
          k = 2*3 - 2;
        for (i=0; i<3; i++)
        {
            for (j=0; j<k; j++)
            {
                System.out.print(" ");
            }
            k = k - 1;
            for (j=0; j<=i; j++ )
            {
              System.out.print("* ");
            }
            System.out.println();
         }
         for (i=3; i>1; --i)
         {
            for (j=0; j<k+2	; j++)
            {
                System.out.print(" ");
            }
            k = k + 1;
            for (j=3; j>=3-i+2; --j )
            {
              System.out.print("* ");
            }
            System.out.println();
  
        }
        break;
      }
      case 'd':
      {
       int num =0;
       String  primeNumbers = "";

       for (i = 1; i <= 100; i++)         
       { 		  	  
          int count=0; 	  
          for(num =i; num>=1; num--)
	  {
             if(i%num==0)
	     {
 		count = count + 1;
	     }
	  }
	  if (count ==2)
	  {
	     primeNumbers = primeNumbers + i + " ";
	  }	
       }	
       System.out.println("\tPrime numbers from 1 to 100 are :");
       System.out.println(primeNumbers);

       }  
     }  
 //   }while(op!=5); 
   }


}
