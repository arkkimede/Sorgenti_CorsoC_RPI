/**********************
  esempio7_2.c
Come aprire un file
arkkimede aprile 2021
***********************/
#include <stdio.h>
int main()
{
   FILE *fp;
   int returnValue;
   
   // Apertura del file in writing
   fp = fopen("dati.txt","w");

   // Scrittura prima riga
   returnValue = fprintf(fp, "PrimaRiga\n");
   printf("returnValue = %d\n",returnValue);

   // Scrittura seconda riga
   returnValue = fprintf(fp, "SecondaRiga\n");
   printf("returnValue = %d\n",returnValue);

   // Importante chiudere il file
   fclose(fp);

   return 0;
}
/*******************
Output:
returnValue = 11
returnValue = 13
*******************/
