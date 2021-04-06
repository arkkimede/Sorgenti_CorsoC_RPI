/****************************
  esempio5_5.c
  le stringhe 
  arkkimede aprile 2021
****************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Header per le stringhe
#define STR_LEN 100
int main()
{
   
   /*****************
    Primo metodo per valorizzare
    una stringa: in sede di dichiarazione
    ****************/
   char strValorizzataInDichiarazione[]="Stringa valorizzata";

   char strStatica[5];
   char *strDinam_1;
   char *strDinam_2;
   
   // Formato di uscita delle stringe %s
   printf("|%s| di lunghezza %d \n", strValorizzataInDichiarazione, strlen(strValorizzataInDichiarazione));

   /*******************
    Secondo metodo per valorizzare 
    una sringa, carattere per carattere
    ******************/
   strStatica[0] = 'C';
   strStatica[1] = 'i';
   strStatica[2] = 'a';
   strStatica[3] = 'o';
   strStatica[4] = '\0';
   /*******************
    La srtringa è lunga
    4 caratteri ma bisogna
    aggiungerne uno per
    il terminatore di stringhe
   *******************/

   printf("|%s| di lunghezza %d \n",strStatica, strlen(strStatica));

   /*******************
    Terzo metodo per valorizzare una 
    stringa, usare sprintf
    *******************/
   strDinam_1 = (char *)malloc(sizeof(char)*STR_LEN);
   if (strDinam_1 == NULL)
   {
      printf("Errore di memoria allocando prima stringa dinamica");
      printf("Esecuzione interrotta\n");
      return 1;
   }
   sprintf(strDinam_1,"Stringa valorizzata con sprintf");
   printf("|%s| di lunghezza %d\n",strDinam_1, strlen(strDinam_1));

   /*******************
    Quarto metodo mediante 
    strcpy
    *******************/
   strDinam_2 = (char *)malloc(sizeof(char)*STR_LEN);
   if (strDinam_2 == NULL)
   {
      printf("Errore di memoria allocando seconda stringa dinamica");
      printf("Esecuzione interrotta\n");
      return 2;
   }
   
   strcpy(strDinam_2,"Utilizzo libreria C");
   printf("|%s| di lunghezza %d\n",strDinam_2, strlen(strDinam_2));

   free(strDinam_1);
   free(strDinam_2);

   return 0;
}
/**********************
Output:
|Stringa valorizzata| di lunghezza 19
|Ciao| di lunghezza 4
|Stringa valorizzata con sprintf| di lunghezza 31
|Utilizzo libreria C| di lunghezza 19
***************************/
