/*****************************
  esempio4_12.c
  for e break 
  arkkimede marzo 2021
*****************************/
#include <stdio.h>
#include <unistd.h>

#define ITER_STOP 10

int main()
{
   for(int i=0; i<=1000; i++)
   { 
      if(i==ITER_STOP)
      {
         break;
      }
      else
      {
         printf("%2d\r",i);
         sleep(1);
         fflush(stdout);
      }
   }
   return 0;
}
/****************************
Output:
 9
****************************/
