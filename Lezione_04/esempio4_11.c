/*****************************
  esempio4_11.c
  for e continue 
  arkkimede marzo 2021
*****************************/
#include <stdio.h>

int main()
{
   for(int i=0; i<=10; i++)
   { 
      if(i==3 || i==5)
      {
         continue;
      }
      else
      {
         printf("%2d\n",i);
      }
   }
   return 0;
}
/****************************
Output:
 0
 1
 2
 4
 6
 7
 8
 9
10
****************************/
