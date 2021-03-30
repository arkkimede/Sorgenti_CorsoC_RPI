/*****************************
  esempio4_7.c
  Ruolo del break nello switch  
  arkkimede marzo 2021
*****************************/
#include <stdio.h>

int main()
{
   char operatore = '-';

   switch(operatore)
   {
      case '+':
      case '*':
         printf("Operazione commutativa\n");
         break;
      case '-':
      case '/':
         printf("Operazione non commutativa\n");
   }


   return 0;
}
/****************************
Output:
Operazione non commutativa
****************************/
