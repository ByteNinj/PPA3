#include<iostream>
using namespace std;
class demo{
  public:
  int Addition(int A,int B)
  {
     return A+B;

  }
   double Addition(double A,double B)
  {
     return A+B;
     
  }
   int Addition(int A,int B,int c)
  {
     return A+B+c;
     
  }

};
int main()
{
  demo obj;
  cout<<obj.Addition(10,11)<<"\n";
  cout<<obj.Addition(10.10,11.10)<<"\n";
  cout<<obj.Addition(10,11,21)<<"\n";

return 0;
}