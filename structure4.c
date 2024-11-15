#include<stdio.h>
#pragma pack(1)
struct demo          //structure declaration
{
  int no;
  char ch;
  float f;
  
};
int main()
{
    struct demo obj;
    printf("%d\n",sizeof obj);
    
    
    return 0;
    }