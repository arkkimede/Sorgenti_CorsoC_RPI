/****************************
  esempio5_3.c
  matrice dinamica per 
  tavola pitagorica
  arkkimede aprile 2021
****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int    **tavolaPitagorica;

   /*************************
    Riserviamo lo spazio per
    la matrice 10 x 10
   *************************/
   
   tavolaPitagorica = (int **)malloc(sizeof(int*) * 10);
   if( tavolaPitagorica == NULL)
   {
      printf("Errore di memoria per il puntatore doppio tavolaPitagorica \n");
      printf("Esecuzione interrotta\n");
      return 1;
   }
   for(int i=0; i<10; i++)
   {
      tavolaPitagorica[i] = (int *)malloc(sizeof(int) * 10);
      if( tavolaPitagorica[i] == NULL)
      {
         printf("Errore di memoria per il puntatore tavolaPitagorica[i] \n");
         printf("Esecuzione interrotta\n");
         return 2;
      }
   }

   /**************************
    Calcolo ed memorizzazione 
    della tavola pitagorica
    Ricordiamo che il primo indice
    è zero
   **************************/
   for(int i=0; i<10; i++)
   {
      for(int j=0; j<10; j++)
      {
         tavolaPitagorica[i][j] = (i+1)*(j+1);
      }
   }

   /*************************
    Stampa del risultato
   *************************/
   int etichettaRiga = 1;
   printf("La Tavola Pitagorica dei numeri da 1 a 10 è:\n");
   for(int i=0; i<10; i++)
   {
      for(int j=0; j<10; j++)
      {
         if((i==0)&&(j==0)) // Test per poter mettere la riga dei numeri da 1 a 10
         {
            printf("    |  1   2   3   4   5   6   7   8   9  10\n");
            printf("----+---------------------------------------\n");
         }
         if(j==0) // Test per poter mettere la colonna dei numeri da 1 a 10
         {
            printf("%3d |",etichettaRiga);
            etichettaRiga++;
         }
         printf("%3d ",tavolaPitagorica[i][j]); // Stampa vera e propria
      }
      printf("\n");
   }

   /*************************
    Liberare la memoria
    Bisogna procedere in verso
    inverso rispetto alla
    memorizzazione
   *************************/

   for(int i=0; i<10; i++)
   {
      free(tavolaPitagorica[i]);
   }
   free(tavolaPitagorica);

   return 0;
}
/**********************
Output:
La Tavola Pitagorica dei numeri da 1 a 10 è:
    |  1   2   3   4   5   6   7   8   9  10
----+---------------------------------------
  1 |  1   2   3   4   5   6   7   8   9  10
  2 |  2   4   6   8  10  12  14  16  18  20
  3 |  3   6   9  12  15  18  21  24  27  30
  4 |  4   8  12  16  20  24  28  32  36  40
  5 |  5  10  15  20  25  30  35  40  45  50
  6 |  6  12  18  24  30  36  42  48  54  60
  7 |  7  14  21  28  35  42  49  56  63  70
  8 |  8  16  24  32  40  48  56  64  72  80
  9 |  9  18  27  36  45  54  63  72  81  90
 10 | 10  20  30  40  50  60  70  80  90 100
***************************/
