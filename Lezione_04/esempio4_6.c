/*****************************
  esempio4_6.c
  L'struzione switch  
  arkkimede marzo 2021
*****************************/
#include <stdio.h>

int main()
{
   char operatore = '+';

   switch(operatore)
   {
      case '+':
         printf("Selezionata l'addizione\n");
         break;
      case '-':
         printf("Selezionata la sottrazione\n");
         break;
      case '*':
         printf("Selezionata la moltiplicazione\n");
         break;
      case '/':
         printf("Selezionata la divisione\n");
         break;
      default:
         printf("Operazione non conosiuta\n");
   }


   return 0;
}
/****************************
Output:
Selezionata l'addizione
****************************/
