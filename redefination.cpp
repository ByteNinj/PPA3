#include<iostream>
using namespace std;

class base{
    public:
    void fun()    //defination of fun
    {
        cout<<"Inside base fun\n";
    }
};

class derived:public base               
{
    public:
    void fun()                          //redefination of fun
    {
        cout<<"Inside derived fun\n";
    }

};
int main()
{
    cout<<sizeof(base)<<"\n";
    derived dobj;
    dobj.fun();
     base bobj;
    bobj.fun();


    return 0;
}