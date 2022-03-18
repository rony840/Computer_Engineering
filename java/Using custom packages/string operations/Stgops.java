package Stringops;
import java.util.Scanner;

public class Stgops
{
  
  public int size(String s)
  {
      return s.length();
  }
  public String lowercase(String s)
  {
      return s.toLowerCase();
  }
  public String substg(String s)
  {
      return s.substring(5);
  }
  public String join(String s)
  {
      return s.concat(" & Icecream");
  }
  public String replace(String s)
  {
      return s.replace("Cupcakes","Icecream");
  }
  public String trim(String s)
  {
      return s.trim();
  }
  public char charatpos(String s)
  {
      return s.charAt(6);
  }
  public boolean equal(String s)
  {
      return s.equals("I hate Cupcakes");
  }
  public boolean startwith(String s)
  {
      return s.startsWith("Icecream");
  }
  public int compareStgLength(String s)
  {
      return s.compareTo("   I Love Cupcakes");
  }
  public int posof(String s)
  {
      return s.indexOf("L");
  }
  
  
  
  
  
  
  
  /*public static void main(String [] args)   
  {
     
  }*/


}
