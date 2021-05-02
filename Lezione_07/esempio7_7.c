/**********************
  esempio7_7.c
Esempio di uso di file binari
arkkimede aprile 2021
***********************/
#define STR_LEN 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funzione di ausilio per l'apertura dei file
FILE *fopen_chk(char *fileName, char *mode);

// Funzione di ausilio per allocare memoria
void *malloc_chk(size_t size, char *funcName, int line);

int main()
{
   // Inizializzazione del seme 
   srand48(100);

   double *data;
   int n=5;

   // Riserviamo 5 posizioni per 10 double
   data = (double *)malloc_chk(sizeof(double)*n,__FILE__,__LINE__);

   // Valorizziamo il vettore con 5 numeri casuali distribuiti tra 0 ed 1
   printf("Valori dei numeri casuali prima di salvarli su file\n");
   for(int i=0; i<n; i++)
   {
      data[i] = drand48();
      printf("data[%d] = %lf\n",i,data[i]);
   }

   // Apriamo il file per immagazziare questi dati in formato binario
   FILE *fp;
   
   // La teoria vorrebbe che qui si usasse wb ma di fatti 
   // i dati sono binari in base a come si scrivono non a questo
   // descrittore
   fp = fopen_chk("dati.bin","w");
   fwrite(data,sizeof(double),n,fp);
   fclose(fp);

   // Liberiamo la memoria precedentemente allocata
   free(data);

   // Adeso riallochiamo la memoria 
   data = (double *)malloc_chk(sizeof(double)*n,__FILE__,__LINE__);

   // Riapriamo il file binario questa volta il lettura e leggiamo i dati
   fp = fopen_chk("dati.bin","r");
   fread(data,sizeof(double),n,fp);
   fclose(fp);
   printf("****************************\n");
   printf("Valori dei numeri casuali letti dal file binario\n");
   for(int i=0; i<n; i++)
   {
      printf("data[%d] = %lf\n",i,data[i]);
   }
   return 0;
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
/**************************
Output:
Valori dei numeri casuali prima di salvarli su file
data[0] = 0.251059
data[1] = 0.208948
data[2] = 0.940928
data[3] = 0.422546
data[4] = 0.395893
****************************
Valori dei numeri casuali letti dal file binario
data[0] = 0.251059
data[1] = 0.208948
data[2] = 0.940928
data[3] = 0.422546
data[4] = 0.395893
****************************/
