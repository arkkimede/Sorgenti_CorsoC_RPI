/****************************
  esempio5_1.c
  vettori statici
  arkkimede aprile 2021
****************************/
#include <stdio.h>
int main()
{
   int vettore[4];

   /*************************
    In vettore, per esempio
    possiamo immagazzinare
    i numeri da 0 a 3
   *************************/
   for(int i=0; i<4; i++)
   {
      vettore[i] = i;
   }
   
   /*************************
    Come curiosità,
    esaminiamo anche gli indirizzi
    degli elementi di vettore[i] 
   *************************/
   printf("Indirizzo espresso in decimale\n");
   for(int i=0; i<4; i++)
   {
      printf("Vettore[%d]: indirizzo:%d  contenuto:%d\n", i,&vettore[i], vettore[i]);
   }
   printf("********\n\n");
   /*************************
    Indirizzi espressi in esaedcimale
    usando il formato dei puntatori %p    
   *************************/
   printf("Indirizzo espresso in esadecimale\n");
   for(int i=0; i<4; i++)
   {
      printf("Vettore[%d]: indirizzo:%p  contenuto:%d\n", i,&vettore[i], vettore[i]);
   }

   return 0;
}
/**********************
Output 1:
Indirizzo espresso in decimale
Vettore[0]: indirizzo:2125460660  contenuto:0
Vettore[1]: indirizzo:2125460664  contenuto:1
Vettore[2]: indirizzo:2125460668  contenuto:2
Vettore[3]: indirizzo:2125460672  contenuto:3
********

Indirizzo espresso in esadecimale
Vettore[0]: indirizzo:0x7eaff4b4  contenuto:0
Vettore[1]: indirizzo:0x7eaff4b8  contenuto:1
Vettore[2]: indirizzo:0x7eaff4bc  contenuto:2
Vettore[3]: indirizzo:0x7eaff4c0  contenuto:3

Output 2:
Indirizzo espresso in decimale
Vettore[0]: indirizzo:2127197364  contenuto:0
Vettore[1]: indirizzo:2127197368  contenuto:1
Vettore[2]: indirizzo:2127197372  contenuto:2
Vettore[3]: indirizzo:2127197376  contenuto:3
********

Indirizzo espresso in esadecimale
Vettore[0]: indirizzo:0x7eca74b4  contenuto:0
Vettore[1]: indirizzo:0x7eca74b8  contenuto:1
Vettore[2]: indirizzo:0x7eca74bc  contenuto:2
Vettore[3]: indirizzo:0x7eca74c0  contenuto:3
*************************/

