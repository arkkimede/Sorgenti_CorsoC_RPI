/***********************
     esempio8_2.c
Utilizzo di
typedef e struct
arkkimede
maggio 2021
***********************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SQ( x ) ( (x) * (x) )

typedef struct 
{
   float x;
   float y;
   float z;
}Punto3d;

typedef struct
{
   Punto3d a;
   Punto3d b;
   float   lunghezza;
}Segmento;

int main()
{
   Punto3d p1, p2;
   Punto3d p3, p4;
   Segmento s1, s2;

   p1.x = 2.3;
   p1.y = 1.5;
   p1.z = 0.6;

   p2.x = 3.5;
   p2.y = 4.2;
   p2.z = -3.5;

   p3.x = -0.6;
   p3.y = -1.9;
   p3.z = 6.2;

   p4.x = 0.01;
   p4.y = 4.7;
   p4.z = -1.2;

   s1.a = p1;
   s1.b = p2;

   s2.a = p3;
   s2.b = p4;

   s1.lunghezza = sqrtf( SQ(s1.a.x - s1.b.x) + SQ(s1.a.y - s1.b.y) +
                         SQ(s1.a.z - s1.b.z) );

   s2.lunghezza = sqrtf( SQ(s2.a.x - s2.b.x) + SQ(s2.a.y - s2.b.y) +
                         SQ(s2.a.z - s2.b.z) );

   printf("Lunghezza di s1 = %lf \n",s1.lunghezza);
   printf("Lunghezza di s2 = %lf \n",s2.lunghezza);

   return 0;
}
/**************************
Output:
Lunghezza di s1 = 5.053711
Lunghezza di s2 = 9.934389
**************************/
