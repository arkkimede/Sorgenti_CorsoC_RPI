/******************************
   esempio3_3.c
 In questo codice vedremo gli
 operatori unari all'opera
 arkkimede marzo 2021
******************************/
#include <stdio.h>

int main()
{
   int i;

   i = 10;
   printf("i prima della valutazione espressione = %d\n",i);
   printf("Espressione (i++)*5 : %d \n",(i++)*5);
   printf("i dopo aver valutato l'espressione = %d\n",i);
   printf("-----------------\n");
   i = 10;
   printf("i prima della valutazione dell'espressione = %d\n",i);
   printf("Espressione (++i)*5 : %d \n",(++i)*5);
   printf("i dopo aver valutato l'espressione = %d\n",i);

   return 0;
}
/*
Output:
i prima della valutazione espressione = 10
Espressione (i++)*5 : 50
i dopo aver valutato l'espressione = 11
-----------------
i prima della valutazione dell'espressione = 10
Espressione (++i)*5 : 55
i dopo aver valutato l'espressione = 11
*/
