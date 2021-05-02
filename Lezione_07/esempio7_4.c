/**********************
  esempio7_4.c
Aprire un file in append
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
   int num1 = 10;
   int num2 = 20;

   // Apertura del file in reading
   fp = fopen("dati.txt","a");
   if ( fp == NULL )
   {
      printf("Il file dati.txt non esiste\n");
      exit(1);
   }

   // Scrittura primo numero
   returnValue = fprintf(fp,"%d\n",num1 );
   printf("returnValue = %d\n",returnValue);

   // Scrittura secondo numero
   returnValue = fprintf(fp,"%d\n",num2 );
   printf("returnValue = %d\n",returnValue);

   // Importante chiudere il file
   fclose(fp);

   return 0;
}
/*******************
output:
returnValue = 2
returnValue = 2

cat dati.txt
PrimaRiga
SecondaRiga
10
20
*******************/
