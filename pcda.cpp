//parameterised constructor with default arguments
#include<iostream>
using namespace std;
class demo{
    public:
    int no1,no2,no3;

    demo(int a=11,int b=21,int c=51)
    {
        no1=a;
        no2=b;
        no3=c;
        cout<<no1<<"\t"<<no2<<"\t"<<no3<<"\n";

    }

};

int main()
{
     demo obj1();         // 11 21 51
     demo obj2(10);     // 10 21 51
     demo obj3(10,20);  // 10 20 51
     demo obj(10,20,30);//10 20 30

    return 0;
}