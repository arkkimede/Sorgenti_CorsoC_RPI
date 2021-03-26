/************************
   esempio3_2.c
 Esempio di uso della
 funzione cast applicata
 all'uscita di una 
 operazione
 arkkimede marzo 2021
************************/
#include <stdio.h>

int main()
{
   int i = 3, j=4;
   float f=4.2;
   double d = 12.5, e = 15.7;
   
   printf("+ tra int => in double: %d + %d = %lf\n",i,j,(double)(i+j));
   printf("* tra int e float => in int: %d * %f = %d\n",i,f,(int)(i*f));
   printf("+ tra double => in float: %lf + %lf = %f\n",d,e,(float)(d+e));

   return 0;
}
/* Output
+ tra int => in double: 3 + 4 = 7.000000
* tra int e float => in int: 3 * 4.200000 = 12
+ tra double => in float: 12.500000 + 15.700000 = 28.200001
*/
