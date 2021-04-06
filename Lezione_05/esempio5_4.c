/****************************
  esempio5_4.c
  introduzione delle funzioni 
  arkkimede aprile 2021
****************************/
#include <stdio.h>
#include <stdlib.h>
/********************
 Lista dei prototipi
 ********************/
int somma(int a, int b);
int main()
{
   int x, y;
   int risultato;

   x = 10;
   y = 20;

   risultato = somma(x, y);
   printf("La somma tra %d e %d è %d\n",x,y,risultato);

   return 0;
}
/*********************
 * funzione somma
 **********************
 * parametri in ingresso
 * int a   Primo addendo
 * int b   Secondo addendo
 **********************
 * Parametro di uscita
 * int out La somma
 *********************/
 int somma(int a, int b)
 {
    int out;
    out = a + b;

    return out;
 }
/**********************
Output:
La somma tra 10 e 20 è 30
***************************/
