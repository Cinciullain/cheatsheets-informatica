/*
 * Trova e visualizza la riga piu' lunga tra quelle inserite, utilizzando gli array
 */

#include <stdio.h>
#define MAXLINE 1001

int getRiga(char[], int);
void copy(char[], char[]);

int main()
{
    int lunghezzaCorrente; //Lunghezza riga corrente
    int lunghezzaMassima; //Lunghhezza massima riscontrata
    char rigaCorrente[MAXLINE]; //Riga corrente
    char rigaMaggiore[MAXLINE]; //Contiene la riga piu' lunga

    lunghezzaMassima = 0;
    do
    {
        printf("Inserisci riga, invio per terminare:");
        lunghezzaCorrente = getRiga(rigaCorrente, MAXLINE);

        if(lunghezzaCorrente > lunghezzaMassima)
        {
            lunghezzaMassima = lunghezzaCorrente;
            copy(rigaMaggiore, rigaCorrente);
        }
    }while(lunghezzaCorrente > 2);

    if(lunghezzaMassima > 0)
    {
        int i = 0;
        while(rigaMaggiore[i + 1] != '\0')
        {
            printf("%c", rigaMaggiore[i]);
            i++;
        }
    }
    return 0;
}

int getRiga(char *stringa, int lim){
    int carattere, i;

    for(i = 0; i < lim - 1 && (carattere = getchar()) != EOF && carattere != '\n'; i++)
    {
        stringa[i] = carattere;
    }

    if(carattere == '\n')
    {
        stringa[i] = carattere;
        i++;
    }

    stringa[i] = '\0';
    return i;
}

void copy(char *to, char *from)
{
    int i = 0;
    while((to[i] = from[i]) != '\n')
    {
        i++;
    }
}
