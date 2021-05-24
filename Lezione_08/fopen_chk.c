/**********************************************************
** FILE *fopen_chk(char *fileName, char *mode)
** Scopo:
**   Aprire un file eventualmente controllando, se lettura,
**   se esiste e segnalando il problema
** Parametri di ingresso:
**   fileName:
**     Il nome del file da aprire
**   mode:
**     La modalità in cui il file deve essere aperto
** Parametri di uscita:
**   fp:
**     E' il puntatore al file aperto
** 
** Autore: arkkimede
** Versione: 1.0
** Maggio 2021
*********************************************************/
#include <utilities.h>

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
         printf("Il file %s not esiste\n",fileName);
         printf("Esecuzione interrotta 1@fopen_chk\n");
         exit(1);
      }
   }
   else if( outw != NULL )
   {
      if(fp == NULL)
      {
         printf("Errore aprendo il file %s\n",fileName);
         printf("Esecuzione interrotta 2@fopen_chk\n");
         exit(2);
      }
   }
   else
   {
      printf("Il file è stato aperto con un metodo sconosciuto\n");
      printf("Esecuzione interrotta 3@fopen_chk\n");
      exit(3);
   }
   return (fp);
}
