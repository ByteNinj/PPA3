#include<stdio.h>
int main()
{
   char c='M';
   int i=11;
   float f=3.14;
   double d=3.9987;
     
     char *cptr=&c;
     int *iptr=&i;
     float *fptr=&f;
     double *dptr=&d;

    printf("%c\n",c);
     printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);
       printf("\n");
   printf("%lu\n",&c);
   printf("%lu\n",&i);
   printf("%lu\n",&f);
   printf("%lu\n",&d);
       printf("\n");
   printf("%d\n",cptr);
   printf("%d\n",iptr);
   printf("%d\n",fptr);
   printf("%d\n",dptr);
          printf("\n");
   printf("%c\n",*cptr);
   printf("%d\n",*iptr);
   printf("%f\n",*fptr);
   printf("%lf\n",*dptr);
         printf("\n");
   printf("%d\n",sizeof cptr);
   printf("%d\n",sizeof iptr);
   printf("%d\n",sizeof fptr);
   printf("%d\n",sizeof dptr);
            printf("\n");


    return 0;

}