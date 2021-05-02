/**********************
  esempio7_3.c
Come leggere un file
arkkimede aprile 2021
***********************/
#define STR_LEN 100
#include <stdio.h>
#include <stdlib.h>
// Prototipo funzione
void *malloc_chk(size_t size, char *funcName, int line);
int main()
{
   FILE *fp;
   int returnValue;
   char *str1;
   char *str2;
   
   // Allochiamo due stringhe
   str1 = (char *)malloc_chk(sizeof(char)*STR_LEN,__FILE__,__LINE__);
   str2 = (char *)malloc_chk(sizeof(char)*STR_LEN,__FILE__,__LINE__);

   // Apertura del file in reading
   fp = fopen("dati.txt","r");
   if ( fp == NULL )
   {
      printf("Il file dati.txt non esiste\n");
      exit(1);
   }

   // Lettura prima riga
   returnValue = fscanf(fp,"%s",str1 );
   printf("returnValue = %d\n",returnValue);

   // Lettura seconda riga
   returnValue = fscanf(fp,"%s",str2 );
   printf("returnValue = %d\n",returnValue);

   // Importante chiudere il file
   fclose(fp);

   printf("Prima stringa   = %s \n",str1);
   printf("Seconda stringa = %s \n",str2);
   free(str1);
   free(str2);
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
/*******************
Output:
returnValue = 1
returnValue = 1
Prima stringa   = PrimaRiga
Seconda stringa = SecondaRiga
*******************/
