#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[]="Python";
    char *str=Arr;         //Arr/&Arr/Arr[0]
     
    while(*str!='\0')
    {
        printf("%c\t",*str);
        str++;
    }


    return 0;
}