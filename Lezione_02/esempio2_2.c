/**********************************
 Codice che stampa i limiti 
 per tutti i tipi interi, con segno
 e senza segno
 arkkimede marzo 2021
 **********************************/

#include <limits.h>
#include <stdio.h>

int main()
{
   printf("Numero di bit presenti nella variabile char: %d\n",CHAR_BIT);
   printf("Valore minimo per una variabile char (o signed char): %d\n",SCHAR_MIN);
   printf("Valore massimo per una variabile char (o signed char): %d\n",SCHAR_MAX);
   printf("Valore massimo per una variabile unsigned char: %d\n",UCHAR_MAX);
   printf("Valore minimo per una variabile short: %d\n",SHRT_MIN);
   printf("Valore massimo per una variabile short: %d\n",SHRT_MAX);
   printf("Valore massimo per una variabile unsigned short: %d\n",USHRT_MAX);
   printf("Valore minino per un int: %d \n",INT_MIN);
   printf("Valore massimo per un int: %d \n",INT_MAX);
   printf("Valore massimo per un unsigned int: %u \n",UINT_MAX);
   printf("Valore minimo per un long long int: %lld \n",LLONG_MIN);
   printf("Valore massimo per un long long int: %lld \n",LLONG_MAX);
   printf("Valore massimo per un unsigned long long int: %llu \n",ULLONG_MAX);

   return 0;
}
