/*
 * Esercizio: Programma che controlli se la somma fra due short causa un overflow
 */

#include <stdio.h>
#include <stdlib.h>

short inputOperando();
short safeSum(short op1, short op2);


int main()
{
    short somma, operando1, operando2;

    printf("Inserisci primo operando:");
    operando1 = inputOperando();
    printf("Inserisci secondo operando:");
    operando2 = inputOperando();

    somma = safeSum(operando1, operando2);
    printf("La somma di %hd e %hd e\' %hd", operando1, operando2, somma);

    return 0;
}

/*
 * Questa funzione serve per ottenere in ingresso soltanto interi, positivi e negativi.
 * Lo scanf() può restituire -1, 0 o 1 a seconda di che cosa recupera.
 * Nel nostro caso, deve restituire 1, il che significa che il numero inserito è ok,
 * ovvero un numero positivo o negativo.
 * Nel caso avvenga l'opposto, nello scanf() ho inserito una particolare regex che ha
 * il compito di pulire il buffer, così da ripulire completamente dal valore scorretto inserito.
 */
short inputOperando()
{
    short operando;
    while(scanf("%hd", &operando) != 1)
    {
        scanf("%*[^\n]%*c");
        printf("Operando errato!\n");
        printf("Inserisci operando:");
    }

    return operando;
}

/*
 * Questa funzione fa in modo di riconoscere gli overflow nella somma.
 * Un overflow avviene quando c'è un cambio di segno sommando due valori dello stesso segno.
 * Siccome uno short può valere massimo +32767 e -32768, se questa soglia viene superata,
 * il segno cambia, indicando overflow.
 */
short safeSum(short op1, short op2)
{
    short risultato = op1 + op2;

    if ((op1 > 0 && op2 > 0 && risultato < 0) ||
            (op1 < 0 && op2 < 0 && risultato > 0))
    {
        printf("Overflow");
        exit(1);
    }

    return risultato;
}
