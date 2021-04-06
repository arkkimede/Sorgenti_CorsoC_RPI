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
   long long int sommaPari = 0;    // Utilizzati long long int per evitare
   long long int sommaDispari = 0; // un possibile overflow
   int estratto;

   srand(100);
   while (1)
   {
      estratto = rand();
      if(estratto%2==0)
      {
         // Questo controllo è necessario farlo subito
         // per evitare di superare il numero di pari desiderato
         // Se il numero di pari è stato raggiunto si salta al
         // prossimo numero casuale
         if ( nPari == NUMERO_DI_PARI )
         {
            continue;
         }
         nPari++;
         sommaPari += estratto;
      }
      else
      {
         // Stesso discorso fatto per i pari
         if ( nDispari == NUMERO_DI_DISPARI )
         {
            continue;
         }
         nDispari++;
         sommaDispari += estratto;
      }
      // Verifichiamo se entrambi le condizioni sono soddisfatte:
      if ( (nPari == NUMERO_DI_PARI) && (nDispari == NUMERO_DI_DISPARI) )
      {
         break;
      }
   }
   printf("La somma dei primi %d numeri pari è %lld\n",NUMERO_DI_PARI,sommaPari);
   printf("La somma dei primi %d numeri dispari è %lld\n",NUMERO_DI_DISPARI,sommaDispari);

   return 0;
}
