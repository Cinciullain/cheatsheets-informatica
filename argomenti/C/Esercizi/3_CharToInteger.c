/*
 * Esercizio: Convertire dei caratteri in intero
 */

#include <stdio.h>

int main() 
{
    int input;
    char stringa[3];
    int numero = 0, i = 0;

    /*
     * Ho deciso di avere una stringa di 3 caratteri.
     * Uso un while per creare la stringa prendedo un carattere alla volta.
     */
    while ((input = getchar()) != '\n' && input != EOF)
    {
        stringa[i] = input;
        i++;
    }

    /*
     * Filtro il valore del char a int e li sommo, seguendo sempre i valori ASCII
     */
    for(i = 0; i < 3; i++)
    {
        numero += stringa[i] - '0';
        if(i < 2)
        {
            numero = numero * 10;
        }
    }

    printf("%d", numero);
    return 0;
}
