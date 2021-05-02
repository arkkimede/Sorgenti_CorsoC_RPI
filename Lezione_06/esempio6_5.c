/***********************
   esempio6_5.c
 array generato da subroutine
 arkkimede aprile 2021
************************/
#define STR_LEN 50
#include <stdio.h>
#include <stdlib.h>

void MakeArray(int **y, int n);
int main()
{
   int *x, nElem=3;

   MakeArray(&x, nElem);

   for(int i=0; i<nElem; i++)
     printf("x[%d] = %4d\n",i,x[i]);

   free(x);
   return 0;
}
void MakeArray(y, n)
int **y;
int n;
{
   int *tmp;
   tmp = (int *) malloc (sizeof(int) * n);
   if ( tmp == NULL )
   {
      printf("Problemi di memoria\n");
      exit(1);
   }
   
   tmp[0] = 89;
   tmp[1] = 100;
   tmp[2] = 12;
     
   *y = tmp;
   return;  
}
/*************************
Output:
x[0] =   89
x[1] =  100
x[2] =   12
*************************/
