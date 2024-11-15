#include<stdio.h>
#include<string.h>
int main()
{
   char arr[]={'H','E','L','L','O','\0'};

   char brr[]="Hello";

   printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));

     printf("Length of string is ::%d\n",strlen(arr));
      printf("Length of string is ::%d\n",strlen(brr));




    return 0;
}