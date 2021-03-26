/*******************************
    esempio2_3.c
 Codice di esempio per stampare
 float e double.
 Al fondo è riportato l'output
 del codice
 arkkimede marzo 2021
*******************************/
#include <stdio.h>

int main()
{
  float a=12.14567;
  double b=1456.234;
   
  printf("Float con virgola |%5.2f|\n",a);
  printf("Float come esponenziale |%10.3e|\n",a);

  printf("double con virgola |%8.3lf|\n",b);
  printf("double come esponenziale |%15.4le|\n",b);

  return 0;
}

/*
Float con virgola |12.15|
Float come esponenziale | 1.215e+01|
double con virgola |1456.234|
double come esponenziale |     1.4562e+03|
*/
