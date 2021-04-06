/****************************
  esempio5_6.c

  Si tratta di esempio5_2.c
  in cui si usa la funzione
  malloc_chk
  arkkimede aprile 2021
****************************/
#include <stdio.h>
#include <stdlib.h>
#define GRUPPI_VEICOLI 3 
#define ERROR_ID 1
#define ERROR_RUOTE 2
#define ERROR_ALTEZZA 3
#define ERROR_COSTO 4
// Prototipo della funzione
void *malloc_chk(size_t size, char *funcName, int line);
int main()
{
   int    *ruoteVeicoli;
   float  *altezzaVeicoli;
   char   *idVeicoli;
   double *costoVeicoli;

   idVeicoli = (char *)malloc_chk(sizeof(char) * GRUPPI_VEICOLI, __FILE__, __LINE__);
   idVeicoli[0] = 8;
   idVeicoli[1] = 13;
   idVeicoli[2] = 17;

   ruoteVeicoli = (int *)malloc_chk(sizeof(int) * GRUPPI_VEICOLI, __FILE__, __LINE__);
   ruoteVeicoli[0] = 2;
   ruoteVeicoli[1] = 3;
   ruoteVeicoli[2] = 4;

   altezzaVeicoli = (float *)malloc_chk(sizeof(float) * GRUPPI_VEICOLI, __FILE__, __LINE__);
   altezzaVeicoli[0] = 1.;
   altezzaVeicoli[1] = 1.3;
   altezzaVeicoli[2] = 1.8;

   costoVeicoli = (double *)malloc_chk(sizeof(double) * GRUPPI_VEICOLI, __FILE__, __LINE__);
   costoVeicoli[0] = 1500.;
   costoVeicoli[1] = 1900.;
   costoVeicoli[2] = 15000.;

   printf("I %d gruppi di veicoli hanno le seguenti caratteristiche:\n",GRUPPI_VEICOLI);
   for (int i=0; i<GRUPPI_VEICOLI; i++)
   {
      printf("id: %2d ",idVeicoli[i]);
      printf("numero di ruote %d ",ruoteVeicoli[i]);
      printf("altezza pari a %3.2f m ",altezzaVeicoli[i]);
      printf("costo pari a %5.0lf €\n",costoVeicoli[i]);
   }
   free(idVeicoli);
   free(ruoteVeicoli);
   free(altezzaVeicoli);
   free(costoVeicoli);
   return 0;
}
void *malloc_chk(size_t size, char *funcName, int line)
/*******************************
** funzione malloc_chk
**   effettua un'allocazione di memoria
**   verificando un eventuale errore e
**   segnalandolo
** Parametri di ingresso:
**   size_t size: la dimensione di memoria richiesta
**   char *funcName: il nome del file sorgente in cui 
**                   c'è stato il problema (macro __FUNC__)
**   int line: la linea del rogente in cui c'è
**                   stato il problema (macro __LINE__)
** Parametro di uscita
**   void *ptr: puntatore al blocco di memoria richiesto 
**              da processare con un cast nella funzione chiamante
** arkkimede aprile 2021
********************************/
{
   void *ptr;
   ptr = malloc(size);
   if(ptr == NULL)
   {
      printf("Errore nell'allocazione di memoria.\n");
      printf("Quantità di meoria richiesta: %zu\n",size);
      printf("Sorgente dove è accaduto l'errore %s\n",funcName);
      printf("Lina del codice sorgente ove è accaduto l'errore: %d\n",line);
      printf("Esecuzione interrotta\n");
      exit(11);
   }
   else
     return ptr;
}
/**********************
I 3 gruppi di veicoli hanno le seguenti caratteristiche:
id:  8 numero di ruote 2 altezza pari a 1.00 m costo pari a  1500 €
id: 13 numero di ruote 3 altezza pari a 1.30 m costo pari a  1900 €
id: 17 numero di ruote 4 altezza pari a 1.80 m costo pari a 15000 €
*************************/

