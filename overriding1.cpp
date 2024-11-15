#include<iostream>
using namespace std;

class base{
    public:
    int i,j;
    void fun()    
    {
        cout<<"Inside base fun\n";
    }
    void gun()
    {
        cout<<"Inside base gun\n";
    }
    void sun()
    {
        cout<<"Inside base sun\n";
    }
    void run()
    {
        cout<<"Inside base run\n";
    }
};

class derived:public base               
{
    public:
    int x,y;
    void fun()                          //redefination of fun
    {
        cout<<"Inside derived fun\n";
    }
     void gun()
    {
        cout<<"Inside derived gun\n";
    }
    void sun()
    {
        cout<<"Inside derived sun\n";
    }
    void mun()
    {
        cout<<"Inside derived mun\n";
    }

};
int main()
{
     derived dobj;    //8
    base *bptr=NULL;  //8
    bptr=&dobj;       //upcasting is allowed
     bptr->fun();
     bptr->gun();
     bptr->sun();
     bptr->run();
    // bptr->mun();    
    
    return 0;
}