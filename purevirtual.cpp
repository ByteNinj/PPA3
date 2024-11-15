#include<iostream>
using namespace std;
class base
{
    public:
    int a,b;
    int addition(int no1,int no2)     //concrete method
    {
        return no1+no2;
    }

    virtual int substraction(int no1,int no2)=0;    //abstact method

};

class derived:public base
{
    public:
    int x,y;
    int multiplication(int no1,int no2)
    {
        return no1*no2;
    }

    int substraction(int no1,int no2)
    {
        return no1-no2;
    }

};


int main()
{
    //base bobj;   not allowed because base class is incomplete 
    derived dobj;
    cout<<"Substraction is::"<<dobj.substraction(3,2)<<"\n";
    cout<<"multiplication is::"<<dobj.multiplication(3,2)<<"\n";
    cout<<"addition is::"<<dobj.addition(3,2)<<"\n";
    cout<<"Size of base::"<<sizeof(base)<<"\n";
    cout<<"Size of derived::"<<sizeof(derived)<<"\n";
    return 0;
}