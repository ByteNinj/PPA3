#include<iostream>
using namespace std;
class demo
{
 public: 
    int no1=0,no2=0;
    demo(int A,int B)
    {
        no1=A;
        no2=B;
    }
    //void display(demo *this ,int x)
    void display(int x)
       {
        cout<<"value of no1::"<<this->no1<<"\n";
        cout<<"value of no1::"<<this->no2<<"\n";
        cout<<"value of x::"<<x<<"\n";
     }


};
int main()
{
  demo obj(11,21);
  obj.display(51);  //display(&obj,51) ;
  
  return 0;

}