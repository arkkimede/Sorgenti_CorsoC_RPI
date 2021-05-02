/***********************
   esempio6_6.c
 array generato da subroutine
 restituito da return
 arkkimede aprile 2021
************************/
#define STR_LEN 50
#include <stdio.h>
#include <stdlib.h>

int *MakeArray(int n);
int main()
{
   int *x, nElem=3;

   x = MakeArray(nElem);

   for(int i=0; i<nElem; i++)
     printf("x[%d] = %4d\n",i,x[i]);

   free(x);
   return 0;
}
int *MakeArray(n)
int n;
{
   int *y;
   y = (int *) malloc (sizeof(int) * n);
   if ( y == NULL )
   {
      printf("Problemi di memoria\n");
      exit(1);
   }
   
   y[0] = 89;
   y[1] = 100;
   y[2] = 12;
     
   return y;  
}
/*************************
Output:
x[0] =   89
x[1] =  100
x[2] =   12
*************************/
