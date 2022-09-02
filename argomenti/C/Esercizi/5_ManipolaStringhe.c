/*
 * Manipolazione di stringhe con vettori e puntatori: comparazione, copia, lunghezza
 */

#include <stdio.h>
#define LUNGHEZZA 11

/*
 *
 */
int strcmp(char *s, char *t);
int strcmpPtr(char *s, char *t);

void strcpy(char *s, char *t);
void strcpyPtr1(char *s, char *t);
void strcpyPtr2(char *s, char *t);

int strlen(char *s);
int strlenPtr(char *s);

int main()
{
    char stringa1[LUNGHEZZA];
    char stringa2[LUNGHEZZA];
    printf("Inserisci stringa 1 di %d caratteri: \n", LUNGHEZZA - 1);
    scanf("%s", stringa1);
    printf("Inserisci stringa 2 di %d caratteri: \n", LUNGHEZZA - 1);
    scanf("%s", stringa2);

    printf("\n");

    //Compare
    printf("Compare con array: %d\n", strcmp(stringa1, stringa2));
    printf("Compare con puntatori: %d\n", strcmpPtr(stringa1, stringa2));

    /*
     * Copy: Uso quello con i puntatori, se si vuole usare quello con array, togliere il commento.
     *
     * strcpy(stringa1, stringa2);
     * printf("Copy con array: %s\n", stringa1);
     *
     * strcpyPtr1(stringa1, stringa2);
     * printf("Copy ver 1 con puntatory: %s\n", stringa1);
     *
     */
    strcpyPtr2(stringa1, stringa2);
    printf("Copy ver 2 con puntatori: %s\n", stringa1);

    //Length
    printf("Lunghezza con array: %d, %d\n", strlen(stringa1), strlen(stringa2));
    printf("Lunghezza con puntatori: %d, %d\n", strlenPtr(stringa1), strlen(stringa2));


    return 0;
}

//Compara s con t, restituisce < 0 se s < t, 0 se s == t, > 0 se s > t
int strcmp(char *s, char *t)
{
    int i;
    for(i = 0; s[i] == t[i]; i++)
    {
        if(s[i] == '\0')
            return 0;
    }

    return s[i] - t[i];
}

//Versione strcmp con i puntatori
int strcmpPtr(char *s, char *t)
{
    for(; *s == *t; s++, t++)
    {
        if(*s == '\0')
        {
            return 0;
        }

    }

    return *s - *t;
}

//Copia t in s, versione array
void strcpy(char *s, char *t)
{
    int i = 0;
    while((s[i] = t[i]) != '\0')
    {
        i++;
    }
}

//Versione 1 strcpy con i puntatori
void strcpyPtr1(char *s, char *t)
{
    while((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}

//Versione 2 strcpy con i puntatori
void strcpyPtr2(char *s, char *t)
{
    while((*s++ = *t++) != '\0')
    {
        ;
    }
}

//Restituisce lunghezza stringa
int strlen(char *s)
{
    if(s == NULL)
    {
        return 0;
    }

    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }

    return i;
}

//Restituisce lunghezza stringa ma con puntatori
int strlenPtr(char *s)
{
    char *p = s;
    while(*p != '\0')
    {
        p++;
    }

    return p - s;
}
