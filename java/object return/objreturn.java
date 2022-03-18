class objreturn
{
  int i;
  int j;
  
  objreturn test(int a, int b)
  {
    objreturn o=new objreturn();
    o.i=a+5;
    o.j=b+5;
    return o; 
  }
  
  public static void main(String[] args)
  {
    objreturn or1=new objreturn();
    objreturn or2;
    or2=or1.test(25,32);
    System.out.println("obj.i= "+or2.i+" obj.j= "+or2.j);
  
  } 


}

