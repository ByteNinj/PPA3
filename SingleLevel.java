class Base
{
  public int A,B;
  public Base()
  {
    System.out.println("Inside base constuctor");

  }
  public void fun()
  {
    System.out.println("Inside base fun");
  }

}


class Derived extends Base      //class derived :public base c++
{
  public int x,y;
  public Derived()
  {
     System.out.println("Inside Derived constuctor");
  }

  public void gun()
  {
     System.out.println("Inside derived gun");
  }

}


class SingleLevel
{
    public static void main(String arg[])
    {
    System.out.println("Inside main method"); 
   Derived dobj=new Derived();
   dobj.fun();
   dobj.gun();


    }
}