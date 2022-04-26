/*
 * Conta le cifre, spazi e caratteri del testo in ingresso
 */

#include <stdio.h>

int main()
{
    int inputTastiera, i;
    int numeroSpazi = 0;
    int numeroCaratteri = 0;
    int numeroCifre[10];

    //Inizializzazione array delle cifre a 0
    for(i = 0; i < 10; i++)
    {
        numeroCifre[i] = 0;
    }


    /*
     * Input da statiera.
     *  - inputTastiera = getchar(): Utilizzo una variabile int assieme a getchar così da semplificare i controlli,
     *  perchè così utilizzo i valori ASCII per determinare che tipo di carattere sto considerando.
     *  - != EOF: Significa End Of File, si utilizza per intendere il termine dell'input.
     *  - != '\n': Anche questo si utilizza per indicare il termine dell'input, ovvero se rileva un invio.
     */
    while((inputTastiera = getchar()) != EOF && inputTastiera != '\n')
    {
        /*
         * Il primo if controlla se il carattere attuale corrisponde ad un valore numerico, e aumenta il contatore.
         * Il secondo controlla se equivale ad uno spazio.
         * Se non è nessuna delle precedenti, allora viene contato come carattere.
         */
        if(inputTastiera >= '0' && inputTastiera <= '9')
        {
            numeroCifre[inputTastiera - '0']++;
        }
        else if(inputTastiera == ' ' || inputTastiera == '\t')
        {
            numeroSpazi++;
        }

        else
        {
            numeroCaratteri++;
        }
    }

    printf("Cifre: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d: %d\t", i, numeroCifre[i]);
    }

    printf("\nSpazi: %d\nCaratteri: %d", numeroSpazi, numeroCaratteri);

    return 0;
}
