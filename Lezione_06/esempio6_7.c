/***********************
   esempio6_7.c
 ingressi di main
 arkkimede aprile 2021
************************/

#include <stdio.h>
int main(int argc, char *argv[])
{
   printf("argc = %d\n",argc);
   for(int i=0; i<argc; i++)
     printf("argv[%d] = %s\n",i,argv[i]);

}
/*************************
Output eseguendo ./esempio6_7 primo secondo terzo
argc = 4
argv[0] = ./esempio6_7
argv[1] = primo
argv[2] = secondo
argv[3] = terzo
*************************/
