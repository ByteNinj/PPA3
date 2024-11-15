import Mypackage.Addition;
import Mypackage.Substraction;
class PackageAri
{
  public static void main(String a[])
  {
     int ans=0;
     Addition aobj=new Addition();
     Substraction sobj=new Substraction();
    ans=aobj.add(2,3);
     System.out.println("Addition is:"+ans);
     ans=sobj.sub(2,3);
     System.out.println("Substraction  is:"+ans);
  }

}