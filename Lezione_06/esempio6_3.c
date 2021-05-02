/***********************
   esempio6_3.c
 scanf
 arkkimede aprile 2021
************************/
#define STR_LEN 50
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   float g;
   char *str;

   str = (char *)malloc(sizeof(char)*STR_LEN);
   if ( str == NULL )
   {
      printf("Problemi di memoria\n");
      exit(1);
   }
   printf("Introduci un intero: ");
   scanf("%d",&a);
   printf("Introduci un float: ");
   scanf("%f",&g);
   printf("Introduci una stringa: ");
   scanf("%s",str);
   printf("\n\n");
   printf("Hai introdotto l'intero: %d\n",a);
   printf("Hai introdotto il float: %f\n",g);
   printf("Hai introdotto la stringa: %s\n",str);
   printf("\n\n");
   for ( int i = 0; i < STR_LEN; i++ )
      str[i] = '\0';

   sprintf(str,"12 78.4 1289.5");
   sscanf(str,"%d %*f %f",&a,&g); // %*f consente di saltare uno degli input
   printf("Hai letto dalla stringa l'intero %d ed il float %f\n",a,g);

   free(str);
   return 0;
}
/*************************
Output:
Introduci un intero: 10
Introduci un float: 23.15
Introduci una stringa: Milano


Hai introdotto l'intero: 10
Hai introdotto il float: 23.150000
Hai introdotto la stringa: Milano


Hai letto dalla stringa l'intero 12 ed il float 1289.500000
*************************/
