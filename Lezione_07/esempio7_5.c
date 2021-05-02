/**********************
  esempio7_5.c
Leggere un file dati
arkkimede aprile 2021
***********************/
#define STR_LEN 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Prototipo funzione
void *malloc_chk(size_t size, char *funcName, int line);
FILE *fopen_chk(char *fileName, char *mode);
int main()
{
   FILE *fp;
   int nLinee = 0;
   float dummyX, dummyY;
   float *x, *y;

   // Apertura del file in reading
   fp = fopen_chk("nuvola.dat", "r");

   // Conta delle linee presenti nel file
   while ( fscanf(fp,"%f %f \n",&dummyX, &dummyY) == 2)
     nLinee++;

   printf("Nel file sono presenti %d linee\n",nLinee);

   // Riavvolgiamo il file in modo che la prossima lettura
   // sia la prima riga
   rewind(fp);

   // Memoria per i dati x ed y
   x = (float *)malloc_chk(sizeof(float)*nLinee, __FILE__, __LINE__);
   y = (float *)malloc_chk(sizeof(float)*nLinee, __FILE__, __LINE__);

   // Loop per leggere i dati
   for(int i=0; i<nLinee; i++)
     fscanf(fp,"%f %f",&x[i],&y[i]);

   // Chiusura del file
   fclose(fp);

   // Calcolo dei valori medi
   float mediaX = 0.0;
   float mediaY = 0.0;

   for(int i=0; i<nLinee; i++)
   {
      mediaX += x[i]/nLinee;
      mediaY += y[i]/nLinee;
   }

   printf("La media delle ascisse : %f\n",mediaX);
   printf("La media delle ordinate: %f\n",mediaY);

   // Liberare memoria
   free(x);
   free(y);

   return 0;
}
void *malloc_chk(size_t size, char *funcName, int line)
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

FILE *fopen_chk(char *fileName, char *mode)
{
  FILE *fp;
  char *outr, *outa, *outw;
  outr = strstr(mode,"r");
  outa = strstr(mode,"a");
  outw = strstr(mode,"w");


  fp = fopen(fileName,mode);
  if((outr != NULL) || (outa != NULL))
  {
     if(fp == NULL)
     {
        fprintf(stderr,"The file %s does not exist\n",fileName);
        fprintf(stderr,"Execution aborted 1@fopen_chk\n");
        exit(7);
     }
  }
  else if( outw != NULL )
  {
     if(fp == NULL)
     {
        fprintf(stderr,"Error opening the file %s\n",fileName);
        fprintf(stderr,"Execution aborted 2@fopen_chk\n");
        exit(8);
     }
  }
  else
  {
     fprintf(stderr,"File open with an unknow method\n");
     fprintf(stderr,"Execution aborted 3@fopen_chk\n");
     exit(9);
  }
  return (fp);
}
/**********************************
Output:
Nel file sono presenti 1001 linee
La media delle ascisse : 5.000000
La media delle ordinate: 13.066346
***********************************/
