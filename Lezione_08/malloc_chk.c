/**********************************************************
** malloc_chk(size_t size, char *funcName, int line)
** Scopo:
**   Riservare un blocco di memoria, controllando
**   se la funzione malloc restituisce un puntatore
**   NULL. Qualora tale evento accadesse, viene segnalato
**   il sorgente e la riga in cui il problema è accaduto.
** Parametri di ingresso:
**   size:
**     Rappresenta la quantità di memoria richiesta
**   funcName:
**     E' il nome del sorgente in cui è stata invocata
**     la funzione
**   line:
**     E' la linea in cui è accaduto l'errore
** Parametri di uscita:
**   ptr:
**     E' un puntatore void che punta al blocco richiesto
**     e che dovrà essere "castato" al tipo necessario
**
** Autore: arkkimede
** Versione: 1.0
** Maggio 2021
*********************************************************/
#include <utilities.h>

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
      exit(1);
   }
   else
     return ptr;
}
