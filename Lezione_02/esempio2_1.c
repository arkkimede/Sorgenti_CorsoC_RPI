/******************************************
  esempio2_1.c
  In questo codice proveremo a stampare
  tutti i tipi di interi che abbiamo visto
  arkkimede marzo 2021
*******************************************/


#include <stdio.h> 

int main() 
{ 
  /* dichiarazione e valorizzazione delle variabili
     Si noti come sia possibile dichiarare e valorizzare
	 una variabile nello stesso tempo */
  char c = 65;
  short s = -126;
  int i = 12870;
  long long int q = -123456789; 
  unsigned char uc = 67;
  unsigned short us = 240;
  unsigned int ui = 45670;
  unsigned long long int uq = 987564321;

  /* Stampa di un carattere come numero */
  printf("carattere formato numerico: %d \n",c); 

  /* Stampa del corrispondente valore del codice ascii */ 
  printf("carattere (codie ascii): %c \n",c);

  /* Stampa di uno short */
  printf("short: %d \n",s);

  /* Stampa di uno intero */ 
  printf("intero: %d \n",i);

  /* Stampa di un long long int */
  printf("long long int: %lld \n",q); 

  /* Stampa di un carattere senza segno come numero */
  printf("carattere senza segno formato numerico: %u \n",uc); 

  /* Stampa del corrispondente valore del codice ascii */ 
  printf("carattere senza segno (codie ascii): %c \n",uc);

  /* Stampa di uno short senza segno */
  printf("shorti senza segno: %u \n",us);

  /* Stampa di uno intero senza segno */ 
  printf("intero senza segno: %u \n",ui);

  /* Stampa di un long long int senza segno */
  printf("long long int senza segno: %llu \n",uq); 

  return 0;
}
