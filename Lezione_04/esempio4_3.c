/*****************************
  esempio4_1.c
  Caso
  if else
  arkkimede marzo 2021
*****************************/
#include <stdio.h>

int main()
{
   float temperatura = 33.7;

   if (temperatura < 22.)
   {
      printf("La temperatura è gradevole\n");
      printf("Non fa troppo caldo o troppo freddo\n");
   }
   else
   {
      printf("La temperatura è decisamente alta\n");
      printf("Speriamo si abbassi un po'");
   }

   return 0;
}
/****************************
Output:
La temperatura è decisamente alta
Speriamo si abbassi un po'
****************************/
