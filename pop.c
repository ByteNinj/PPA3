#include<stdio.h>

  int addition(int a,int b)
  {
    int ans=0;
     ans=a+b;
    return ans;
  }

int substraction(int a,int b)
  {
    int ans;
     ans=a-b;
    return ans;
  }

  
  int multiplication(int a,int b)
  {
    int ans=0;
     ans=a*b;
    return ans;
  }

int division(int a,int b)
  {
    int ans;
     ans=a/b;
    return ans;
  }
  

int main()
{
   int no1=0,no2=0,ret=0;
   printf("Enter two numbers:::\n");
   scanf("%d %d",&no1,&no2);
   ret=addition(no1,no2);
   printf("Addition of given two numbers:::%d\n",ret);
   ret=substraction(no1,no2);
   printf("substraction of given two numbers:::%d\n",ret);
   ret=multiplication(no1,no2);
   printf("multiplication of given two numbers:::%d\n",ret);
   ret=division(no1,no2);
   printf("division of given two numbers:::%d\n",ret);
   printf("ret value:::%d",ret);
    return 0;
}