/***********************************
  Soluzione esercizio proposto:
  Allocare un array bidimensionale 
  in una subroutine e restituirlo
  tramite parametri di ingresso
  arkkimede aprile 2021
***********************************/

#include <stdio.h>
#include <stdlib.h>
void *malloc_chk(size_t size, char *funcName, int line);
void MakeArray(int ***m, int r, int c);
int main(int argc, char *argv[])
{
   if ( argc != 3)
   {
      printf("uso: %s righeArrayDaAllocare colonneArrayDaAllocare\n",argv[0]);
      exit(1);
   }

   int righe, colonne;
   int **matrice;
   sscanf(argv[1],"%d",&righe);
   sscanf(argv[2],"%d",&colonne);

   MakeArray(&matrice, righe, colonne);
   for(int i=0; i<righe; i++)
      for(int j=0; j<colonne; j++)
         printf("i = %2d   j = %2d   matrice[i][j] = %2d\n",i,j,matrice[i][j]);

}

void MakeArray(int ***m, int r, int c)
{
   int **tmpMatrice;

   tmpMatrice = (int **)malloc_chk(sizeof(int *)*r, __FILE__, __LINE__);
   for(int i=0; i<r; i++)
   {
      tmpMatrice[i] = (int *)malloc_chk(sizeof(int )*c, __FILE__, __LINE__);
   }
   for(int i=0; i<r; i++)
      for(int j=0; j<c; j++)
         tmpMatrice[i][j] = i+j;

   *m = tmpMatrice;
   return;
}


void *malloc_chk(size_t size, char *funcName, int line)
{
   void *ptr;
   ptr = malloc(size);
   if(ptr == NULL)
   {
      printf("Errore nell'allocazione di memoria.\n");
      printf("Quantità di meoria richiesta: %zu\n",size);
      printf("Sorgente dove è accaduto l'errore %s\n",funcName);
      printf("Lina del codice sorgente ove è accaduto l'errore: %d\n",line);
      printf("Esecuzione interrotta\n");
      exit(11);
   }
   else
     return ptr;
}
