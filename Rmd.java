
class Base
{
  public int A,B;
 
  public void fun()
  { System.out.println("Inside base fun"); }

   public void gun()
  { System.out.println("Inside base gun"); }

   public void sun()
  { System.out.println("Inside base sun"); }

   public void run()
  { System.out.println("Inside base run"); }

}

class Derived extends Base     
{
  public int x,y;
  
  public void fun()
  { System.out.println("Inside derived fun"); }

   public void sun()
  { System.out.println("Inside derived sun"); }

   public void mun()
  { System.out.println("Inside derived mun"); }

   public void bun()
  { System.out.println("Inside derived bun"); }

}


class Rmd
{
    public static void main(String arg[])
    {
   
   Base bobj=new Derived();    //upcasting
     bobj.fun();
     bobj.gun();
     bobj.sun();
     bobj.run();

    //bobj.mun();
    // bobj.bun();
   
   
   

    }
}