# Introduzione all'archivio GitHub del Corso C RaspberryItaly.com
# arkkimede marzo 2021

Ciao a tutti.
Se siete qui vuol dire che state seguendo il corso sul C pubblicato
sul Blog di RaspberryItaly.com

Uno dei miei crucci era come farvi avere i sorgenti senza doveli editare
(mia opinione è che quando si impara un linguaggio è sempre meglio 
scrivere i sorgenti piuttosto che copiarli, per prendere confidenza con
la sintassi e le parole chiave, ma può capitare che magari scrivete un
programma e compilandolo vi vengono segnalati egli errori che non riuscite
a risolvere. Potete allora ricorrere a questi file e vedere le differenze)

Confesso anche che considero questa situazione una motivazione sufficiente
per prendere confidenza con git.

Non lo useremo in tutte le sue potenzialità (se siete interessati potete
provare a cercare in internet) ma è un ottimo canale per condividere con voi
il codice.

Ogni settimana aggiornerò questo repository aggiungendo i sorgenti delle
ultime lezioni e voi potrete ottenerne una copia.

Le istruzioni per ottenere la vostra copia sono le seguenti:

1 . Installare git sulla vostra RaspberryPI:

sudo apt-get intall git

2 . Copiare sulla vostra RPI i sorgenti:
E' sufficiente eseguire il comndo

git clone https://github.com/arkkimede/Sorgenti_CorsoC_RPI.git

Otterrete la directory Sorgenti_Corso_RPI in cui saranno presenti varie
directory una per la lezione 0, una per la 1 etc.

3 . Ogni tanto, per verificare se sono state aggiunte lezioni e sorgenti
nuove, è sufficiente andare nella directory Sorgenti_CorsoC_RPI ed eseguire 
il comando 

git pull

qualora ci fossero delle novità, le trovereste nella vostra directory
Credo sia tutto
A presto
arkkimede
