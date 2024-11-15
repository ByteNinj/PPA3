#include<iostream>
using namespace std;

class base{
    public:
    int i,j;
   virtual void fun()    //1000 imaginary addressess
    {
        cout<<"Inside base fun\n";
    }
    void gun()     //2000
    {
        cout<<"Inside base gun\n";
    }
   virtual void sun() //3000
    {
        cout<<"Inside base sun\n";
    }
   virtual void run() //4000
    {
        cout<<"Inside base run\n";
    }
};

class derived:public base               
{
    public:
    int x,y;
   virtual void fun()        //5000                  //redefination of fun
    {
        cout<<"Inside derived fun\n";
    }
     void gun()  //6000
    {
        cout<<"Inside derived gun\n";
    }
     virtual  void mun()   //7000
    {
        cout<<"Inside derived mun\n";
    }
    void run()   //8000
    {
        cout<<"Inside derived run\n";
    }


};
int main()
{
    cout<<"size of base class:"<<sizeof(base)<<"\n";
     cout<<"size of derived class:"<<sizeof(derived)<<"\n";
     derived dobj;    //8
    base *bptr=NULL;  //8
    bptr=&dobj;       //upcasting is allowed
     bptr->fun();
     bptr->gun();
     bptr->sun();
     bptr->run();
    //nnn bptr->mun();    
    
    return 0;
}

//derived fun()
//base gun() 
//base sun()
//derived run()