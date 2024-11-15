

class StringDemo
{
  public static void main(String a[])
    {   //Immutable
        String s1="Marvellous"; //Memory allocated inside String pool
       String s2=new String("PPA"); //Memory alloacted in Heap    
       String s3="Python";
       String s4="Marvellous";
       String s5=new String("PPA");
       String s6="Java";
       String s7=new String("Pune");
       
       System.out.println("Length of Sting is:"+s1.length());

    }

}