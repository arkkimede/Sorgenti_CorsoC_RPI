/***********************
     esempio8_1.c
Utilizzo delle struct
arkkimede
maggio 2021
***********************/
#include <stdio.h>
#include <stdlib.h>
#define STR_LEN 512
struct Alunno
{
   char  nome[STR_LEN];
   char  cognome[STR_LEN];
   int   eta;
   int   classe;  // 1,2,3,4 e 5 
   float mediaScolastica;
};
int main()
{
   struct Alunno uno,due,tre;

   sprintf(uno.nome,"Giovanni");
   sprintf(uno.cognome,"Verdi");
   uno.eta = 8;
   uno.classe = 2;
   uno.mediaScolastica = 7.35;

   sprintf(due.nome,"Mario");
   sprintf(due.cognome,"Rossi");
   due.eta = 9;
   due.classe = 3;
   due.mediaScolastica = 8.35;

   sprintf(tre.nome,"Angelo");
   sprintf(tre.cognome,"Bianchi");
   tre.eta = 10;
   tre.classe = 4;
   tre.mediaScolastica = 6.12;

   printf("Le caratteristiche dello studente uno sono:\n");
   printf("Nome: %s\n",uno.nome);
   printf("Cognome: %s\n",uno.cognome);
   printf("Età: %d\n",uno.eta);
   printf("Classe: %d\n",uno.classe);
   printf("Media: %.2f\n",uno.mediaScolastica);
   printf("=======================\n\n");

   printf("Le caratteristiche dello studente due sono:\n");
   printf("Nome: %s\n",due.nome);
   printf("Cognome: %s\n",due.cognome);
   printf("Età: %d\n",due.eta);
   printf("Classe: %d\n",due.classe);
   printf("Media: %.2f\n",due.mediaScolastica);
   printf("=======================\n\n");

   printf("Le caratteristiche dello studente tre sono:\n");
   printf("Nome: %s\n",tre.nome);
   printf("Cognome: %s\n",tre.cognome);
   printf("Età: %d\n",tre.eta);
   printf("Classe: %d\n",tre.classe);
   printf("Media: %.2f\n",tre.mediaScolastica);
   printf("=======================\n\n");

   return 0;
}
/**************************
Output:
Le caratteristiche dello studente uno sono:
Nome: Giovanni
Cognome: Verdi
Età: 8
Classe: 2
Media: 7.35
=======================

Le caratteristiche dello studente due sono:
Nome: Mario
Cognome: Rossi
Età: 9
Classe: 3
Media: 8.35
=======================

Le caratteristiche dello studente tre sono:
Nome: Angelo
Cognome: Bianchi
Età: 10
Classe: 4
Media: 6.12
=======================

**************************/
