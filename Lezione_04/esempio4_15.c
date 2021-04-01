/*****************************
  esempio4_15.c
  do
  while 
  arkkimede aprile 2021
*****************************/
#include <stdio.h>

int main()
{
   int i = 0;

   do
   { 
      printf("i = %2d\n",i);
      i++;
   }
   while(i<=5);

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
