/***********************
   esempio6_4.c
 array passato a subroutine
 arkkimede aprile 2021
************************/
#define STR_LEN 50
#include <stdio.h>
#include <stdlib.h>

void sub(int *y, int n);
int main()
{
   int *x, nElem=4;

   x = (int *)malloc(sizeof(int)*nElem);
   if ( x == NULL )
   {
      printf("Problemi di memoria\n");
      exit(1);
   }

   sub(x, nElem);
   for(int i=0; i<nElem; i++)
     printf("x[%d] = %4d\n",i,x[i]);

   free(x);
   return 0;
}
void sub(y, n)
int *y;
int n;
{
   for(int i=0; i<n; i++)
     y[i] = i*10;
     
   return;  
}
/*************************
Output:
x[0] =    0
x[1] =   10
x[2] =   20
x[3] =   30
*************************/
