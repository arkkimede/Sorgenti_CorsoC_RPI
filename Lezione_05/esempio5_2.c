/****************************
  esempio5_2.c
  vettori dinamici
  arkkimede aprile 2021
****************************/
#include <stdio.h>
#include <stdlib.h>
#define GRUPPI_VEICOLI 3 
#define ERROR_ID 1
#define ERROR_RUOTE 2
#define ERROR_ALTEZZA 3
#define ERROR_COSTO 4
int main()
{
   int    *ruoteVeicoli;
   float  *altezzaVeicoli;
   char   *idVeicoli;
   double *costoVeicoli;

   /*************************
    Verifica del numero di 
    bit presenti nell'indirizzo
    sizeof(grandezza) resituisce il numero di
    byte occupati da grandezza
   *************************/
   printf("int    : %d byte \n",sizeof(ruoteVeicoli));
   printf("float  : %d byte \n",sizeof(altezzaVeicoli));
   printf("char   : %d byte \n",sizeof(idVeicoli));
   printf("double : %d byte \n",sizeof(costoVeicoli));
   
   idVeicoli = (char *)malloc(sizeof(char) * GRUPPI_VEICOLI);
   if( idVeicoli == NULL)
   {
      printf("Errore, non si è riusciti a riservre memoria per il vettore idVeicoli\n");
      printf("Esecuzione interrotta\n");
      return ERROR_ID;
   }
   idVeicoli[0] = 8;
   idVeicoli[1] = 13;
   idVeicoli[2] = 17;

   ruoteVeicoli = (int *)malloc(sizeof(int) * GRUPPI_VEICOLI);
   if( ruoteVeicoli == NULL)
   {
      printf("Errore, non si è riusciti a riservre memoria per il vettore ruoteVeicoli\n");
      printf("Esecuzione interrotta\n");
      return ERROR_RUOTE;
   }
   ruoteVeicoli[0] = 2;
   ruoteVeicoli[1] = 3;
   ruoteVeicoli[2] = 4;

   altezzaVeicoli = (float *)malloc(sizeof(float) * GRUPPI_VEICOLI);
   if( altezzaVeicoli == NULL)
   {
      printf("Errore, non si è riusciti a riservre memoria per il vettore altezzaVeicoli\n");
      printf("Esecuzione interrotta\n");
      return ERROR_ALTEZZA;
   }
   altezzaVeicoli[0] = 1.;
   altezzaVeicoli[1] = 1.3;
   altezzaVeicoli[2] = 1.8;

   costoVeicoli = (double *)malloc(sizeof(double) * GRUPPI_VEICOLI);
   if( costoVeicoli == NULL)
   {
      printf("Errore, non si è riusciti a riservre memoria per il vettore costoVeicoli\n");
      printf("Esecuzione interrotta\n");
      return ERROR_COSTO;
   }
   costoVeicoli[0] = 1500.;
   costoVeicoli[1] = 1900.;
   costoVeicoli[2] = 15000.;

   printf("\n\n***************************\n\n");
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
/**********************
Output:
int    : 4 byte
float  : 4 byte
char   : 4 byte
double : 4 byte


***************************

I 3 gruppi di veicoli hanno le seguenti caratteristiche:
id:  8 numero di ruote 2 altezza pari a 1.00 m costo pari a  1500 €
id: 13 numero di ruote 3 altezza pari a 1.30 m costo pari a  1900 €
id: 17 numero di ruote 4 altezza pari a 1.80 m costo pari a 15000 €
*************************/

