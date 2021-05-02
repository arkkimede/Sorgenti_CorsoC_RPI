/**********************
  esempio7_6.c
Calcolo della potenza ricevuta di 
un ponte radio.

Equazione di Friis:
Pr = Pt Gt Gr (lambda/(4*pi*R))^2

In questa relazione  dividiamo primo
e secondo membro per 0.001

Pr/0.001 = (Pt/0.001) Gt Gr (lambda/(4*pi*R))^2
calcoliamo il Log10

Pr_dBm = Pt_dBm + Gt_dB + Gr_dB + 20*Log10(lambda/(4*pi*R))

I guadagni sono già in decibel ma la potenza è in Watt.

Bisogna prima convertire la potenza in ingresso in dBm ed 
ottenuto il risultato riconvertirlo in Watt.

Per usare le funzioni matematiche, useremo l'header math.h

Nella compilazione, è necessario
fornire l'opzione relativa alla 
libreira mamematica (-lm). 
Lo script fornito nella lezione 0 
già la prevede
In questo header esiste la constante pi greco
che è M_PI
***********************/
#define VERSION      "1.0"
#define STR_LEN 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//Velocità della luce in m/s
#define C 299792458
// Prototipo funzione

// Funzione di ausilio per l'apertura dei file
FILE *fopen_chk(char *fileName, char *mode);

// Conversione da dBm a Watt
float dBm_Watt(float dBm);

// Conversione da Watt a dBm
float Watt_dBm(float watt);

int main(int argc, char *argv[])
{
   // Verifica dei parametri di ingresso
   if ( argc != 2 )
   {
      printf("Uso: %s NomeFileDiInput\n",argv[0]);
      exit(1);
   }
   FILE *fp;
   
   // Apertura del file di input
   fp = fopen_chk(argv[1],"r");

   // Vettore necessario nella lettura dei dati
   char input_buffer[STR_LEN];

   // Lettura della freqeunza
   float freq_GHz, freq_Hz;
   fgets(input_buffer, STR_LEN, fp);
   sscanf(input_buffer,"%f",&freq_GHz);
   freq_Hz = freq_GHz * 1.e9;

   // Lettura guadagno antenna tx
   float Gt_dB;
   fgets(input_buffer, STR_LEN, fp);
   sscanf(input_buffer,"%f",&Gt_dB);

   // Lettura guadagno antenna rx
   float Gr_dB;
   fgets(input_buffer, STR_LEN, fp);
   sscanf(input_buffer,"%f",&Gr_dB);

   // Lettura della potenza trasmessa
   float Pt, Pt_dBm;
   float Pr, Pr_dBm;
   fgets(input_buffer, STR_LEN, fp);
   sscanf(input_buffer,"%f",&Pt);

   // Chiusura del file di input
   fclose(fp);

   // Cornevrtire potenza in ingresso da Watt a dBm
   Pt_dBm = Watt_dBm(Pt);

   // R da definiziane problema è 10km
   float R = 10000.;

   // Calcolo della lunghezza d'onda
   float lambda;
   lambda = C/freq_Hz;

   // Calcolo della potenza ricevuta in dBm
   Pr_dBm = Pt_dBm + Gt_dB + Gr_dB + 20.*log10f(lambda/(4.*M_PI*R));
   printf("Potenza ricevuta [dBm] = %f\n",Pr_dBm);
 
   // Conversione in Watt
   Pr = dBm_Watt(Pr_dBm);
   printf("Potenza ricevuta [mW] = %f\n",Pr*1000.);

   // Apertura file di output
   fp = fopen_chk("output.dat","w");
   fprintf(fp,"# Elaborazione del programma %s versione %s del data \n",argv[0],VERSION);
   fprintf(fp,"# Lista dei dati in ingresso:\n");
   fprintf(fp,"%7.2f       Freqeunza [GHz]\n",freq_GHz);
   fprintf(fp,"%7.2f       Guadagno antenna in trasmissione [dB]\n",Gt_dB);
   fprintf(fp,"%7.2f       Guadagno antenna in ricezione [dB]\n",Gr_dB);
   fprintf(fp,"%7.2f       Potenza trasmessa [W]\n",Pt);
   fprintf(fp,"# La potenza ricevuta a 10 km di distanza è:\n");
   fprintf(fp,"%7.2f       Potenza ricevuta [dBm]\n",Pr_dBm);
   fprintf(fp,"%7.2f       Potenza ricevuta [mW]\n",Pr*1000.);
   fclose(fp);

   return 0;
}
FILE *fopen_chk(char *fileName, char *mode)
{
   FILE *fp;
   char *outr, *outa, *outw;
   outr = strstr(mode,"r");
   outa = strstr(mode,"a");
   outw = strstr(mode,"w");
 

   fp = fopen(fileName,mode);
   if((outr != NULL) || (outa != NULL))
   {
      if(fp == NULL)
      {
         fprintf(stderr,"The file %s does not exist\n",fileName);
         fprintf(stderr,"Execution aborted 1@fopen_chk\n");
         exit(7);
      }
   }
   else if( outw != NULL )
   {
      if(fp == NULL)
      {
         fprintf(stderr,"Error opening the file %s\n",fileName);
         fprintf(stderr,"Execution aborted 2@fopen_chk\n");
         exit(8);
      }
   }
   else
   {
      fprintf(stderr,"File open with an unknow method\n");
      fprintf(stderr,"Execution aborted 3@fopen_chk\n");
      exit(9);
   }
   return (fp);
}
/*******************
** P_dBm = 10Log10(P_Watt/0.001) 
** P_Watt = 0.001 * 10^(P_dBm/10);
**
*******************/
float dBm_Watt(float dBm)
{
   float watt;
   watt = 0.001 * powf(10.,dBm/10.);
   return watt;
}
float Watt_dBm(float watt)
{
   float dBm;
   dBm = 10. * log10f(watt/0.001);
   return dBm;
}
/**********************************
Output:
Nel file sono presenti 1001 linee
La media delle ascisse : 5.000000
La media delle ordinate: 13.066346
***********************************/
