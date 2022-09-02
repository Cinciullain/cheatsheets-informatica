/*
 * Esercizio: Invertire una frase in ingresso inserita dall'utente
 */

#include <stdio.h>

/*
 * Creo il prototipo della funzione che ho intenzione di utilizzare,
 * rendendo così il codice più comprensibile.
 */
void invertiSeq(void);

/*
 * Nel main ci sono solo 3 righe:
 *  - printf(): La utilizzo per mostrare su schermo del testo
 *  - invertiSeq(): Chiamo la mia funzione che svolge il problema dell'esercizio
 *  - return 0: Indica il buon termine della funzione main(), che ha come return type un int.
 */
int main()
{
    printf("Inserisci la sequenza da invertire: ");
    invertiSeq();
    return 0;
}

/*
 * Utilizzo un intero per rappresentare i caratteri, visto che ogni carattere ha un valore intero
 * secondo la tabella ASCII (https://www.asciitable.com/).
 * Prendo tutti caratteri, un carattere alla volta, utilizzando getchar().
 * Se il carattere preso non risulta un new line, il programma va avanti, salva il carattere preso
 * nello stack, e prende quello successivo, finchè non arriva al carattere new line, che fa terminare
 * il tutto, chiamando quindi i putchar(), restituendo i caratteri nell'ordine inverso.
 */
void invertiSeq(void)
{
    int carattere;
    carattere = getchar();
    if(carattere == '\n')
    {
        printf("La sequenza inversa e\': ");
        return;
    }

    invertiSeq();
    putchar(carattere);

    return;
}
