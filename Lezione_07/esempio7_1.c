/**********************
  esempio7_1.c
Come aprire un file
arkkimede aprile 2021
***********************/
#include <stdio.h>
int main()
{
   FILE *fp;

   fp = fopen("dati.txt","w");
   fclose(fp);

   return 0;
}
