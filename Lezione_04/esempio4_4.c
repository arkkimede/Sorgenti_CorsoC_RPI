/*****************************
  esempio4_1.c
  Caso
  if 
  else if
  else if
  ...
  else
  arkkimede marzo 2021
*****************************/
#include <stdio.h>

#define FREDDO      0.
#define FREDDINO   10.
#define TEMPERATO  20.
#define CALDO      30.


int main()
{
   float temperatura = 33.7;

   if (temperatura <= FREDDO)
   {
      printf("Fa freddo\n");
   }
   else if (temperatura > FREDDO && temperatura <= FREDDINO)
   {
      printf("Fa freddino\n");
   }
   else if (temperatura > FREDDINO && temperatura <= TEMPERATO)
   {
      printf("La temeratura è moderata\n");
   }
   else if (temperatura > TEMPERATO && temperatura <= CALDO)
   {
      printf("Fa caldo\n");
   }
   else
   {
      printf("Fa caldissimo\n");
   }

   return 0;
}
/****************************
Output:
Fa caldissimo
****************************/
