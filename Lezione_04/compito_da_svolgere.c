/***********************
  esercizio.c
  arkkimede aprile 2021
***********************/

#include <stdio.h>
#include <stdlib.h>

#define NUMERO_DI_PARI 10
#define NUMERO_DI_DISPARI 8


int main()
{
   int nPari = 0;
   int nDispari = 0;
   long long int sommaPari = 0;
   long long int sommaDispari = 0;
   int estratto;

   srand(100);

   printf("La somma dei primi %d numeri pari è %lld\n",NUMERO_DI_PARI,sommaPari);
   printf("La somma dei primi %d numeri dispari è %lld\n",NUMERO_DI_DISPARI,sommaDispari);

   return 0;
}
