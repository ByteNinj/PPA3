class Arithmatic
{
   public int addition(int A,int B)       //ddition@ii
   {
    return A+B;
   }

    public int addition(int A,int B,int C)       //ddition@ii
   {
    return A+B+C;
   }

     public float addition(float A,float B)       //ddition@ii
   {
    return A+B;
   }


}


class Overloading
{
    public static void main(String ags[] )
    {    

        Arithmatic aobj=new Arithmatic();
        System.out.println(aobj.addition(10,20));
        System.out.println(aobj.addition(10,20,30));
        System.out.println(aobj.addition(10.10f,20.30f));
        
    }
}