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
