

class StringDemo1
{
  public static void main(String a[])
    {   
        //Mutable
       StringBuffer s1=new StringBuffer("Marvellous");
      s1.append("Infosystem");
      System.out.println(s1);

      StringBuilder s2=new StringBuilder("Marvellous");
      s2.append("Infosystem");
      System.out.println(s2);

      

    }

}