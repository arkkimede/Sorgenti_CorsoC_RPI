/****************°°°°°°°°°°*************
  esempio4_2.c
  Caso di blocco racchioso tra parentesi 
  o solo indentato
  arkkimede marzo 2021
****************************************/
#include <stdio.h>

int main()
{
   int i=10;

   if (i != 10)
      printf("Istruzione 1: La variabile i è diversa a 10\n");
      printf("Istruzione 2\n");
      printf("Istruzione 3\n");
      printf("Istruzione 4\n\n\n");

   if (i == 10)
   {
      printf("Istruzione a: La variabile i è uguale a 10\n");
      printf("Istruzione b\n");
      printf("Istruzione c\n");
      printf("Istruzione d\n");
   }

   return 0;
}
/****************************
Output:
Istruzione 2
Istruzione 3
Istruzione 4


Istruzione a: La variabile i è uguale a 10
Istruzione b
Istruzione c
Istruzione d
****************************/
