#include <stdio.h>
#include <stdlib.h>
/*********************************
**             *
**           i |
**             *
**            j \
**               *---*
**                 k
**********************************/

int main()
{
   int ***cubo;
   int contatore=0;
   int i,j,k;

   cubo = (int ***) malloc (sizeof(int **) * 3);
   for(i=0; i<3; i++)
   {
     cubo[i] = (int **) malloc (sizeof(int *) * 3);
     for(j=0; j<3; j++)
       cubo[i][j] = (int *) malloc (sizeof(int) * 3);
   }
   
   for (i=0; i<3; i++)
      for (j=0; j<3; j++)
         for (k=0; k<3; k++)
             cubo[i][j][k] = contatore++;

   for(i=0; i<3; i++)
   {
      printf("i = %d\n",i);
      for(j=0; j<3; j++)
      {
         for (k=0; k<3; k++)
         {
            printf("%3d ",cubo[i][j][k]);
         }
         printf("\n");
      }
   }
   for(j=0; j<3; j++)
   {
      printf("j = %d\n",j);
      for(i=0; i<3; i++)
      {
         for (k=0; k<3; k++)
         {
            printf("%3d ",cubo[i][j][k]);
         }
         printf("\n");
      }
   }
   for(k=0; k<3; k++)
   {
      printf("k = %d\n",k);
      for(i=0; i<3; i++)
      {
         for (j=0; j<3; j++)
         {
            printf("%3d ",cubo[i][j][k]);
         }
         printf("\n");
      }
   }

   cubo = (int ***) malloc (sizeof(int **) * 3);
   for(i=0; i<3; i++)
   {
     cubo[i] = (int **) malloc (sizeof(int *) * 3);
     for(j=0; j<3; j++)
       cubo[i][j] = (int *) malloc (sizeof(int) * 3);
   }

   for(i=0; i<3; i++)
   {
      for(j=0; j<3; j++)
      {
         free(cubo[i][j]);
      }
      free(cubo[i]);
   }
   free(cubo);



   return 0;
}
/*************************
Output:
i = 0
  0   1   2
  3   4   5
  6   7   8
i = 1
  9  10  11
 12  13  14
 15  16  17
i = 2
 18  19  20
 21  22  23
 24  25  26
j = 0
  0   1   2
  9  10  11
 18  19  20
j = 1
  3   4   5
 12  13  14
 21  22  23
j = 2
  6   7   8
 15  16  17
 24  25  26
k = 0
  0   3   6
  9  12  15
 18  21  24
k = 1
  1   4   7
 10  13  16
 19  22  25
k = 2
  2   5   8
 11  14  17
 20  23  26
***********************/
