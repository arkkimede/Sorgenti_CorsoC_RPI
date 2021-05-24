/**************************
** esenpio8_3.c
**
** Come calcolare la data
** arkkimede
** maggio 2021
***************************/
// Introduciamo la struttura tm e tutti i suoi campi
// struct tm {
//   int tm_sec;         /* secondi,                da 0 a 59  */
//   int tm_min;         /* minuti,                 da 0 a 59  */
//   int tm_hour;        /* ore,                    da 0 a 23  */
//   int tm_mday;        /* giorno del mese,        da 1 a 31  */
//   int tm_mon;         /* mese,                   da 0 a 11  */
//   int tm_year;        /* anno, a partire dal  1900          */
//   int tm_wday;        /* giorno della settimana, da 0 a 6   */
//   int tm_yday;        /* giorno dell'anno,       da 0 a 365 */
//   int tm_isdst;       /* eventuale ora legale               */
//   };

#include <stdio.h>
#include <time.h>

int main()
{
   time_t t;
   struct tm tm;
   
   /* L'istruzione seguente restituisce il numero di secondi trascorsi
   dalla seqeunte momento: 1970-01-01 00:00:00 +0000 (UTC) */
   t = time(NULL);
   
   /* L'istruzione localtime trasforma i secondi calcolati 
      precedentemente nei vari campi della struttura tm */
   tm = *localtime(&t);

   /* Stampiamo tutti i campi della struttura */
   printf("Anno             = %d \n",tm.tm_year + 1900); 
   printf("Mese             = %d \n",tm.tm_mon + 1); 
   printf("Giorno           = %d \n",tm.tm_mday);
   printf("Ore              = %d \n",tm.tm_hour);
   printf("Minuti           = %d \n",tm.tm_min);
   printf("Secondi          = %d \n",tm.tm_sec);
   printf("Giorno settimana = %d \n",tm.tm_wday+1);
   printf("Giorno anno      = %d \n",tm.tm_yday+1);
   printf("Ora legale       = %d \n",tm.tm_isdst);
   return 0;
}
/*********************
** Ouput fornirà i dati relativi a quando 
** questo codice girerà
** Adesso i dati sono:
** Anno             = 2021
** Mese             = 5
** Giorno           = 22
** Ore              = 22
** Minuti           = 45
** Secondi          = 24
** Giorno settimana = 7
** Giorno anno      = 142
** Ora legale       = 1
****************************/
