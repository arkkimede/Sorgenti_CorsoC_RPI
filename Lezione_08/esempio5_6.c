#include <stdio.h>
#include <stdlib.h>
#include <utilities.h>
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
