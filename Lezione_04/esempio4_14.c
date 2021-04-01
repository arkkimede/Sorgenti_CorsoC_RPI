/*****************************
  esempio4_14.c
  while(1)
  arkkimede aprile 2021
*****************************/
#include <stdio.h>

int main()
{
   int i = 0;

   while(1) // Espressione sempre vera
   { 
      if(i<=5)
      {
         printf("i = %2d\n",i);
      }
      else
      {
         break;
      }
      i++;
   }
   return 0;
}
/****************************
Output:
i =  0
i =  1
i =  2
i =  3
i =  4
i =  5
****************************/
