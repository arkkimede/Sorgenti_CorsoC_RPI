/***********************
   esempio3_1.c
 Esempio di uso degli 
 operatori algebrici
 arkkimede marzo 2021
***********************/

#include <stdio.h>

int main()
{
   int i = 3, j=4;
   float f=4.2, g=9.1;
   double d = 12.5, e = 15.7;
   
   printf("Somma tra due interi: %d + %d = %d\n",i,j,i+j);
   // Si noti la divisione tra 2 interi che produce un intero
   printf("Divisione tra interi: %d / %d = %d\n",j,i,j/i);
   printf("Modulo: %d %% %d = %d\n",j,i,j%i);
   // Notate una notazione alternativa per il formato sui float
   // Si richiede solo 2 cifre dopo la virgola
   printf("Moltiplicazione tra intero e float: %d * %f = %.2f\n",i,f,i*f);
   printf("Divisione tra float: %.2f / %.2f = %.2f\n",f,g,f/g);
   printf("Sottrazione tra intero e double: %d - %lf  = %.2lf\n",i,g,i-g);
   printf("Moltiplicazione tra float e double: %f * %lf = %lf\n",f,e,f*e);
   printf("Somma tra double: %lf + %lf = %lf\n",d,e,d+e);

   return 0;
}

/* Output
Somma tra due interi: 3 + 4 = 7
Divisione tra interi: 4 / 3 = 1
Modulo: 4 % 3 = 1
Moltiplicazione tra intero e float: 3 * 4.200000 = 12.60
Divisione tra float: 4.20 / 9.10 = 0.46
Sottrazione tra intero e double: 3 - 9.100000  = -6.10
Moltiplicazione tra float e double: 4.200000 * 15.700000 = 65.939997
Somma tra double: 12.500000 + 15.700000 = 28.200000
*/
