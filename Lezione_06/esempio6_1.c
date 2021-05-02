/***********************
   esempio6_1.c
 Passaggio di una
 variabile ad una
 funzione per valore
 arkkimede aprile 2021
************************/

#include <stdio.h>
int quadrato(int b);  // Prototipo della funzione
int main()
{
   int a = 2;
   int y;

   y = quadrato(a);
   printf("a = %d\n",a);
   printf("y = %d\n",y);
}
// Funzione che effettua il quadrato di un intero
int quadrato(b)
int b;
{
   
   b*=b;
   return b;
}
/*************************
Output:
a = 2
y = 4
*************************/
