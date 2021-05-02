/***********************
   esempio6_2.c
 Passaggio di una
 variabile ad una
 funzione per riferimento
 arkkimede aprile 2021
************************/

#include <stdio.h>
void valorizzatore(int *x);  // Prototipo della funzione
int main()
{
   int a=0;

   printf("a prima della funzione = %d\n",a);
   valorizzatore(&a);
   printf("a dopo della funzione = %d\n",a);
}
// Funzione che valorizza una variabile
void valorizzatore(x)
int *x;
{
   
   *x = 5;
   return;
}
/*************************
Output:
a prima della funzione = 0
a dopo della funzione = 5
*************************/
