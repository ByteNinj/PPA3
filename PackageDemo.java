import Marvellous.Circle;
import Marvellous.Infosystem.Square;
class PackageDemo
{
   public static void main(String aa[])
   {
        Circle cobj=new Circle();
        double ans=0.0;
        ans=cobj.CircleArea(10.5);
        System.out.println("Area of circle is ::"+ans);

        Square sobj=new Square();
       ans=sobj.SquareArea(2.5);
       System.out.println("Area of square is ::"+ans);


   }
}
