#include<stdio.h>
void Display()
{
    int i=10;
    static int j=10;
    i++;
    j++;
    printf("value of i is :%d\n",i);
   printf("value of j is :%d\n",j);
    printf("\n");
}
int main()
{
    Display();
    Display();
    Display();
    Display();

    return 0;
}