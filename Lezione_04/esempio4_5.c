/*****************************
  esempio4_5.c
  Definizione di true e false
  arkkimede marzo 2021
*****************************/
#include <stdio.h>

int main()
{

   if (0)
      printf("0 è vero\n");
   else
      printf("0 è faso\n");
   
   if (1)
      printf("1 è vero\n");
   else
      printf("1 è faso\n");

   if (-1)
      printf("-1 è vero\n");
   else
      printf("-1 è faso\n");

   if(12.56)
      printf("12.56 è vero\n");
   else
      printf("12.56 è falso\n");

   if(-448.136)
      printf("-448.136 è vero\n");
   else
      printf("448.136 è falso\n");

   return 0;
}
/****************************
Output:
0 è faso
1 è vero
-1 è vero
12.56 è vero
-448.136 è vero
****************************/
