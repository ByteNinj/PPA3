#include<stdio.h>
#pragma pack(1)
struct demo
{
int i;
float f;
char ch;
double d;
};

union hello
{
int i;
float f;
char ch;
double d;

};


int main()
{

struct demo obj;
union hello obj1;
printf("size of structure:::%d\n",sizeof obj);
printf("size of union:::%d\n",sizeof obj1);

    return 0;
}