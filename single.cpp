#include<iostream>
using namespace std;

 class base{
 public:
      int i,j;
       base()
       {
          cout<<"Inside base constuctor"<<"\n";
          i=10;
          j=20;
       }
       ~base()
       {
            cout<<"Inside base destuctor"<<"\n";
       }
       void fun()
       {
        cout<<"Inside base fun\n";
       }
       
 };

 class derived:public base
 {
   public:
   int x,y;
    derived()
       {
          cout<<"Inside derived constuctor"<<"\n";
          x=30;
          y=40;
       }
       ~derived()
       {
            cout<<"Inside derived destuctor"<<"\n";
       }
        void gun()
       {
        cout<<"Inside deived gun\n";
       }
       

 };

 int main()
 {
 //base bobj;
 derived dobj;
 cout<<"Inside main function\n";
 cout<<dobj.i<<"\n";
 cout<<dobj.j<<"\n";
 cout<<dobj.x<<"\n";
 cout<<dobj.y<<"\n";
 dobj.fun();
 dobj.gun();
 //cout<<sizeof bobj<<"\n";
 //cout<<sizeof dobj<<"\n";
 



    return 0;
 }