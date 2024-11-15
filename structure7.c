#include<stdio.h>
struct demo{
int no;
float f;

}; 
   
   int main()
   {

  struct demo obj[3];
  obj[0].no=11;
  obj[0].f=11.11;

   obj[1].no=21;
  obj[1].f=21.21;


  obj[2].no=31;
  obj[2].f=31.31;

  
    return 0;
   }