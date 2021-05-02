/***********************
   esempio6_8.c
 Verifica parametri di ingresso
 arkkimede aprile 2021
************************/

#include <stdio.h>
#include <stdlib.h>
void uso(char argv[0]);

int main(int argc, char *argv[])
{
   if(argc != 4)
     uso(argv[0]);


   float m, q, xP, yP;
   sscanf(argv[1],"%f",&m);
   sscanf(argv[2],"%f",&q);
   sscanf(argv[3],"%f",&xP);

   yP = m*xP + q;
   printf("yP = %f\n",yP);
}
void uso(char *nomeEseguibile)
{
   printf("Uso: %s coeffiienteAngolare termineNoto xDelPunto\n",nomeEseguibile);
   exit(1);
}
/*************************
Output 
./esempio6_8
Uso: ./esempio6_8 coeffiienteAngolare termineNoto xDelPunto

./esempio6_8 1. 3.
Uso: ./esempio6_8 coeffiienteAngolare termineNoto xDelPunto

./esempio6_8 1. 3. 2.
yP = 5.000000
*************************/
