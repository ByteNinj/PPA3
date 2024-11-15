#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[]="Python";
    char *str=Arr;         //Arr/&Arr/Arr[0]
  printf("%c\n",*str);  //P
  str++;
  printf("%c\n",*str);  //y
  str++;
  printf("%c\n",*str);  //t
  str++;
  printf("%c\n",*str);  //h
  str++;
  printf("%c\n",*str);  //o
  str++;
  printf("%c\n",*str);  //n
 
    return 0;
}