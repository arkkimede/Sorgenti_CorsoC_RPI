/**********************
* macro.c
* arkkimede aprile 2021
**********************/
#include <stdio.h>
int main()
{
   /************************
   La prima macro ci indica 
   la linea di codice 
   in cui ci troviamo
   ************************/
   printf("Ci troviamo alla linea di codice: %d\n",__LINE__);

   /************************
   La seconda macro ci indica 
   il nome del file in cui
   ci troviamo
   ************************/
   printf("Ci troviamo nel sorgente di nome: %s\n",__FILE__);

   return 0;
}
/**********************
Output:
Ci troviamo alla linea di codice: 13
Ci troviamo nel sorgente di nome: macro.c
***********************/
