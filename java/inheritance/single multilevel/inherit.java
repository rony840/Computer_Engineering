import java.util.Scanner;


class Person
{
     String name;
     String sex;
     int age;
     Person(String n, String s,int a)
     {
              name=n;
              sex=s;
              age=a;
     }
      void get()
      {     
             Scanner scan=new Scanner(System.in);
             System.out.println("Enter Name : ");
             name=scan.nextLine();
             System.out.println("Enter your sex : ");
             sex=scan.nextLine(); 
             System.out.println("Enter your age : ");
             age=scan.nextInt();
      } 
      void Display()
      {
            System.out.println("First Name : " +name);
            System.out.println("Sex : " +sex);
            System.out.println("Age : " +age);
      }
} 

class Student extends Person
{
     int id;
     String year;
 
     Student(String n, String s,int a, String y,int nId)
     {
          super(n,s,a);
          id = nId;
          year = y;         
     }
    void get()
      {      
             super.get();
             Scanner scan=new Scanner(System.in);
            
             System.out.println("Enter your year: ");
             year=scan.nextLine(); 
             System.out.println("Enter your id : ");
             id=scan.nextInt();
      } 
    void Display()
     {
            super.Display();

            System.out.println("ID : " +id);
            System.out.println("year : " +year);
     }
}

class Marks extends Student
{
      String test; //term1 or term2
      double percentage;
      Marks(String n, String s,int a, String y, int nId, String t,double p)
      {
          super(n,s,a,y,nId);
          test=t;
          percentage = p;
      }
     void get()
      {     
             super.get();
             Scanner scan=new Scanner(System.in);
            
             System.out.println("Enter test type (oral or written): ");
             test=scan.nextLine(); 
             System.out.println("Enter your Percentage: ");
             percentage=scan.nextFloat();
             
      }
     void Display()
     {
            super.Display();

            System.out.println("Test : " +test);
            System.out.println("Percentage : "+percentage+"%");
     }
}

class inherit
{
       public static void main(String args[])
       {
                 Marks mObj = new Marks("ron","male",18,"first",26,"oral",70.5);
                
                 System.out.println("");
                 System.out.println("Enter Student Details :");
                 mObj.get();
                 System.out.println("");
                 System.out.println(""); 
               
                 System.out.println("Student Details :");
                 mObj.Display();
        }
}
