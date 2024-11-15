#include<stdio.h>
int value=11;   //extern
int data;       //extern
void fun()
{
  int i=10;   //auto
  static int j=20; //static
  register int k=30; //register
  printf("Inside main function");
}
int mnain()
{
  int *p=NULL;
  p=(int *)malloc(5*sizeof(int)); //dynamic
  Demo();
  free(p);

    return 0;
}